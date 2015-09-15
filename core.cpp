#include "FSP.hpp"

void W(char c)			{ cout<<c; }
void W(const char *c)	{ cout<<c; }

void yyerror(string s) {
	cerr<<"\nerror "<<s<<" #"<<yylineno<<":"<<yytext<<"\n\n"; 
	exit(-1);
}

