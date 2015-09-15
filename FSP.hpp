#ifndef _H_FSP
#define _H_FSP

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

// writers

void W(char c);
void W(const char *c);

// TEX markup

const char TEXHEADER[]=\
	"\\documentclass{book}\n"
	"\\begin{document}\n"
	"\\begin{verbatim}\n";
const char TEXFOOTER[]=\
	"\\end{verbatim}\n"
	"\\end{document}\n";

// parser

extern int yylex();
extern int yyparse();
extern int yylineno;
extern char *yytext;
extern void yyerror(string);
#include "parser.tab.hpp"

#endif // _H_FSP

