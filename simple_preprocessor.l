%option noyywrap
%{
/*============================================================================
Generate with flex and a C compiler:
	flex simple_preprocessor.l; <C compiler> lex.yy.c -o simple_preprocessor
"%option noyywrap" means no need to link libraries via -lfl flag.

Currently only includes files via "#include" directives.
============================================================================*/

#include <stdio.h>
#include <stdbool.h>
#define SIZE 50

bool directive = false;
char directory[SIZE];
char command[] = {"cat "}; // system command
char tmp[SIZE + sizeof(command)/sizeof(command[0])];

%}

%%

. {
	if(directive)
		strcat(directory, yytext);
	else
		printf("%s", yytext);
}

^"#include " { directive = true; }

\n {
	if(directive)
	{
		// concat command and directory for system call
		strcat(tmp, command);
		strcat(tmp, directory);

		system(tmp);

		// reset condition, variables
		directive = false;
		directory[0] = tmp[0] = '\0';
	}
	else
		printf("%s", yytext);
}

%%

int main(int argc, char *argv[])
{
    FILE *file;
    file = fopen(argv[1], "r");

    yyset_in(file);
    yylex();
    fclose(file);
}
