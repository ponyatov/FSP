au BufNewFile,BufRead *.fsp set filetype=fsp

au BufNewFile,BufRead *.fsp tabf fsp.log|set filetype=fsp|set autoread
au BufNewFile,BufRead *.fsp tabf syntax.vim|set filetype=vim
au BufNewFile,BufRead *.fsp tabf parser.ypp|set filetype=yacc
au BufNewFile,BufRead *.fsp tabf lexer.lpp|set filetype=lex
au BufNewFile,BufRead *.fsp tabf core.cpp|set filetype=cpp
au BufNewFile,BufRead *.fsp tabf FSP.hpp|set filetype=cpp
au bufNewFile,BufRead *.fsp tabf Makefile|set filetype=make


au BufNewFile,BufRead *.fsp tabn 1
au BufNewFile,BufRead *.fsp set columns=99

