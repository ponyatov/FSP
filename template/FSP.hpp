#ifndef _H_FSP
#define _H_FSP

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

// writers

void W(char c);

// parser

extern int yylex();
extern int yyparse();
extern int yylineno;
extern char *yytext;
extern void yyerror(string);
#include "parser.tab.hpp"

#endif // _H_FSP

