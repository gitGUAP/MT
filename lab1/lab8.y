%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);
%}

%token T_NEWLINE

%start calculation

%%

calculation: | calculation line;

line: T_NEWLINE
    | S T_NEWLINE { printf("Success\n"); }
;

S: E;
E: E '+' T | T;
T: K '*' 'x' '^' K | K;
T: K '*' 'x' | 'x' '^' K;
K: '2' | '3' | '4';

%%
int main() {
	yyparse();
	return 0;
}
void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}