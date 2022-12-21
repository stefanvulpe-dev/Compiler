#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

extern int yylineno;

void yyerror(char * s);
int yylex();

char types_arr[256][256];
int types_arr_size = 0;

struct symbol_table {
    char* name;
    char* scope; 
    char* type;
    void* address;
} variables_table[150];

int vars_size = 0;

struct symbol_table_functions {
    char* returned_type; 
    char* name;
    char* parameters;
} functions_table[150];

int functions_size = 0;

char* search_var(char* name, char* scope) {
    for (int i = 0; i < vars_size; ++i) {
        if ((strcmp(variables_table[i].name, name) == 0 && strcmp(variables_table[i].scope, scope) == 0)) {
            return variables_table[i].type;
        }
    }

    for (int i = 0; i < vars_size; ++i) {
        if (strcmp(variables_table[i].name, name) == 0 && strcmp(variables_table[i].scope, "global") == 0) {
            return variables_table[i].type;
        }
    }

    char msg[100];
    sprintf(msg, "%s %s %s", "Variabila", name, "nu exista");
    yyerror(msg);
}

void* get_value(char* name, char* type, char* scope, struct symbol_table table[], int table_size) {
    for (int i = 0; i < table_size; ++i) {
        if ((strcmp(name, table[i].name) == 0 && strcmp(type, table[i].type) == 0 && strcmp(table[i].scope, scope) == 0) || (strcmp(name, table[i].name) == 0 && strcmp(type, table[i].type) == 0 && strcmp(table[i].scope, "global") == 0)) {
            return table[i].address;
        }
    }
    return NULL;
}

int insertVar(struct symbol_table table[], int* table_size, char* name, char* type, char* scope, void* address) {
    for (int i = 0; i < *table_size; ++i) {
        if (strcmp(table[i].name, name) == 0 && strcmp(table[i].type, type) == 0) {
            char msg[100]; 
            sprintf(msg, "%s %s %s", "Variabila", name, "exista deja");
            yyerror(msg);
            return -1;
        }
    }
    table[*table_size].name = strdup(name); 
    table[*table_size].type = strdup(type); 
    table[*table_size].scope = strdup(scope); 
    table[*table_size].address = address;
    *table_size = *table_size + 1;
    return 0;
}

void update_table(struct symbol_table from[], struct symbol_table to[], int* from_size, int* to_size, char* scope) {
    for (int i = 0; i < *from_size; ++i) {
        from[i].scope = strdup(scope);
    }
    for (int i = 0; i < *from_size; ++i) {
        insertVar(to, to_size, from[i].name, from[i].type, from[i].scope, from[i].address);
    }
}

void print_table() {
    for (int i = 0; i < vars_size; ++i) {
        printf("%s %s %s %p\n", variables_table[i].type, variables_table[i].name, variables_table[i].scope, variables_table[i].address);
    }
}

void print_symbol_table(FILE* fptr) {
    fprintf(fptr, "Name::scope  --->  <Type>  [Value]\n");
    fprintf(fptr, "-------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < vars_size; ++i) {
        fprintf(fptr, "%s::%s  --->  <%s>  ", variables_table[i].name, variables_table[i].scope, variables_table[i].type);
        if (strcmp(variables_table[i].type, "int") == 0 || strcmp(variables_table[i].type, "const int") == 0) {
            fprintf(fptr, "[%d]\n", *((int*)variables_table[i].address));
        }
        else if (strcmp(variables_table[i].type, "float") == 0 || strcmp(variables_table[i].type, "const float") == 0) {
            fprintf(fptr, "[%f]\n", *((float*)variables_table[i].address));
        }
        else if (strcmp(variables_table[i].type, "bool") == 0 || strcmp(variables_table[i].type, "const bool") == 0) {
            fprintf(fptr, "[%s]\n", *((bool*)variables_table[i].address) ? "true" : "false");
        }
        else if (strcmp(variables_table[i].type, "char") == 0 || strcmp(variables_table[i].type, "const char") == 0) {
            fprintf(fptr, "[%c]\n", *((char*)variables_table[i].address));
        }
        else if (strcmp(variables_table[i].type, "string") == 0 || strstr(variables_table[i].type, "[]")) {
            fprintf(fptr, "[%s]\n", ((char*)variables_table[i].address));
        }
        fprintf(fptr, "-------------------------------------------------------------------------------------------------------------\n");
    }
}

bool checkTypes() {
    for (int i = 0; i < types_arr_size - 1; ++i) {
        for (int j = i + 1; j < types_arr_size; ++j) {
            if (strcmp(types_arr[i], types_arr[j]) != 0) {
                return false;
            }
        }
    }
    return true;
}

int insertFunction(char* returned_type, char* name, char* parameters) {
    for (int i = 0; i < functions_size; ++i) {
        if (strcmp(functions_table[i].returned_type, returned_type) == 0 && strcmp(functions_table[i].name, name) == 0 && strcmp(functions_table[i].parameters, parameters) == 0) {
            char msg[100]; 
            sprintf(msg, "%s %s %s %s %s", "Functia", name, "cu parametrii", parameters, "exista deja");
            yyerror(msg);
            return -1;
        }
    }
    functions_table[functions_size].returned_type = strdup(returned_type);
    functions_table[functions_size].name = strdup(name); 
    functions_table[functions_size].parameters = strdup(parameters); 
    functions_size ++;
}

char* search_function(char* name, char* parameters) {
    for (int i = 0; i < functions_size; ++i) {
        if ((strcmp(functions_table[i].name, name) == 0 && strcmp(functions_table[i].parameters, parameters) == 0)) {
            return functions_table[i].returned_type;
        }
    }
    char msg[50]; 
    sprintf(msg, "%s %s(%s) %s", "Functia", name, parameters, "nu exista sau nu a fost apelata corect");
    yyerror(msg);
}

void print_functions_table(FILE* fptr) {
    fprintf(fptr, "Name  --->   < returned-type >   { parameters }\n");
    fprintf(fptr, "----------------------------------------------------------------------------------\n");
    
    for (int i = 0; i < functions_size; ++i) {
        fprintf(fptr, "%s   <%s>   {%s}\n", functions_table[i].name, functions_table[i].returned_type, functions_table[i].parameters);
        fprintf(fptr, "----------------------------------------------------------------------------------\n");
    }
}

char *strrev(char *str) {
    char *p, *new_str;
    char words[256][236];
    int k = 0;

    if (! str || ! *str)
        return str;
    
    p = strtok(str, " ");

    while (p != NULL) {
        strcpy(words[k++], p); 
        p = strtok(NULL, " ");
    }

    new_str = (char*)malloc(256 * sizeof(char));
    strcat(new_str, " ");

    for (int i = k - 1; i >= 0; --i) {
        strcat(new_str, words[i]); 
        strcat(new_str, ", ");
    }

    new_str[strlen(new_str) - 2] = ' ';
    new_str[strlen(new_str) - 1] = '\0';

    return new_str;
}

void yyerror(char * s) {
    printf("eroare: %s, la linia %d.\n", s, yylineno);
    exit(0);
}

typedef enum {
    AST_PLUS,
    AST_MULTIPLY,
    AST_DIVIDE,
    AST_MINUS,
    AST_INTEGER, 
    AST_VAR
} AstType;

typedef struct AstNode {
    AstType type;
    int value;
    struct AstNode* left;
    struct AstNode* right;
} AstNode;

AstNode* new_ast_node(AstType type, int value, AstNode* left, AstNode* right) {
    AstNode *node = (AstNode *)malloc(sizeof(AstNode));
    node->type = type;
    node->value = value;
    node->left = left;
    node->right = right;
    return node;
}

int eval_ast(AstNode *node) {
    if (node->type == AST_INTEGER || node->type == AST_VAR) {
        return node->value;
    }
    else if (node->type == AST_PLUS) {
        return eval_ast(node->left) + eval_ast(node->right);
    }
    else if (node->type == AST_MINUS) {
        return eval_ast(node->left) - eval_ast(node->right);
    }
    else if (node->type == AST_MULTIPLY) {
        return eval_ast(node->left) * eval_ast(node->right);
    }
    else if(node->type == AST_DIVIDE) {
        int b = eval_ast(node->right);
        if (b != 0) {
            return eval_ast(node->left) / b;
        }
        else {
            printf("Eroare, impartire la 0.\n"); 
            return -1;
        }
    }
    return 0;
}

void free_ast(AstNode* root) {
    if (root != NULL) {
        free_ast(root->left); 
        free_ast(root->right);
        free(root);
    }
}

typedef enum value_type {
    PCHAR, 
    PINT, 
    PFLOAT, 
    PLUS,
    MINUS,
    DIVIDE, 
    MULTIPLY
} ValueType;

typedef struct TypeNode {
    ValueType type; 
    struct TypeNode* left; 
    struct TypeNode* right;
} TypeNode; 

TypeNode* new_node(ValueType type, TypeNode* left, TypeNode* right) {
    TypeNode* node = (TypeNode*)malloc(sizeof(TypeNode)); 
    node->type = type; 
    node->left = left; 
    node->right = right; 
    return node;
}

ValueType TypeOf(TypeNode* root) {
    if (root->type == PINT || root->type == PCHAR || root->type == PFLOAT) {
        return root->type;
    }
    else if (root->type == PLUS) {
        ValueType t1 = TypeOf(root->left); 
        ValueType t2 = TypeOf(root->right);

        if (t1 != t2) {
            printf("Tipuri de date incompatibile.\n");
            exit(0);
        } 

        return t1;
    }
    else if (root->type == MINUS) {
        ValueType t1 = TypeOf(root->left); 
        ValueType t2 = TypeOf(root->right);

        if (t1 != t2) {
            printf("Tipuri de date incompatibile.\n");
            exit(0);
        } 

        return t1;
    }
    else if (root->type == MULTIPLY) {
        ValueType t1 = TypeOf(root->left); 
        ValueType t2 = TypeOf(root->right);

        if (t1 != t2) {
            printf("Tipuri de date incompatibile.\n");
            exit(0);
        } 

        return t1;
    }
    else if (root->type == DIVIDE) {
        ValueType t1 = TypeOf(root->left); 
        ValueType t2 = TypeOf(root->right);

        if (t1 != t2) {
            printf("Tipuri de date incompatibile.\n");
            exit(0);
        } 

        return t1;
    }
    return 0;
}

void print_type(ValueType val) {
    switch (val) {
        case PINT:
            printf("int.\n");
        break;
        case PCHAR: 
            printf("char.\n");
        break;
        case PFLOAT: 
            printf("float.\n");
        break;
    }
}