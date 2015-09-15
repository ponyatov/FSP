
.PHONY: exec
exec: ./FSP$(EXE)
	./FSP$(EXE) < sample.fsp > sample.fslog

.PHONY: clean
clean:
	rm -rf ./FSP$(EXE) lex.yy.c *.tab.?pp

C = FSP.cpp lex.yy.c parser.tab.cpp
H = FSP.hpp parser.tab.hpp

./FSP$(EXE): $(C) $(H)
	$(CXX) $(CXXFLAGS) -o $@ $(C)
lex.yy.c: lexer.lpp
	flex $<
parser.tab.cpp: parser.ypp
	bison $<

