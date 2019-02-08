/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COLON_SIGN = 258,
    SEMI_COLON = 259,
    COMMA = 260,
    INTEGER = 261,
    FLOAT = 262,
    LEFT_BRACKET = 263,
    RIGHT_BRACKET = 264,
    EQUALS = 265,
    PRINT = 266,
    LEFT_PARENTHESIS = 267,
    RIGHT_PARENTHESIS = 268,
    PERIOD = 269,
    ADDITION = 270,
    SUBSTRACTION = 271,
    MULTIPLICATION = 272,
    DIVISION = 273,
    IF_CLAUSE = 274,
    ELSE_CLAUSE = 275,
    PROGRAM = 276,
    IDENTIFIER = 277,
    VARIABLE = 278,
    STRING = 279,
    CTE_L = 280,
    CTE_F = 281,
    GT = 282,
    LT = 283,
    DIFFERENT = 284
  };
#endif
/* Tokens.  */
#define COLON_SIGN 258
#define SEMI_COLON 259
#define COMMA 260
#define INTEGER 261
#define FLOAT 262
#define LEFT_BRACKET 263
#define RIGHT_BRACKET 264
#define EQUALS 265
#define PRINT 266
#define LEFT_PARENTHESIS 267
#define RIGHT_PARENTHESIS 268
#define PERIOD 269
#define ADDITION 270
#define SUBSTRACTION 271
#define MULTIPLICATION 272
#define DIVISION 273
#define IF_CLAUSE 274
#define ELSE_CLAUSE 275
#define PROGRAM 276
#define IDENTIFIER 277
#define VARIABLE 278
#define STRING 279
#define CTE_L 280
#define CTE_F 281
#define GT 282
#define LT 283
#define DIFFERENT 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
