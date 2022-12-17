%{
#include <string.h>
#include <stdbool.h>
#include "../headers/my_language.tab.h"
%}

%option noyywrap

id [a-zA-Z][_a-zA-Z0-9]*
string \"[a-zA-Z0-9]*([" "a-zA-Z0-9]*)?\"
char \'[a-zA-Z0-9]\'
digit [0-9]
non_zero_digit [1-9]
number -?(({digit}|{non_zero_digit}{digit}*))("."[0-9]+)?

%%
"begin_main" {return BGIN;}
"end_main" {return END;}
"int"|"float"|"char"|"string"|"bool" {
    yylval.str_value = strdup(yytext); 
    return TIP;
}
"class" { 
    yylval.str_value = strdup(yytext);
    return CLASS;
}
"if" {return IF;}
"else" {return ELSE;}
"for" {return FOR_LOOP;}
"while" {return WHILE_LOOP;}
"::=" {return ASSIGN;}
"&&" {return AND;}
"||" {return OR;}
"==" {return EQ;}
"!=" {return NEQ;}
"<=" {return LTE;}
">=" {return GTE;}
"true"|"false" {
    if (strcmp(yytext, "true") == 0) {
        yylval.boolean_value = true;
    }
    else {
        yylval.boolean_value = false;
    }
    return BOOLEAN;
}
"const" {
    yylval.str_value = strdup(yytext);
    return CONST;
}
{id} {
    yylval.str_value = strdup(yytext);
    return ID;
}
{string} {
    yylval.str_value = strdup(yytext);
    return STRING;
}
{char} {
    yylval.char_value = yytext[1];
    return CHAR;
}
{number} {
    if(strstr(yytext, ".")) {
        yylval.float_value = atof(yytext);
        return FLOAT;
    } 
    else {
        yylval.int_value = atoi(yytext);
        return INTEGER;
    } 
}
[" "\t] ;
\n {yylineno ++;}
\r ;
. {return yytext[0];}
%%
