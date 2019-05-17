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

#ifndef YY_YY_PARSE_HH_INCLUDED
# define YY_YY_PARSE_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_Void = 258,
    T_Bool = 259,
    T_Int = 260,
    T_Double = 261,
    T_String = 262,
    T_Class = 263,
    T_LessEqual = 264,
    T_GreaterEqual = 265,
    T_Equal = 266,
    T_NotEqual = 267,
    T_Dims = 268,
    T_LeftShift = 269,
    T_RightShift = 270,
    T_And = 271,
    T_Or = 272,
    T_Null = 273,
    T_Extends = 274,
    T_This = 275,
    T_Interface = 276,
    T_Implements = 277,
    T_While = 278,
    T_For = 279,
    T_If = 280,
    T_Else = 281,
    T_Return = 282,
    T_Break = 283,
    T_New = 284,
    T_NewArray = 285,
    T_Print = 286,
    T_ReadInteger = 287,
    T_ReadLine = 288,
    T_Switch = 289,
    T_Case = 290,
    T_Default = 291,
    T_Incr = 292,
    T_Decr = 293,
    T_Identifier = 294,
    T_StringConstant = 295,
    T_IntConstant = 296,
    T_DoubleConstant = 297,
    T_BoolConstant = 298,
    NEG = 299,
    NOELSE = 300,
    EMPTYCASE = 301,
    EMPTYDEFAULT = 302,
    NONEMPTYCASE = 303,
    NONEMPTYDEFAULT = 304
  };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Double 261
#define T_String 262
#define T_Class 263
#define T_LessEqual 264
#define T_GreaterEqual 265
#define T_Equal 266
#define T_NotEqual 267
#define T_Dims 268
#define T_LeftShift 269
#define T_RightShift 270
#define T_And 271
#define T_Or 272
#define T_Null 273
#define T_Extends 274
#define T_This 275
#define T_Interface 276
#define T_Implements 277
#define T_While 278
#define T_For 279
#define T_If 280
#define T_Else 281
#define T_Return 282
#define T_Break 283
#define T_New 284
#define T_NewArray 285
#define T_Print 286
#define T_ReadInteger 287
#define T_ReadLine 288
#define T_Switch 289
#define T_Case 290
#define T_Default 291
#define T_Incr 292
#define T_Decr 293
#define T_Identifier 294
#define T_StringConstant 295
#define T_IntConstant 296
#define T_DoubleConstant 297
#define T_BoolConstant 298
#define NEG 299
#define NOELSE 300
#define EMPTYCASE 301
#define EMPTYDEFAULT 302
#define NONEMPTYCASE 303
#define NONEMPTYDEFAULT 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 43 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1909  */

  int              integerConstant;
  bool             boolConstant;
  char             *stringConstant;
  double           doubleConstant;
  char             identifier[MaxIdentLen+1];
  Decl             *decl;
  List<Decl*>      *declList;
  VarDecl          *varDecl;
  ClassDecl        *classDecl;
  InterfaceDecl    *interfaceDecl;
  FnDecl           *fnDecl;
  Type             *type;
  NamedType        *namedType;
  ArrayType        *arrayType;
  List<NamedType*> *implementsTypeList;
  List<VarDecl*>   *varDeclList;
  StmtBlock        *stmtBlock;
  List<Stmt*>      *stmtList;
  Stmt             *stmt;
  IfStmt           *ifStmt;
  Expr             *expr;
  List<Expr*>      *exprList;
  FieldAccess      *fieldAccess;
  CaseStmt         *caseStmt;
  List<CaseStmt*>  *caseStmtList;
  DefaultStmt      *defaultStmt;

#line 181 "parse.hh" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_HH_INCLUDED  */
