#include "FSP.hpp"

biTEX *bi_tex=NULL;

biTEX::biTEX() { cout<<TEXHEADER; }

void biTEX::W(char c) {
	switch (c) {
		case '$': cout<<"\\$"; break;
//		case '#': cout<<"\\#"; break;
		case '<': cout<<"\\textless "; break;
		case '>': cout<<"\\textgreater "; break;
		default: cout<<c; break;
	};
}

void biTEX::W(const char *c) {
	const char *x; x=c;
	while (*x!='\0') W(*x), x++;
}

void biTEX::W(string *s) {
	cout<<*s;
}

void W(char c) {
	if (bi_tex) bi_tex->W(c); else cout<<c;
}

void W(const char *c) {
	if (bi_tex) bi_tex->W(c); else cout<<c;
}

void W(string *s) {
	if (bi_tex) bi_tex->W(s); else cout<<s;
}

void yyerror(string s) {
	cerr<<"\nerror "<<s<<" #"<<yylineno<<":"<<yytext<<"\n\n"; 
	exit(-1);
}

