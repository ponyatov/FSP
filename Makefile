
.PHONY: pdf
pdf: FreeSyntax.pdf

.PHONY: clean
clean:
	rm -rf tmp *~ .*~ lex.yy.c parser.tab.?pp *.tex

FreeSyntax.pdf: FreeSyntax.tex
	mkdir -p tmp
	pdflatex -output-directory tmp $<
	pdflatex -output-directory tmp $<
	cp tmp/$@ $@

FreeSyntax.tex: ./FSP$(EXE) FreeSyntax.fsp
	./FSP$(EXE) < FreeSyntax.fsp > $@

C = core.cpp lex.yy.c parser.tab.cpp
H = FSP.hpp

./FSP$(EXE): $(C) $(H)
	$(CXX) $(CXXFILES) -o $@ $(C)
lex.yy.c: lexer.lpp
	flex $<
parser.tab.cpp: parser.ypp
	bison $<

