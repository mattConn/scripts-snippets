/*===============================================
To compile, fist run flex:
	flex scanner.l
This will generate lex.yy.c
(scanner.l will be this file you're reading now)

Then compile the newly generated c file:
	<compiler> lex.yy.c -o scanner.out

scanner.out will be the compiled binary.
===============================================*/
%option noyywrap
%{
// %option noyywrap: when compiling, eliminates need for -lfl flag

// declarations and inclusions
// inserted directly into generated c file 
#include <stdio.h>

%}

%%

. {printf("%s", yytext); /* on rule executions */}

%%

int main(int argc, char *argv[])
{

	// main function
	// inserted directly into generated c file 

    FILE *file;
    file = fopen(argv[1], "r");

    yyset_in(file);
    yylex();
    fclose(file);
}
