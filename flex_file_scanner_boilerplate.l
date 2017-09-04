%{

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
