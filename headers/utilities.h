#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

extern int yylineno;

void yyerror(char * s);
int yylex();

struct symbol_table {
    char* name; 
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

const char* TypeOfInt(int x) {
    return "int";
}

const char* TypeOfFloat(float x) {
    return "float";
}

const char* TypeOfBool(bool x) {
    return "bool";
}

const char* TypeOfChar(char x) {
    return "char";
}

const char* TypeOfName(char* name) {
    for (int i = 0; i < vars_size; ++i) {
        if (strcmp(variables_table[i].name, name) == 0) {
            return variables_table[i].type;
        }
    }
    return "undefined";
}

#define TypeOf(x) _Generic (x, int: TypeOfInt, float: TypeOfFloat, bool: TypeOfBool, char: TypeOfChar, char*: TypeOfName)(x)

int EvalInt(int x) {
    return x;
}

float EvalFloat(float x) {
    return x;
}

bool EvalBool(bool x) {
    return x;
}

char EvalChar(char x) {
    return x;
}

void* EvalName(char* name) {
    for (int i = 0; i < vars_size; ++i) {
        if (strcmp(name, variables_table[i].name) == 0) {
            return variables_table[i].address;
        }
    }
    return NULL;
}

#define Eval(x) _Generic (x, int: EvalInt, float: EvalFloat, bool: EvalBool, char: EvalChar, char*: EvalName)(x)

int insertVar(char* name, char* type, void* address) {
    for (int i = 0; i < vars_size; ++i) {
        if (strcmp(variables_table[i].name, name) == 0 && strcmp(variables_table[i].type, type) == 0) {
            char msg[100]; 
            sprintf(msg, "%s %s %s %s", "Variabila", name, type, "exista deja");
            yyerror(msg);
            return -1;
        }
    }
    variables_table[vars_size].name = strdup(name); 
    variables_table[vars_size].type = strdup(type); 
    variables_table[vars_size].address = address;
    vars_size++;
    return 0;
}

void yyerror(char * s) {
    printf("eroare: %s la linia %d.\n", s, yylineno);
}

void print_symbol_table(FILE* fptr) {
    fprintf(fptr, "Name::scope  --->  <Type>  [Value]\n");
    fprintf(fptr, "-------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < vars_size; ++i) {
        fprintf(fptr, "%s  --->  <%s>  ", variables_table[i].name, variables_table[i].type);
        if (strstr(variables_table[i].type, "int")) {
            fprintf(fptr, "[%d]\n", *((int*)variables_table[i].address));
        }
        else if (strstr(variables_table[i].type, "float")) {
            fprintf(fptr, "[%f]\n", *((float*)variables_table[i].address));
        }
        else if (strstr(variables_table[i].type, "bool")) {
            fprintf(fptr, "[%s]\n", *((bool*)variables_table[i].address) ? "true" : "false");
        }
        else if (strstr(variables_table[i].type, "char")) {
            fprintf(fptr, "[%c]\n", *((char*)variables_table[i].address));
        }
        else if (strcmp(variables_table[i].type, "string")) {
            fprintf(fptr, "[%s]\n", ((char*)variables_table[i].address));
        }
        fprintf(fptr, "-------------------------------------------------------------------------------------------\n");
    }
}

#endif