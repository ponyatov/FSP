#ifndef _H_FSP
#define _H_FSP

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

// writers

void W(char c);
void W(const char *c);
void W(string *s);

// TEX markup

const char TEXHEADER[]=\
	"\\documentclass[12pt]{article}\n"
	"\\usepackage[utf8]{inputenc}\n"
	"\\usepackage[a4paper,margin=10mm]{geometry}\n";
const char TEXFOOTER[]=\
	"\\end{document}\n\n";

struct biTEX {
	biTEX();
	void W(char);
	void W(const char*);
	void W(string *s);
};
extern biTEX *bi_tex;

// parser

extern int yylex();
extern int yyparse();
extern int yylineno;
extern char *yytext;
extern void yyerror(string);
#include "parser.tab.hpp"

#endif // _H_FSP

