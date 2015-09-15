
syntax match Keyword "\$"
syntax region Keyword start="$(" end=")"

syntax match Constant "\v[/\\a-zA-Z]+\.[a-z]+"
syntax match Constant "\v\*\.[a-z]+"
syntax match Constant "\vMakefile"
syntax match Constant "\v\<?[a-z]+\@[a-z\.]+\>?"
syntax match Constant "\vhttps{0,1}://[a-zA-Z0-9\.\-\#\/]+"
syntax match Keyword "\v\.[a-z]+"

let b:current_syntax = "fsp"

