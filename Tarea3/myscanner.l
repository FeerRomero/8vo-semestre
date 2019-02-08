%{
#include "myscanner.h"
%}

%%
:			return COLON;
;			return SEMI_COLON;
,			return COMMA;
"int"		return INTEGER;
"float"		return FLOAT;
{			return LEFT_BRACKET;
}			return RIGHT_BRACKET;
=			return EQUALS;
"print"		return PRINT;
(			return LEFT_PARENTHESIS;
)			return RIGHT_PARENTHESIS;
.			return PERIOD;
+			return ADDITION;
-			return SUBSTRACTION;
*			return MULTIPLICATION;
/			return DIVISION;
"if"		return IF_CLAUSE;
"else"		return ELSE_CLAUSE;
"program"	return PROGRAM;
"id"		return IDENTIFIER;
"var"		return VARIABLE;
.			printf("unexpected character\n");

