%{
    #include "stdio.h"
    #include "stdlib.h"

%}
    DIGIT [0-9]
    LETTER [A-Za-z]
    INT [1-9][0-9]*
    FLOAT [1-9][0-9]*"."[0-9]+
    STRING \"".*"\"

%%

%%
	User subroutines(用户附加部分)
