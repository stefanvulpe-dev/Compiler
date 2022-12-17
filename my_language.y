%{
#include "../headers/utilities.h"
#define ARR_SIZE 1500

extern FILE* yyin;
extern char* yytext;

void* result;
char msg[ARR_SIZE], var_type[ARR_SIZE], var_name[ARR_SIZE], scope[ARR_SIZE], arr_type[ARR_SIZE], init_list[ARR_SIZE], element[ARR_SIZE];
int inum;
float fnum; 
bool boolean;
char character;
char* string;
%}

%union {
    int int_value;
    char* str_value;
    char char_value;
    float float_value;
    bool boolean_value;
    void* address;
}

%start global_variables
%token <int_value>INTEGER 
%token <float_value>FLOAT 
%token <str_value>ID
%token <str_value>CONST
%token <str_value>STRING
%token <char_value>CHAR
%token <boolean_value>BOOLEAN
%token <str_value>TIP
%token BGIN END ASSIGN CLASS AND OR LTE GTE NEQ EQ
%type <int_value>aexp_int
%type <float_value>aexp_float
%type <boolean_value>bexp
%type <str_value>str
%type <address>exp
%type <str_value>initialization_list
%type <str_value>initialization_list_int
%type <str_value>initialization_list_float
%type <str_value>initialization_list_bool
%type <str_value>initialization_list_char
%type <str_value>initialization_list_string

%left AND OR
%left '<' '>' LTE GTE NEQ EQ
%left '!'
%left '+' '-'
%left '/' '*' '%' '^'

%%
global_variables : global_declaration ';' global_variables 
                 | functions

global_declaration : CONST TIP ID ASSIGN exp {
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, $3); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s %s", $1, $2);
                        insertVar(var_name, var_type, $5);
                   }
                   | TIP ID ASSIGN exp {
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, $2); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s", $1);
                        insertVar(var_name, var_type, $4);
                   }
                   | CONST TIP ID brackets ASSIGN '{' initialization_list '}' {
                        strcpy(arr_type, $2);
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, $3); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s %s*", $1, $2);
                        insertVar(var_name, var_type, $7);
                   }
                   | TIP ID brackets ASSIGN '{' initialization_list '}' {
                        strcpy(arr_type, $1);
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, $2); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s*", $1);
                        insertVar(var_name, var_type, $6);
                   }
                   ;

brackets : '[' INTEGER ']' brackets { 
            if ($2 < 0) {
                yyerror("Eroare. Dimensiune negativa a array-ului");
            } 
         }
         | '[' INTEGER ']' {
            if ($2 < 0) {
                yyerror("Eroare. Dimensiune negativa a array-ului");
            } 
         }
         ;

initialization_list : initialization_list_int {$$ = $1;}
                    | initialization_list_float {$$ = $1;}
                    | initialization_list_bool {$$ = $1;}
                    | initialization_list_char {$$ = $1;}
                    | initialization_list_string {$$ = $1;}
                    ;

initialization_list_int : INTEGER ',' initialization_list_int {
                            element[0] = '\0';
                            sprintf(element, "%d", $1); 
                            strcat(init_list, element);
                            strcat(init_list, ", ");
                        }
                        | INTEGER {
                            element[0] = '\0';
                            sprintf(element, "%d", $1);
                            strcat(init_list, element); 
                            $$ = strdup(init_list);
                            init_list[0] = '\0';
                        }
                        ;
                        
initialization_list_float : FLOAT ',' initialization_list_float {
                            element[0] = '\0';
                            sprintf(element, "%f", $1); 
                            strcat(init_list, element);
                            strcat(init_list, ", ");
                          }
                          | FLOAT {
                            element[0] = '\0';
                            sprintf(element, "%f", $1);
                            strcat(init_list, element); 
                            $$ = strdup(init_list);
                            init_list[0] = '\0';
                          }
                          ;

initialization_list_bool : BOOLEAN ',' initialization_list_bool {
                            element[0] = '\0';
                            sprintf(element, "%s", $1 ? "true" : "false");
                            strcat(init_list, element); 
                            strcat(init_list, ", ");
                         }
                        | BOOLEAN {
                            element[0] = '\0';
                            sprintf(element, "%s", $1 ? "true" : "false");
                            strcat(init_list, element); 
                            $$ = strdup(init_list);
                            init_list[0] = '\0';
                        }
                        ;

initialization_list_char : CHAR ',' initialization_list_char {
                            element[0] = '\0';
                            sprintf(element, "%c", $1); 
                            strcat(init_list, element);
                            strcat(init_list, ", ");
                         }
                        | CHAR {
                            element[0] = '\0';
                            sprintf(element, "%c", $1);
                            strcat(init_list, element); 
                            $$ = strdup(init_list);
                            init_list[0] = '\0';
                        }
                        ;

initialization_list_string : STRING ',' initialization_list_int {
                                element[0] = '\0';
                                sprintf(element, "%s", $1);
                                strcat(init_list, element); 
                                strcat(init_list, ", ");
                            }
                            | STRING {
                                element[0] = '\0';
                                sprintf(element, "%s", $1);
                                strcat(init_list, element); 
                                $$ = strdup(init_list);
                                init_list[0] = '\0';
                            }
                            ;

functions : function_declaration ';' functions 
          | function_declaration '{' statements '}' functions
          | classes
          ;

function_declaration : TIP ID '(' ')'  { strcpy(scope, $2); }
                     | TIP ID '(' param_list ')' { strcpy(scope, $2); }
                     ;

param_list : TIP ID ',' param_list
           | TIP ID brackets ',' param_list
           | TIP ID
           | TIP ID brackets
           ;

classes : CLASS ID '{' class_declarations '}' ';' classes { strcpy(scope, $2); }
        | program
        ;

class_declarations : class_declaration ';' class_declarations 
                   | class_declaration ';'
                   ;

class_declaration : CONST TIP ID ASSIGN exp 
                  | TIP ID ASSIGN exp 
                  | TIP ID 
                  | TIP ID '(' ')'
                  | TIP ID '(' param_list ')'
                  | CONST TIP ID brackets ASSIGN exp
                  | TIP ID brackets
                  ;

program : BGIN '(' ')' ':' statements END {printf("Program corect sintactic.\n");}
        ;

statements : statement ';' statements 
           | %empty
           ;

statement : TIP ID ASSIGN exp 
          | CONST TIP ID ASSIGN exp
          | TIP ID
          | ID ASSIGN exp
          | ID '(' ')'
          | ID '(' params ')'
          | ID '-' '>' ID 
          | ID '-' '>' ID '(' ')'
          | ID '-' '>' ID '(' param ')'
          ;

params : param ',' params 
       | param 
       ;

param : ID '(' ')'
      | ID '(' params ')'
      | exp
      ;

exp : aexp_int {
        printf("S-a recunoscut valoarea numerica %d.\n", $1);
        inum = $1; 
        result = (void*)(malloc(sizeof(int))); 
        memcpy(result, &inum, sizeof(int)); 
        $$ = result;
    }
    | aexp_float {
        printf("S-a recunoscut numarul real %f.\n", $1);
        fnum = $1; 
        result = (void*)(malloc(sizeof(float))); 
        memcpy(result, &fnum, sizeof(float)); 
        $$ = result;
    } 
    | bexp {
        printf("S-a recunoscut valoarea booleana: %s.\n", $1 ? "true" : "false");
        boolean = $1; 
        result = (void*)(malloc(sizeof(bool))); 
        memcpy(result, &boolean, sizeof(bool)); 
        $$ = result;    
    }
    | str {
        printf("S-a recunoscut sirul %s.\n", $1);
        string = strdup($1); 
        result = (void*)(malloc(strlen(string) + 1)); 
        memcpy(result, string, strlen(string));
        $$ = result;
    }
    | CHAR {
        printf("S-a recunoscut caracterul %c.\n", $1);
        character = $1; 
        result = (void*)(malloc(sizeof(char))); 
        memcpy(result, &character, sizeof(char));
        $$ = result;
    }
    ;
        
aexp_int : aexp_int '+' aexp_int {$$ = $1 + $3;}
         | '(' aexp_int '+' aexp_int ')' {$$ = $2 + $4;}
         | aexp_int '-' aexp_int {$$ = $1 - $3;}
         | '(' aexp_int '-' aexp_int ')' {$$ = $2 - $4;}
         | aexp_int '*' aexp_int {$$ = $1 * $3;}
         | '('aexp_int '*' aexp_int ')' {$$ = $2 * $4;}
         | aexp_int '/' aexp_int {
                if ($3 != 0)
                    $$ = $1 / $3;
                else {
                    printf("Eroare, impartire la 0.\n");  
                    exit(0);  
                }
            }
         | '('aexp_int '/' aexp_int ')' {$$ = $2 / $4;}
         | aexp_int '%' aexp_int {$$ = $1 % $3;}
         | '(' aexp_int '%' aexp_int ')' {$$ = $2 % $4;}
         | aexp_int '^' aexp_int {$$ = pow($1, $3);}
         | '('aexp_int '^' aexp_int ')' {$$ = pow($2, $4);}
         | INTEGER {$$ = $1;}
         | ID {
            if (strcmp(TypeOf($1), "int") == 0) {
                $$ = *((int*)Eval($1));
            }
            else {
                sprintf(msg, "%s %s %s", "Variabila", $1, "nu este de tip int sau nu este declarata");
                yyerror(msg); 
            }
        }
        ;

aexp_float : aexp_float '+' aexp_float {$$ = $1 + $3;}
           | '(' aexp_float '+' aexp_float ')' {$$ = $2 + $4;}
           | aexp_float '-' aexp_float {$$ = $1 - $3;}
           | '(' aexp_float '-' aexp_float ')' {$$ = $2 - $4;}
           | aexp_float '*' aexp_float {$$ = $1 * $3;}
           | '('aexp_float '*' aexp_float ')' {$$ = $2 * $4;}
           | aexp_float '/' aexp_float {
                if ($3 != 0)
                    $$ = $1 / $3;
                else {
                    printf("Eroare, impartire la 0.\n");  
                    exit(0);  
                }
            }
           | '('aexp_float '/' aexp_float ')' {$$ = $2 / $4;}
           | aexp_float '^' aexp_float {$$ = pow($1, $3);}
           | '('aexp_float '^' aexp_float ')' {$$ = pow($2, $4);}
           | FLOAT {$$ = $1;}
           | ID {
                if (strcmp(TypeOf($1), "float") == 0) {
                    $$ = *((float*)Eval($1));
                }
                else {
                    sprintf(msg, "%s %s %s", "Variabila", $1, "nu este de tip float sau nu este declarata");
                    yyerror(msg); 
                }
            }
           ;

bexp : aexp_int '<' aexp_int {$$ = ($1 < $3);}
     | '('aexp_int '<' aexp_int ')'{$$ = ($2 < $4);}
     | aexp_int '>' aexp_int {$$ = ($1 > $3);}
     | '('aexp_int '>' aexp_int ')'{$$ = ($2 > $4);}
     | aexp_int LTE aexp_int {$$ = ($1 <= $3);}
     | '(' aexp_int LTE aexp_int ')' {$$ = ($2 <= $4);}
     | aexp_int GTE aexp_int {$$ = ($1 >= $3);}
     | '(' aexp_int GTE aexp_int ')' {$$ = ($2 >= $4);}
     | aexp_int EQ aexp_int {$$ = ($1 == $3);}
     | '(' aexp_int EQ aexp_int ')' {$$ = ($2 == $4);}
     | aexp_int NEQ aexp_int {$$ = ($1 != $3);}
     | '(' aexp_int NEQ aexp_int ')' {$$ = ($2 != $4);} 
     | aexp_float '<' aexp_float {$$ = ($1 < $3);}
     | '('aexp_float '<' aexp_float ')'{$$ = ($2 < $4);}
     | aexp_float '>' aexp_float {$$ = ($1 > $3);}
     | '('aexp_float '>' aexp_float ')'{$$ = ($2 > $4);}
     | aexp_float LTE aexp_float {$$ = ($1 <= $3);}
     | '(' aexp_float LTE aexp_float ')' {$$ = ($2 <= $4);}
     | aexp_float GTE aexp_float {$$ = ($1 >= $3);}
     | '(' aexp_float GTE aexp_float ')' {$$ = ($2 >= $4);}
     | aexp_float EQ aexp_float {$$ = ($1 == $3);}
     | '(' aexp_float EQ aexp_float ')' {$$ = ($2 == $4);}
     | aexp_float NEQ aexp_float {$$ = ($1 != $3);}
     | '(' aexp_float NEQ aexp_float ')' {$$ = ($2 != $4);} 
     | bexp AND bexp {$$ = ($1 && $3);}
     | '(' bexp AND bexp ')' {$$ = ($2 && $4);}
     | bexp OR bexp {$$ = ($1 || $3);}
     | '(' bexp OR bexp ')' {$$ = ($2 || $4);}
     | bexp EQ bexp {$$ = ($1 == $3);}
     | '(' bexp EQ bexp ')' {$$ = ($2 == $4);}
     | bexp NEQ bexp {$$ = ($1 != $3);}
     | '(' bexp NEQ bexp ')' {$$ = ($2 != $4);}
     | '!' bexp {$$ = (!$2);}
     | BOOLEAN {$$ = $1;}
     ;

str : str '+' str {
        char *s = strdup($1); 
        strcat(s, $3); 
        $$ = s;        
    }
    | str '^' aexp_int {
        if($3 == 0) {
            $$ = '\0';
        }
        else {   
            char *s = strdup($1);
			for(int i = 1; i < $3; ++i)
			    s = strcat(s, $1);
            $$ = s;
        }   
    }
    | str '%' str {
        char* aux = strdup("");
        char* aux2 = strdup($1);
        char* aux3 = strdup($3);
        int i = 0;
        while(aux2[i] != '\0' && aux3[i] != '\0') {
            strncat(aux, aux2 + i, 1);
            strncat(aux, aux3 + i, 1);
            ++i;
        }
        strcat(aux, "\0");
        $$ = aux;
    }
    | STRING  {$$ = strdup($1);}
    ;
%%

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* fptr_vars = fopen(argv[2], "w");

    yyparse();

    print_symbol_table(fptr_vars);

    fclose(fptr_vars);
} 