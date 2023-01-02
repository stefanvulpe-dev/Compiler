%{
#include "../headers/utilities.h"
#define ARR_SIZE 1500

extern FILE* yyin;
extern char* yytext;

void* result;
char msg[ARR_SIZE], var_type[ARR_SIZE], var_name[ARR_SIZE], scope[ARR_SIZE], arr_type[ARR_SIZE], init_list[ARR_SIZE], element[ARR_SIZE];
int inum, opi1, opi2;
float fnum, opf1, opf2; 
bool boolean;
char character;
char* string;

struct symbol_table tmp_vars[100];
int tmp_size = 0;
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
%token BGIN END ASSIGN CLASS IF ELSE FOR_LOOP WHILE_LOOP AND OR LTE GTE NEQ EQ
%type <boolean_value>bexp
%type <str_value>str
%type <address>exp
%type <address>aexp
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
                 ;
                
global_declaration : CONST TIP ID ASSIGN exp {
                        types_arr_size = 0;
                        if (strcmp(types_arr[0], $2) == 0) {
                            var_name[0] = '\0';
                            strcpy(scope, "global");
                            strcat(var_name, $3); 
                            sprintf(var_type, "%s %s", $1, $2);
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, $5);
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                   }
                   | TIP ID ASSIGN exp {
                        types_arr_size = 0;
                        if (strcmp(types_arr[0], $1) == 0) {
                            var_name[0] = '\0';
                            strcpy(scope, "global");
                            strcat(var_name, $2); 
                            sprintf(var_type, "%s", $1);
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, $4);
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                   }
                   | CONST TIP ID brackets ASSIGN '{' initialization_list '}' {
                        init_list[0] = '\0';
                        var_name[0] = '\0';
                        if (strcmp(arr_type, $2) == 0) {
                            strcpy(scope, "global");
                            strcat(var_name, $3); 
                            sprintf(var_type, "%s %s[]", $1, $2);
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, $7);
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipul elementelor din lista de initializare este diferit de tipul array-ului");
                        }
                   }
                   | TIP ID brackets ASSIGN '{' initialization_list '}' {
                        init_list[0] = '\0';
                        var_name[0] = '\0';
                        if (strcmp(arr_type, $1) == 0) {
                            strcpy(scope, "global");
                            strcat(var_name, $2); 
                            sprintf(var_type, "%s[]", $1);
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, $6);
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipul elementelor din lista de initializare este diferit de tipul array-ului");
                        }
                   }
                   ;

brackets : '[' INTEGER ']' brackets { 
            if ($2 < 0) {
                yyerror("Dimensiune negativa a array-ului");
            } 
         }
         | '[' INTEGER ']' {
            if ($2 < 0) {
                yyerror("Dimensiune negativa a array-ului");
            } 
         }
         ;

initialization_list : initialization_list_int {
                        strcpy(arr_type, "int");
                        $$ = strrev($1);
                    }
                    | initialization_list_float {
                        strcpy(arr_type, "float");
                        $$ = strrev($1);
                    }
                    | initialization_list_bool {
                        strcpy(arr_type, "bool");
                        $$ = strrev($1);
                    }
                    | initialization_list_char {
                        strcpy(arr_type, "char");
                        $$ = strrev($1);
                    }
                    | initialization_list_string {
                        strcpy(arr_type, "string");
                        $$ = strrev($1);
                    }
                    ;

initialization_list_int : INTEGER ',' initialization_list_int {
                            element[0] = '\0';
                            sprintf(element, "%d", $1); 
                            strcat(init_list, element);
                            strcat(init_list, " ");
                            $$ = strdup(init_list);
                        }
                        | INTEGER {
                            element[0] = '\0';
                            sprintf(element, "%d", $1);
                            strcat(init_list, " ");
                            strcat(init_list, element); 
                            strcat(init_list, " ");
                            $$ = strdup(init_list);
                        }
                        ;
                        
initialization_list_float : FLOAT ',' initialization_list_float {
                            element[0] = '\0';
                            sprintf(element, "%f", $1); 
                            strcat(init_list, element);
                            strcat(init_list, " ");
                            $$ = strdup(init_list);
                          }
                          | FLOAT {
                            element[0] = '\0';
                            sprintf(element, "%f", $1);
                            strcat(init_list, " ");
                            strcat(init_list, element); 
                            strcat(init_list, " ");
                            $$ = strdup(init_list);
                          }
                          ;

initialization_list_bool : BOOLEAN ',' initialization_list_bool {
                            element[0] = '\0';
                            sprintf(element, "%s", $1 ? "true" : "false");
                            strcat(init_list, element); 
                            strcat(init_list, " ");
                            $$ = strdup(init_list);
                         }
                        | BOOLEAN {
                            element[0] = '\0';
                            sprintf(element, "%s", $1 ? "true" : "false");
                            strcat(init_list, " ");
                            strcat(init_list, element);
                            strcat(init_list, " "); 
                            $$ = strdup(init_list);
                        }
                        ;

initialization_list_char : CHAR ',' initialization_list_char {
                            element[0] = '\0';
                            sprintf(element, "%c", $1); 
                            strcat(init_list, element);
                            strcat(init_list, " ");
                            $$ = strdup(init_list);
                        }
                        | CHAR {
                            element[0] = '\0';
                            sprintf(element, "%c", $1);
                            strcat(init_list, " ");
                            strcat(init_list, element);
                            strcat(init_list, " "); 
                            $$ = strdup(init_list);
                        }
                        ;

initialization_list_string : STRING ',' initialization_list_string {
                                element[0] = '\0';
                                sprintf(element, "%s", $1);
                                strcat(init_list, element); 
                                strcat(init_list, " ");
                                $$ = strdup(init_list);
                            }
                            | STRING {
                                element[0] = '\0';
                                sprintf(element, "%s", $1);
                                strcat(init_list, " ");
                                strcat(init_list, element); 
                                strcat(init_list, " ");
                                $$ = strdup(init_list);
                            }
                            ;

functions : function_declaration ';' functions 
          | function_declaration '{' function_statements '}' functions 
          | classes
          ;

function_declaration : TIP ID '(' ')'  { 
                        strcpy(scope, $2);
                        insertFunction($1, $2, "");
                        var_type[0] = '\0';
                     }
                     | TIP ID '(' param_list ')' { 
                        strcpy(scope, $2); 
                        insertFunction($1, $2, strrev(var_type));
                        var_type[0] = '\0';
                     }
                     ;

param_list : TIP ID ',' param_list {
                strcat(var_type, $1);
                strcat(var_type, " ");
           }
           | TIP ID brackets ',' param_list {
                char tmp[50];
                sprintf(tmp, "%s[]", $1);
                strcat(var_type, tmp);
                strcat(var_type, " ");
           }
           | TIP ID {
                strcat(var_type, $1);
                strcat(var_type, " ");
           }
           | TIP ID brackets {
                char tmp[50];
                sprintf(tmp, "%s[]", $1);
                strcat(var_type, tmp);
                strcat(var_type, " ");
           }
           ;

function_statements : function_statement function_statements 
                    | %empty
                    ;

function_statement : TIP ID ASSIGN exp ';' {
                        if (strcmp(types_arr[0], $1) == 0) {
                            var_name[0] = '\0';
                            insertVar(variables_table, &vars_size, $2, $1, scope, $4);
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                        types_arr_size = 0;
                    }
                    | CONST TIP ID ASSIGN exp ';' {
                        if (strcmp(types_arr[0], $2) == 0) {
                            var_name[0] = '\0';
                            strcpy(var_name, $3);
                            sprintf(var_type, "%s %s", $1, $2);
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, $5);
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                        types_arr_size = 0;
                    }
                    | ID ASSIGN exp ';' {
                        if (strcmp(types_arr[0], search_var($1, scope)) != 0) {
                            yyerror("Tipuri de date incompatibile");
                        }
                        types_arr_size = 0;
                    }
                    | ID '[' INTEGER ']' ASSIGN exp ';' {
                        if ($3 < 0) {
                            yyerror("Index negativ");
                        }
                        if (strstr(search_var($1, scope), types_arr[0]) == NULL) {
                            yyerror("Tipuri incompatibile");
                        }
                        types_arr_size = 0;
                    }
                    | ID '[' ID ']' ASSIGN exp ';' {
                        if (strstr(search_var($3, scope), "int") == NULL) {
                            yyerror("Index gresit");
                        } 
                        if (strstr(search_var($3, scope), "int") && *((int*)get_value($3, "int", scope, variables_table, vars_size)) < 0) {
                            yyerror("Index gresit");
                        } 
                        if (strstr(search_var($1, scope), types_arr[0]) == NULL) {
                            yyerror("Tipuri incompatibile");
                        }
                        types_arr_size = 0;
                    }
                    | ID '(' ')' ';' {
                        search_function($1, "");
                    }
                    | ID '(' params ')' ';' {
                        search_function($1, strrev(var_type)); 
                        var_type[0] = '\0';
                    }
                    | ID '-' '>' ID ';'
                    | ID '-' '>' ID '(' ')' ';'
                    | ID '-' '>' ID '(' param ')' ';'
                    | IF '(' bexp ')' '{' function_statements '}' 
                    | IF '(' bexp ')' '{' function_statements '}' ELSE '{' function_statements '}'
                    | WHILE_LOOP '(' bexp ')' '{' function_statements '}' 
                    | FOR_LOOP  '(' init ';' cond ';' increment ')' '{' function_statements '}' 
                    ;

classes : CLASS ID '{' class_declarations '}' ';' classes { 
            strcpy(scope, $2); 
            update_table(tmp_vars, variables_table, &tmp_size, &vars_size, scope);
            tmp_size = 0;
        }
        | program 
        ;

class_declarations : class_declaration ';' class_declarations 
                   | class_declaration ';'
                   ;

class_declaration : CONST TIP ID ASSIGN exp {
                        if (strcmp(types_arr[0], $2) == 0) {
                            var_name[0] = '\0';
                            strcat(var_name, $3); 
                            sprintf(var_type, "%s %s", $1, $2);
                            insertVar(tmp_vars, &tmp_size, var_name, var_type, "", $5);
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                        var_type[0] = '\0';
                        types_arr_size = 0;
                  }
                  | TIP ID ASSIGN exp {
                        if (strcmp(types_arr[0], $1) == 0) {
                            var_name[0] = '\0';
                            strcat(var_name, $2); 
                            sprintf(var_type, "%s", $1);
                            insertVar(tmp_vars, &tmp_size, var_name, var_type, "", $4);
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                        var_type[0] = '\0';
                        types_arr_size = 0;
                  }
                  | TIP ID {
                        var_name[0] = '\0';
                        strcat(var_name, $2); 
                        sprintf(var_type, "%s", $1);
                        result = malloc(sizeof(int)); 
                        *((int*)result) = 0;
                        insertVar(tmp_vars, &tmp_size, var_name, var_type, "", result);
                        var_type[0] = '\0';
                  }
                  | TIP ID '(' ')' 
                  | TIP ID '(' param_list ')' {var_type[0] = '\0';}
                  | CONST TIP ID brackets {
                        var_name[0] = '\0';
                        strcat(var_name, $3); 
                        sprintf(var_type, "%s %s[]", $1, $2);
                        insertVar(tmp_vars, &tmp_size, var_name, var_type, "", "");
                        var_type[0] = '\0';
                  }
                  | TIP ID brackets {
                        var_name[0] = '\0';
                        strcat(var_name, $2); 
                        sprintf(var_type, "%s[]", $1);
                        insertVar(tmp_vars, &tmp_size, var_name, var_type, "", "");
                        var_type[0] = '\0';
                  }
                  ;

program : BGIN '(' ')' ':' local_statements END {printf("Program corect sintactic.\n");}
        ;

local_statements : local_statement local_statements 
                 | %empty 
                 ;

local_statement : TIP ID ASSIGN exp ';' {
                    if (strcmp(types_arr[0], $1) == 0) {
                        var_name[0] = '\0';
                        strcpy(scope, "main");
                        insertVar(variables_table, &vars_size, $2, $1, scope, $4);
                    }
                    else {
                        yyerror("Tipuri de date incompatibile");
                    }
                    types_arr_size = 0;
                }
                | CONST TIP ID ASSIGN exp ';' {
                    if (strcmp(types_arr[0], $2) == 0) {
                        var_name[0] = '\0';
                        strcpy(scope, "main");
                        strcpy(var_name, $3);
                        sprintf(var_type, "%s %s", $1, $2);
                        insertVar(variables_table, &vars_size, var_name, var_type, scope, $5);
                        var_type[0] = '\0';
                    }
                    else {
                        yyerror("Tipuri de date incompatibile");
                    }
                    types_arr_size = 0;
                }
                | ID ASSIGN exp ';' {
                    if (strcmp(types_arr[0], search_var($1, scope)) != 0) {
                        yyerror("Tipuri de date incompatibile");
                    }
                    types_arr_size = 0;
                }
                | ID '[' INTEGER ']' ASSIGN exp ';' {
                    if ($3 < 0) {
                        yyerror("Index negativ al array-ului");
                    }
                    if (strstr(search_var($1, scope), types_arr[0]) == NULL) {
                        yyerror("Tipuri incompatibile");
                    }
                    types_arr_size = 0;
                }
                | ID '[' ID ']' ASSIGN exp ';' {
                    strcpy(scope, "main");
                    if (strstr(search_var($3, scope), "int") == NULL) {
                        yyerror("Index gresit");
                    } 
                    if (strstr(search_var($3, scope), "int") && *((int*)get_value($3, "int", scope, variables_table, vars_size)) < 0) {
                        yyerror("Index gresit");
                    }
                    if (strstr(search_var($1, scope), types_arr[0]) == NULL) {
                        yyerror("Tipuri incompatibile");
                    }
                    types_arr_size = 0;
                }
                | ID '(' ')' ';' {
                    search_function($1, "");
                }
                | ID '(' params ')' ';' {
                    search_function($1, strrev(var_type));
                    var_type[0] = '\0';
                }
                | ID '-' '>' ID ';'
                | ID '-' '>' ID '(' ')' ';'
                | ID '-' '>' ID '(' params ')' ';'
                | IF '(' bexp ')' '{' local_statements '}' 
                | IF '(' bexp ')' '{' local_statements '}' ELSE '{' local_statements '}'
                | WHILE_LOOP '(' bexp ')' '{' local_statements '}' 
                | FOR_LOOP  '(' init ';' cond ';' increment ')' '{' local_statements '}' 
                ;

init : TIP ID ASSIGN exp {
        if (strcmp(types_arr[0], $1) == 0) {
            var_name[0] = '\0'; 
            strcpy(var_name, $2);
            sprintf(var_type, "%s", $1);
            insertVar(variables_table, &vars_size, var_name, var_type, "main", $4);
            var_type[0] ='\0';
        }
        else {
            yyerror("Tipuri de date incompatibile");
        }
        types_arr_size = 0;
     }
     | %empty;

cond : bexp 
     | %empty
     ;

increment : ID ASSIGN exp {types_arr_size = 0;}
          | %empty
          ;

params : param ',' params 
       | param 
       ;

param : ID '(' ')' {
        strcat(var_type, search_function($1, ""));
        strcat(var_type, " ");
      }
      | ID '[' INTEGER ']' {
        if ($3 > 0) {
            strncpy(msg, search_var($1, scope), strlen(search_var($1, scope)) - 2);
            strcat(msg, "\0");
            strcat(var_type, msg);
            strcat(var_type, " ");
        }
        else {
            yyerror("Index negativ");
        }
      }
      | ID '[' ID ']' {
         if (strstr(search_var($3, scope), "int") == NULL) {
            yyerror("Index gresit");
        } 
        if (strstr(search_var($3, scope), "int") && *((int*)get_value($3, "int", scope, variables_table, vars_size)) < 0) {
            yyerror("Index negativ");
        }
        strncpy(msg, search_var($1, scope), strlen(search_var($1, scope)) - 2);
        strcat(msg, "\0");
        strcat(var_type, msg);
        strcat(var_type, " ");
      }
      | exp {
        strcat(var_type, types_arr[0]); 
        strcat(var_type, " ");
        types_arr_size = 0;
      }
      ;

exp : aexp {
        if (strcmp(types_arr[0], "int") == 0) {
            printf("S-a recunoscut valoarea numerica %d.\n", *((int*)$1));
            inum = *((int*)$1); 
            result = malloc(sizeof(int)); 
            memcpy(result, &inum, sizeof(int)); 
        }
        else {
            printf("S-a recunoscut valoarea numerica %f.\n", *((float*)$1));
            fnum = *((float*)$1); 
            result = malloc(sizeof(float)); 
            memcpy(result, &fnum, sizeof(float)); 
        }
        $$ = result;
    }
    | bexp {
        printf("S-a recunoscut valoarea booleana: %s.\n", $1 ? "true" : "false");
        boolean = $1; 
        result = (void*)(malloc(sizeof(bool))); 
        memcpy(result, &boolean, sizeof(bool)); 
        strcpy(types_arr[0], "bool");
        $$ = result;    
    }
    | str {
        printf("S-a recunoscut sirul %s.\n", $1);
        string = strdup($1); 
        result = (void*)(malloc(strlen(string) + 1)); 
        memcpy(result, string, strlen(string));
        strcpy(types_arr[0], "string");
        $$ = result;
    }
    | CHAR {
        printf("S-a recunoscut caracterul %c.\n", $1);
        character = $1; 
        result = (void*)(malloc(sizeof(char))); 
        memcpy(result, &character, sizeof(char));
        strcpy(types_arr[0], "char");
        $$ = result;
    }
    ;
        
aexp : aexp '+' aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1);
                opi2 = *((int*)$3);
                inum = opi1 + opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)$1);
                opf2 = *((float*)$3);
                fnum = opf1 + opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            $$ = result;
        }
    }
    | '(' aexp '+' aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2);
                opi2 = *((int*)$4);
                inum = opi1 + opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)$2);
                opf2 = *((float*)$4);
                fnum = opf1 + opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            $$ = result;
        }
    }
    | aexp '-' aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1);
                opi2 = *((int*)$3);
                inum = opi1 - opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)$1);
                opf2 = *((float*)$3);
                fnum = opf1 - opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            $$ = result;
        }
    }
    | '(' aexp '-' aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2);
                opi2 = *((int*)$4);
                inum = opi1 - opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)$2);
                opf2 = *((float*)$4);
                fnum = opf1 - opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            $$ = result;
        }
    }
    | aexp '*' aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1);
                opi2 = *((int*)$3);
                inum = opi1 * opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)$1);
                opf2 = *((float*)$3);
                fnum = opf1 * opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
                $$ = result;
            }
            $$ = result;
        }
    }
    | '('aexp '*' aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2);
                opi2 = *((int*)$4);
                inum = opi1 * opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)$2);
                opf2 = *((float*)$4);
                fnum = opf1 * opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            $$ = result;
        }
    }
    | aexp '/' aexp {
         if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1);
                opi2 = *((int*)$3);
                if (opi2 != 0) {
                    inum = opi1 / opi2;
                    result = malloc(sizeof(int)); 
                    memcpy(result, &inum, sizeof(int));
                    $$ = result;
                }
                else {
                    yyerror("Impartire la 0");
                }
            }
            else {
                opf1 = *((float*)$1);
                opf2 = *((float*)$3);
                if (opf2 != 0) {
                    fnum = opf1 / opf2;
                    result = malloc(sizeof(float)); 
                    memcpy(result, &fnum, sizeof(float));
                    $$ = result;
                }
                else {
                    yyerror("Impartire la 0");  
                }
            }
        }
    }
    | '('aexp '/' aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2);
                opi2 = *((int*)$4);
                if (opi2 != 0) {
                    inum = opi1 / opi2;
                    result = malloc(sizeof(int)); 
                    memcpy(result, &inum, sizeof(int));
                    $$ = result;
                }
                else {
                    yyerror("Impartire la 0"); 
                }
            }
            else {
                opf1 = *((float*)$2);
                opf2 = *((float*)$4);
                if (opf2 != 0) {
                    fnum = opf1 / opf2;
                    result = malloc(sizeof(float)); 
                    memcpy(result, &fnum, sizeof(float));
                    $$ = result;
                }
                else {
                    yyerror("Impartire la 0");  
                }
            }
        }
    }
    | aexp '%' aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1);
                opi2 = *((int*)$3);
                if (opi2 != 0) {
                    inum = opi1 % opi2;
                    result = malloc(sizeof(int)); 
                    memcpy(result, &inum, sizeof(int));
                    $$ = result;
                }
                else {
                    yyerror("Eroare, impartire la 0");  
                }
            }
            else {
                yyerror("Operanzii din expresie nu sunt de tip intreg");
            }
        }
    }
    | '(' aexp '%' aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2);
                opi2 = *((int*)$4);
                if (opi2 != 0) {
                    inum = opi1 % opi2;
                    result = malloc(sizeof(int)); 
                    memcpy(result, &inum, sizeof(int));
                    $$ = result;
                }
                else {
                    yyerror("Eroare, impartire la 0");  
                }
            }
            else {
                yyerror("Operanzii din expresie nu sunt de tip intreg");
            }
        }
    }
    | aexp '^' aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1);
                opi2 = *((int*)$3);
                inum = pow(opi1, opi2);
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)$1);
                opf2 = *((float*)$3);
                fnum = pow(opf1, opf2);
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            $$ = result;
        }
    }
    | '('aexp '^' aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2);
                opi2 = *((int*)$4);
                inum = pow(opi1, opi2);
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)$2);
                opf2 = *((float*)$4);
                fnum = pow(opf1, opf2);
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            $$ = result;
        }
    }
    | INTEGER {
        strcpy(types_arr[types_arr_size++], "int"); 
        inum = $1; 
        result = malloc(sizeof(int)); 
        memcpy(result, &inum, sizeof(int));
        $$ = result;
    }
    | FLOAT {
        strcpy(types_arr[types_arr_size++], "float"); 
        fnum = $1; 
        result = malloc(sizeof(float)); 
        memcpy(result, &fnum, sizeof(float));
        $$ = result;
    }
    | ID {
        if (strcmp(search_var($1, scope), "undefined") == 0) {
            sprintf(msg, "%s %s %s", "Variabila", $1, "nu este declarata");
            yyerror(msg); 
        }
        else {
            strcpy(types_arr[types_arr_size++], search_var($1, scope));
            if (strcmp(search_var($1, scope), "int") == 0) {
                result = malloc(sizeof(int));
                memcpy(result, get_value($1, search_var($1, scope), scope, variables_table, vars_size), sizeof(int));
            }
            else {
                result = malloc(sizeof(float)); 
                memcpy(result, get_value($1, search_var($1, scope), scope, variables_table, vars_size), sizeof(float)); 
            }
            $$ = result;
        }
    }
    ;

bexp : aexp '<' aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1); 
                opi2 = *((int*)$3);
                $$ = (opi1 < opi2); 
            }
            else {
                opf1 = *((float*)$1); 
                opf2 = *((float*)$3);
                $$ = (opf1 < opf2);  
            }
        }
     }
     | '('aexp '<' aexp ')'{
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2); 
                opi2 = *((int*)$4);
                $$ = (opi1 < opi2); 
            }
            else {
                opf1 = *((float*)$2); 
                opf2 = *((float*)$4);
                $$ = (opf1 < opf2);  
            }
        }
     }
     | aexp '>' aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1); 
                opi2 = *((int*)$3);
                $$ = (opi1 > opi2); 
            }
            else {
                opf1 = *((float*)$1); 
                opf2 = *((float*)$3);
                $$ = (opf1 > opf2);  
            }
        }
    }
     | '('aexp '>' aexp ')'{
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2); 
                opi2 = *((int*)$4);
                $$ = (opi1 > opi2); 
            }
            else {
                opf1 = *((float*)$2); 
                opf2 = *((float*)$4);
                $$ = (opf1 > opf2);  
            }
        }
     }
     | aexp LTE aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1); 
                opi2 = *((int*)$3);
                $$ = (opi1 <= opi2); 
            }
            else {
                opf1 = *((float*)$1); 
                opf2 = *((float*)$3);
                $$ = (opf1 <= opf2);  
            }
        }
     }
     | '(' aexp LTE aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2); 
                opi2 = *((int*)$4);
                $$ = (opi1 <= opi2); 
            }
            else {
                opf1 = *((float*)$2); 
                opf2 = *((float*)$4);
                $$ = (opf1 <= opf2);  
            }
        }
     }
     | aexp GTE aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1); 
                opi2 = *((int*)$3);
                $$ = (opi1 >= opi2); 
            }
            else {
                opf1 = *((float*)$1); 
                opf2 = *((float*)$3);
                $$ = (opf1 >= opf2);  
            }
        }
     }
     | '(' aexp GTE aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2); 
                opi2 = *((int*)$4);
                $$ = (opi1 >= opi2); 
            }
            else {
                opf1 = *((float*)$2); 
                opf2 = *((float*)$4);
                $$ = (opf1 >= opf2);  
            }
        }
     }
     | aexp EQ aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1); 
                opi2 = *((int*)$3);
                $$ = (opi1 == opi2); 
            }
            else {
                opf1 = *((float*)$1); 
                opf2 = *((float*)$3);
                $$ = (opf1 == opf2);  
            }
        }
     }
     | '(' aexp EQ aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2); 
                opi2 = *((int*)$4);
                $$ = (opi1 == opi2); 
            }
            else {
                opf1 = *((float*)$2); 
                opf2 = *((float*)$4);
                $$ = (opf1 == opf2);  
            }
        }
     }
     | aexp NEQ aexp {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$1); 
                opi2 = *((int*)$3);
                $$ = (opi1 != opi2); 
            }
            else {
                opf1 = *((float*)$1); 
                opf2 = *((float*)$3);
                $$ = (opf1 != opf2);  
            }
        }
     }
     | '(' aexp NEQ aexp ')' {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)$2); 
                opi2 = *((int*)$4);
                $$ = (opi1 != opi2); 
            }
            else {
                opf1 = *((float*)$2); 
                opf2 = *((float*)$4);
                $$ = (opf1 != opf2);  
            }
        }
     } 
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
    | str '^' aexp {
        if (strcmp(types_arr[0], "int") == 0) {
            inum = *((int*)$3);
            if(inum == 0) {
                $$ = '\0';
            }
            else {   
                char *s = strdup($1);
                for(int i = 1; i < inum; ++i)
                    s = strcat(s, $1);
                $$ = s;
            }
        }  
        else {
            yyerror("Exponentul nu este de tip intreg");
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
    FILE* fptr_fct = fopen(argv[3], "w");
    yyparse();

    print_symbol_table(fptr_vars);

    print_functions_table(fptr_fct);

    fclose(fptr_vars);

    fclose(fptr_fct);

    int x, y, z;

    printf("Enter the value for x: "); 
    scanf("%d", &x);
    printf("Enter the value for y: "); 
    scanf("%d", &y);
    printf("Enter the value for z: "); 
    scanf("%d", &z);

    /* (x + 5 * y) / z */

    AstNode* node1 = new_ast_node(AST_VAR, x, NULL, NULL); 
    AstNode* node2 = new_ast_node(AST_INTEGER, 5, NULL, NULL);
    AstNode* node3 = new_ast_node(AST_VAR, y, NULL, NULL);
    AstNode* node4 = new_ast_node(AST_VAR, z, NULL, NULL);
    AstNode* node5 = new_ast_node(AST_MULTIPLY, 0, node2, node3);
    AstNode* node6 = new_ast_node(AST_PLUS, 0, node1, node5);
    AstNode* root = new_ast_node(AST_DIVIDE, 0, node6, node4);

    int result = eval_ast(root);
    printf("Rezultat evaluare AST: %d\n", result);  
    
    free_ast(root);

    TypeNode* a = new_node(PINT, NULL, NULL);
    TypeNode* b = new_node(PINT, NULL, NULL);
    TypeNode* c = new_node(PINT, NULL, NULL);
    TypeNode* plus = new_node(PLUS, a, b); 
    TypeNode* type = new_node(MULTIPLY, c, plus);

    ValueType result_type = TypeOf(type);
    print_type(result_type);

    return 0;
} 