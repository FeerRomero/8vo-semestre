%{
#include "y.tab.h"
%}

%%
":"			return COLON_SIGN;
";"			return SEMI_COLON;
","			return COMMA;
"int"		return INTEGER;
"float"		return FLOAT;
"{"			return LEFT_BRACKET;
"}"			return RIGHT_BRACKET;
"="			return EQUALS;
"print"		return PRINT;
"("			return LEFT_PARENTHESIS;
")"			return RIGHT_PARENTHESIS;
"."			return PERIOD;
"+"			return ADDITION;
"-"			return SUBSTRACTION;
"*"			return MULTIPLICATION;
"/"			return DIVISION;
"if"		return IF_CLAUSE;
"else"		return ELSE_CLAUSE;
"program"	return PROGRAM;
"id"		return IDENTIFIER;
"var"		return VARIABLE;
"cte.string" return STRING;
"cte l"		return CTE_L;
"cte f"		return CTE_F;
"<"			return LT;
">"			return GT;
"<>"			return DIFFERENT;
.			printf("unexpected character\n");
%%
int yywrap (void) {return 1;}