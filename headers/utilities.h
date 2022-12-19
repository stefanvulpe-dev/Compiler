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
        if ((strcmp(variables_table[i].name, name) == 0 && strcmp(variables_table[i].scope, scope) == 0) || (strcmp(variables_table[i].name, name) == 0 && strcmp(variables_table[i].scope, "global") == 0)) {
            return variables_table[i].type;
        }
    }
    char msg[100];
    sprintf(msg, "%s %s %s", "Variabila", name, "nu exista");
    yyerror(msg);
    return "undefined";
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

void yyerror(char * s) {
    printf("eroare: %s, la linia %d.\n", s, yylineno);
    exit(0);
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