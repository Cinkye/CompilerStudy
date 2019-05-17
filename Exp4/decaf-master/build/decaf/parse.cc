/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 11 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:339  */


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */

#include "decaf/errors.h"
#include "decaf/lexer.h"
#include "decaf/dcc.h"

// Standard error-handling routine.
void yyerror(const char *msg);


#line 84 "parse.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.hh".  */
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
#line 43 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:355  */

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

#line 251 "parse.cc" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 282 "parse.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1224

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,     2,     2,    54,    45,     2,
      69,    70,    52,    50,    68,    51,    58,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    65,
      48,    44,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    72,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,    47,    67,    57,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    55,
      60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   153,   153,   175,   176,   180,   181,   182,   183,   187,
     191,   198,   199,   200,   201,   202,   203,   204,   208,   215,
     219,   226,   230,   234,   237,   241,   246,   254,   258,   265,
     272,   273,   274,   275,   279,   280,   284,   285,   291,   295,
     302,   305,   309,   312,   313,   314,   321,   322,   326,   327,
     331,   332,   335,   336,   337,   338,   341,   344,   345,   348,
     352,   353,   358,   359,   363,   367,   374,   377,   383,   386,
     392,   393,   397,   398,   399,   400,   404,   408,   412,   416,
     420,   424,   428,   432,   436,   440,   444,   448,   452,   456,
     460,   464,   468,   472,   476,   480,   484,   488,   492,   493,
     494,   495,   496,   497,   500,   507,   510,   516,   517,   521,
     522,   523,   528,   529,   530,   531,   532
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Double",
  "T_String", "T_Class", "T_LessEqual", "T_GreaterEqual", "T_Equal",
  "T_NotEqual", "T_Dims", "T_LeftShift", "T_RightShift", "T_And", "T_Or",
  "T_Null", "T_Extends", "T_This", "T_Interface", "T_Implements",
  "T_While", "T_For", "T_If", "T_Else", "T_Return", "T_Break", "T_New",
  "T_NewArray", "T_Print", "T_ReadInteger", "T_ReadLine", "T_Switch",
  "T_Case", "T_Default", "T_Incr", "T_Decr", "T_Identifier",
  "T_StringConstant", "T_IntConstant", "T_DoubleConstant",
  "T_BoolConstant", "'='", "'&'", "'^'", "'|'", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "NEG", "'!'", "'~'", "'.'", "'['", "NOELSE",
  "EMPTYCASE", "EMPTYDEFAULT", "NONEMPTYCASE", "NONEMPTYDEFAULT", "';'",
  "'{'", "'}'", "','", "'('", "')'", "':'", "']'", "$accept", "Program",
  "DeclList", "Decl", "VarDecl", "Variable", "Type", "NamedType",
  "ClassDecl", "ClassExtends", "ClassImplements", "ImplementsTypeList",
  "InterfaceDecl", "FnDecl", "FieldList", "Formals", "FormalsList",
  "Prototype", "FnDef", "PrototypeList", "StmtBlock", "StmtList",
  "VarDeclList", "Stmt", "OptExpr", "CaseStmtList", "CaseStmt",
  "DefaultStmt", "IfStmt", "ExprList", "Expr", "Call", "Actuals", "LValue",
  "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    61,    38,    94,   124,    60,    62,
      43,    45,    42,    47,    37,   299,    33,   126,    46,    91,
     300,   301,   302,   303,   304,    59,   123,   125,    44,    40,
      41,    58,    93
};
# endif

#define YYPACT_NINF -97

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-97)))

#define YYTABLE_NINF -68

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-68)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      90,   -97,   -97,   -97,   -97,   -97,    -7,    -4,   -97,    42,
      90,   -97,   -97,   -17,    67,   -97,   -97,   -97,   -97,   -15,
      50,   -13,   -97,   -97,   -97,   -97,     2,    34,   -97,    45,
      65,     5,   109,   -97,   -97,    23,    30,    33,   955,    39,
      78,    57,    58,    59,    61,    62,    17,   -97,   -97,   -97,
     -97,   989,   989,   989,   -97,   989,   -97,    68,   -97,   673,
     207,   -97,    70,   -97,  1027,   -97,    93,   -97,   -97,    99,
      73,   -97,    69,   -97,    75,    11,   -97,    74,    77,   989,
     989,   989,    83,   -97,   578,   -97,   -97,   989,   989,    76,
      87,   989,   989,   -12,   -12,   -12,   319,   -97,   -97,   -97,
     -97,   -97,   723,   -97,   989,   989,   989,   989,   989,   989,
     989,   989,   -97,   -97,   989,   989,   989,   989,   989,   989,
     989,   989,   989,   989,   108,   989,   989,   -97,    95,    16,
       2,   -97,   -97,   -97,   -97,   109,   370,    96,   421,   -97,
     523,   -39,  1027,   -97,   -97,   472,   106,    97,   -97,   -97,
     548,   548,  1165,  1165,   249,   249,  1096,  1045,  1114,  1114,
    1114,   548,   548,   112,   112,    84,    84,    84,   107,   268,
    1027,   136,   -97,   -97,   -97,    21,   -97,   923,   989,   923,
     109,   989,   113,   111,   -97,   989,   -97,   -97,   -97,   -97,
     -97,   -97,   630,   153,     0,  1027,   -97,   145,   114,   989,
     923,   -97,   140,    89,   -97,   -97,   123,   -97,   134,   137,
     -97,   115,   923,   773,   823,   -97,   -97,   773,   873
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    11,    12,    13,    14,    15,     0,     0,    18,     0,
       2,     4,     5,     0,     0,    16,     6,     7,     8,     0,
      22,     0,     1,     3,     9,    17,    10,    61,    29,     0,
      24,     0,    35,   116,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   115,   112,   113,
     114,     0,     0,     0,    45,     0,    49,     0,    59,    61,
      61,    47,     0,    57,    60,    73,    72,    74,    21,     0,
       0,    28,     0,    41,     0,     0,    36,     0,    34,     0,
      61,     0,   109,    52,     0,    54,   102,     0,     0,     0,
       0,     0,   108,    93,    94,    95,     0,    10,    44,    46,
      43,    48,    61,    50,     0,     0,     0,     0,     0,     0,
       0,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    23,     0,
       0,    38,    27,    40,    39,     0,     0,     0,     0,    53,
       0,     0,    71,   100,   101,     0,   107,     0,    98,    42,
      80,    79,    81,    82,    91,    92,    76,    75,    90,    88,
      89,    77,    78,    83,    84,    85,    86,    87,   110,     0,
     104,     0,    20,    32,    33,     0,    37,    61,     0,    61,
       0,     0,     0,     0,   105,   108,   111,    25,    19,    30,
      31,    51,     0,    68,     0,    70,    55,     0,     0,    61,
      61,   103,     0,     0,    63,   106,     0,    69,     0,     0,
      62,     0,    61,    65,    61,    58,    56,    64,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   -97,   173,   -24,   -25,   -26,   154,   -97,   -97,
     -97,   -97,   -97,   -96,   -97,   -97,   -97,   141,    14,   -97,
     190,   -58,   -97,   -59,   -76,   -97,    12,   -97,   -97,   129,
      81,   -97,    35,   -97,   -97
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    30,
      70,   128,    17,    18,   175,    77,    78,    73,    19,    75,
      58,    59,    60,    61,    62,   203,   204,   211,    63,   146,
      64,    65,   147,    66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      99,    57,   102,    56,   137,    72,    57,    76,     1,     2,
       3,     4,     5,    25,     1,     2,     3,     4,     5,     1,
       2,     3,     4,     5,     1,     2,     3,     4,     5,   181,
     -18,   182,    20,   174,    57,    21,   101,     1,     2,     3,
       4,     5,    22,    99,     8,    74,   124,   125,    24,    72,
       8,    27,    33,    31,    34,     8,   -18,    35,    36,    37,
       8,    38,    39,    40,    41,    42,    43,    44,    45,    29,
     201,    32,    71,    46,    47,    48,    49,    50,   132,   190,
      25,    25,    25,   172,    68,    51,    92,    69,   188,    74,
      52,    53,    79,     1,     2,     3,     4,     5,     6,    80,
      27,    54,    81,    55,    85,   173,    26,    97,   130,    57,
     176,     7,     1,     2,     3,     4,     5,     8,   191,    84,
     193,   112,   113,   206,   202,   209,    87,    88,    89,     8,
      90,    91,    93,    94,    95,   103,    96,   126,   127,   129,
     131,   207,   124,   125,   134,   135,   143,   168,     8,   112,
     113,   189,    92,   216,   194,   217,   218,   144,    99,    99,
     136,   178,   138,   171,   121,   122,   123,   184,   140,   142,
     124,   125,   145,   142,   181,   187,   185,   197,   196,   200,
     202,   208,   215,    23,   205,   150,   151,   152,   153,   154,
     155,   156,   157,   212,    86,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   213,   169,   170,   214,    28,
       1,     2,     3,     4,     5,   210,   133,   141,     0,     0,
     198,     0,     0,     0,     0,    33,     0,    34,     0,     0,
      35,    36,    37,     0,    38,    39,    40,    41,    42,    43,
      44,    45,     0,     0,     0,     0,    46,    47,    48,    49,
      50,     0,     0,     0,     0,     0,     0,     0,    51,   192,
       0,     0,   195,    52,    53,     0,   142,     0,     0,     0,
       0,     0,     0,    27,   100,     0,    55,   104,   105,   106,
     107,     0,   108,   109,   110,   111,   112,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,   122,   123,     0,   112,   113,   124,   125,     0,
       0,     0,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     0,     0,     0,   124,   125,   104,   105,
     106,   107,     0,   108,   109,   110,   111,     0,     0,     0,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   113,     0,     0,
       0,     0,     0,     0,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,     0,     0,     0,   124,   125,   104,
     105,   106,   107,     0,   108,   109,   110,   111,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,     0,
       0,     0,     0,     0,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,     0,   124,   125,
     104,   105,   106,   107,     0,   108,   109,   110,   111,     0,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
       0,     0,     0,     0,     0,     0,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,     0,     0,     0,   124,
     125,   104,   105,   106,   107,     0,   108,   109,   110,   111,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     113,     0,     0,     0,     0,     0,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,     0,     0,
     124,   125,   104,   105,   106,   107,     0,   108,   109,   110,
     111,     0,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,   -68,     0,
     112,   113,   108,   109,     0,     0,     0,     0,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,     0,     0,
       0,   124,   125,     0,     0,   112,   113,   104,   105,   106,
     107,   180,   108,   109,   110,   111,   -68,   -68,   119,   120,
     121,   122,   123,     0,     0,     0,   124,   125,     0,     0,
       0,     0,     0,     0,     0,   112,   113,     0,     0,     0,
       0,     0,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     0,     0,     0,   124,   125,     0,   104,
     105,   106,   107,   139,   108,   109,   110,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,     0,
       0,     0,     0,     0,     0,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     0,     0,     0,   124,   125,
       0,    33,     0,    34,     0,   199,    35,    36,    37,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    82,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      98,    33,    55,    34,     0,     0,    35,    36,    37,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    82,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,    27,
     149,    33,    55,    34,     0,     0,    35,    36,    37,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    82,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,   -61,    27,
       0,    33,    55,    34,     0,     0,    35,    36,    37,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    82,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,    27,
     -67,    33,    55,    34,     0,     0,    35,    36,    37,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    82,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,    27,
     -66,    33,    55,    34,     0,     0,    35,    36,    37,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,     0,
       0,     0,    82,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,    33,    51,    34,     0,     0,     0,    52,
      53,     0,     0,     0,    40,    41,     0,    43,    44,    27,
       0,     0,    55,     0,    82,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,    51,    33,     0,    34,
       0,    52,    53,     0,     0,     0,     0,     0,    40,    41,
      83,    43,    44,     0,    55,     0,     0,     0,    82,    47,
      48,    49,    50,     0,     0,     0,   104,   105,   106,   107,
      51,   108,   109,   110,   111,    52,    53,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   107,    55,   108,
     109,   110,     0,     0,   112,   113,     0,     0,     0,     0,
       0,     0,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   112,   113,     0,   124,   125,     0,     0,     0,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,   124,   125,   104,   105,   106,   107,     0,
     108,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   104,   105,   106,   107,     0,   108,   109,
       0,     0,     0,   112,   113,     0,     0,     0,     0,     0,
       0,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   112,   113,     0,   124,   125,     0,     0,     0,   -68,
     -68,   -68,   117,   118,   119,   120,   121,   122,   123,     0,
       0,     0,   124,   125,   104,   105,   -68,   -68,     0,   108,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,   118,   119,   120,   121,   122,   123,
       0,     0,     0,   124,   125
};

static const yytype_int16 yycheck[] =
{
      59,    27,    60,    27,    80,    31,    32,    32,     3,     4,
       5,     6,     7,    13,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,    68,
      13,    70,    39,   129,    60,    39,    60,     3,     4,     5,
       6,     7,     0,   102,    39,    31,    58,    59,    65,    75,
      39,    66,    18,    66,    20,    39,    39,    23,    24,    25,
      39,    27,    28,    29,    30,    31,    32,    33,    34,    19,
      70,    69,    67,    39,    40,    41,    42,    43,    67,   175,
      13,    13,    13,    67,    39,    51,    69,    22,    67,    75,
      56,    57,    69,     3,     4,     5,     6,     7,     8,    69,
      66,    67,    69,    69,    65,   129,    39,    39,    39,   135,
     135,    21,     3,     4,     5,     6,     7,    39,   177,    38,
     179,    37,    38,   199,    35,    36,    69,    69,    69,    39,
      69,    69,    51,    52,    53,    65,    55,    44,    39,    66,
      65,   200,    58,    59,    70,    68,    70,    39,    39,    37,
      38,   175,    69,   212,   180,   213,   214,    70,   217,   218,
      79,    65,    81,    68,    52,    53,    54,    70,    87,    88,
      58,    59,    91,    92,    68,    39,    69,    66,    65,    26,
      35,    41,    67,    10,    70,   104,   105,   106,   107,   108,
     109,   110,   111,    70,    40,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    71,   125,   126,    71,    19,
       3,     4,     5,     6,     7,   203,    75,    88,    -1,    -1,
     185,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,   178,
      -1,    -1,   181,    56,    57,    -1,   185,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    69,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    -1,    37,    38,    58,    59,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    58,    59,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    58,    59,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    58,    59,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    58,
      59,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      58,    59,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,
      37,    38,    14,    15,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    58,    59,    -1,    -1,    37,    38,     9,    10,    11,
      12,    68,    14,    15,    16,    17,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    -1,    58,    59,    -1,     9,
      10,    11,    12,    65,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    58,    59,
      -1,    18,    -1,    20,    -1,    65,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    18,    69,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    18,    69,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    18,    69,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    18,    69,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    18,    69,    20,    -1,    -1,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    51,    20,    -1,    -1,    -1,    56,
      57,    -1,    -1,    -1,    29,    30,    -1,    32,    33,    66,
      -1,    -1,    69,    -1,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    18,    -1,    20,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    29,    30,
      65,    32,    33,    -1,    69,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    -1,    -1,    -1,     9,    10,    11,    12,
      51,    14,    15,    16,    17,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    69,    14,
      15,    16,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    37,    38,    -1,    58,    59,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    58,    59,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    37,    38,    -1,    58,    59,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    58,    59,     9,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    58,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    21,    39,    74,
      75,    76,    77,    78,    79,    80,    81,    85,    86,    91,
      39,    39,     0,    76,    65,    13,    39,    66,    93,    19,
      82,    66,    69,    18,    20,    23,    24,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    39,    40,    41,    42,
      43,    51,    56,    57,    67,    69,    77,    79,    93,    94,
      95,    96,    97,   101,   103,   104,   106,   107,    39,    22,
      83,    67,    79,    90,    91,    92,    78,    88,    89,    69,
      69,    69,    39,    65,   103,    65,    80,    69,    69,    69,
      69,    69,    69,   103,   103,   103,   103,    39,    67,    96,
      67,    77,    94,    65,     9,    10,    11,    12,    14,    15,
      16,    17,    37,    38,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    58,    59,    44,    39,    84,    66,
      39,    65,    67,    90,    70,    68,   103,    97,   103,    65,
     103,   102,   103,    70,    70,   103,   102,   105,    70,    67,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,    39,   103,
     103,    68,    67,    77,    86,    87,    78,    70,    65,    70,
      68,    68,    70,    70,    70,    69,    72,    39,    67,    77,
      86,    96,   103,    96,    79,   103,    65,    66,   105,    65,
      26,    70,    35,    98,    99,    70,    97,    96,    41,    36,
      99,   100,    70,    71,    71,    67,    96,    94,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    75,    76,    76,    76,    76,    77,
      78,    79,    79,    79,    79,    79,    79,    79,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      87,    87,    87,    87,    88,    88,    89,    89,    90,    91,
      92,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   106,   107,   107,   107,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     7,
       6,     2,     0,     2,     0,     3,     1,     5,     4,     2,
       2,     2,     1,     1,     1,     0,     1,     3,     2,     5,
       2,     1,     4,     3,     3,     2,     2,     1,     2,     1,
       2,     5,     2,     3,     2,     5,     9,     1,     8,     1,
       1,     0,     2,     1,     4,     3,     3,     2,     5,     7,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     3,     1,
       3,     3,     2,     6,     3,     4,     6,     1,     0,     1,
       3,     4,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 153 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yylsp[0]);
    /* pp2: The @1 is needed to convince
     * yacc to set up yylloc. You can remove
     * it once you have other uses of @n*/
    Program *program = new Program((yyvsp[0].declList));
    // if no errors, advance to next phase
    if (ReportError::NumErrors() == 0) {
      if (kTestFlag == TEST_PARSER) {
          program->Print(0);
      } else {
          // pp3: if no errors, check program
          program->Check();
      }
    }
    if (kTestFlag > TEST_SEMANT && ReportError::NumErrors() == 0) {
        program->Emit();
    }
  }
#line 1835 "parse.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 175 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.declList) = (yyvsp[-1].declList))->Append((yyvsp[0].decl)); }
#line 1841 "parse.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 176 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].decl)); }
#line 1847 "parse.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 180 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[0].varDecl); }
#line 1853 "parse.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 181 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[0].classDecl); }
#line 1859 "parse.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 182 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[0].interfaceDecl); }
#line 1865 "parse.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 183 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.decl) = (yyvsp[0].fnDecl); }
#line 1871 "parse.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 187 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.varDecl) = (yyvsp[-1].varDecl); }
#line 1877 "parse.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 191 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[0]), (yyvsp[0].identifier)) ;
    (yyval.varDecl) = new VarDecl(i, (yyvsp[-1].type));
  }
#line 1886 "parse.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 198 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.type) = Type::voidType; }
#line 1892 "parse.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 199 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.type) = Type::boolType; }
#line 1898 "parse.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 200 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.type) = Type::intType; }
#line 1904 "parse.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 201 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.type) = Type::doubleType; }
#line 1910 "parse.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 202 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.type) = Type::stringType; }
#line 1916 "parse.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 203 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].namedType); }
#line 1922 "parse.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 204 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.type) = new ArrayType(Join((yylsp[-1]), (yylsp[0])), (yyvsp[-1].type)); }
#line 1928 "parse.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 208 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[0]), (yyvsp[0].identifier));
    (yyval.namedType) = new NamedType(i);
  }
#line 1937 "parse.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 215 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[-5]), (yyvsp[-5].identifier));
    (yyval.classDecl) = new ClassDecl(i, (yyvsp[-4].namedType), (yyvsp[-3].implementsTypeList), (yyvsp[-1].declList));
  }
#line 1946 "parse.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 219 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[-4]), (yyvsp[-4].identifier));
    (yyval.classDecl) = new ClassDecl(i, (yyvsp[-3].namedType), (yyvsp[-2].implementsTypeList), new List<Decl*>);
  }
#line 1955 "parse.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 226 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[0]), (yyvsp[0].identifier));
    (yyval.namedType) = new NamedType(i);
  }
#line 1964 "parse.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 230 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.namedType) = NULL; }
#line 1970 "parse.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 234 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.implementsTypeList) = (yyvsp[0].implementsTypeList);
  }
#line 1978 "parse.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 237 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.implementsTypeList) = new List<NamedType*>; }
#line 1984 "parse.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 241 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[0]), (yyvsp[0].identifier));
    NamedType *t = new NamedType(i);
    ((yyval.implementsTypeList) = (yyvsp[-2].implementsTypeList))->Append(t);
  }
#line 1994 "parse.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 246 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[0]), (yyvsp[0].identifier));
    NamedType *t = new NamedType(i);
    ((yyval.implementsTypeList) = new List<NamedType*>)->Append(t);
  }
#line 2004 "parse.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 254 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[-3]), (yyvsp[-3].identifier));
    (yyval.interfaceDecl) = new InterfaceDecl(i, (yyvsp[-1].declList));
  }
#line 2013 "parse.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 258 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[-2]), (yyvsp[-2].identifier));
    (yyval.interfaceDecl) = new InterfaceDecl(i, new List<Decl*>);
  }
#line 2022 "parse.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 265 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    FnDecl *f = (yyvsp[-1].fnDecl);
    f->SetFunctionBody((yyvsp[0].stmtBlock));
  }
#line 2031 "parse.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 272 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.declList) = (yyvsp[-1].declList))->Append((yyvsp[0].varDecl)); }
#line 2037 "parse.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 273 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.declList) = (yyvsp[-1].declList))->Append((yyvsp[0].fnDecl)); }
#line 2043 "parse.cc" /* yacc.c:1646  */
    break;

  case 32:
#line 274 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].varDecl)); }
#line 2049 "parse.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 275 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].fnDecl)); }
#line 2055 "parse.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 279 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.varDeclList) = (yyvsp[0].varDeclList); }
#line 2061 "parse.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 280 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.varDeclList) = new List<VarDecl*>; }
#line 2067 "parse.cc" /* yacc.c:1646  */
    break;

  case 36:
#line 284 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.varDeclList) = new List<VarDecl*>)->Append((yyvsp[0].varDecl)); }
#line 2073 "parse.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 285 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    ((yyval.varDeclList) = (yyvsp[-2].varDeclList))->Append((yyvsp[0].varDecl));
  }
#line 2081 "parse.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 291 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.fnDecl) = (yyvsp[-1].fnDecl); }
#line 2087 "parse.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 295 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Identifier *i = new Identifier((yylsp[-3]), (yyvsp[-3].identifier));
    (yyval.fnDecl) = new FnDecl(i, (yyvsp[-4].type), (yyvsp[-1].varDeclList));
  }
#line 2096 "parse.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 302 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    ((yyval.declList) = (yyvsp[-1].declList))->Append((yyvsp[0].fnDecl));
  }
#line 2104 "parse.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 305 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[0].fnDecl)); }
#line 2110 "parse.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 309 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.stmtBlock) = new StmtBlock((yyvsp[-2].varDeclList), (yyvsp[-1].stmtList));
  }
#line 2118 "parse.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 312 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.stmtBlock) = new StmtBlock((yyvsp[-1].varDeclList), new List<Stmt*>); }
#line 2124 "parse.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 313 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.stmtBlock) = new StmtBlock(new List<VarDecl*>, (yyvsp[-1].stmtList)); }
#line 2130 "parse.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 314 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.stmtBlock) = new StmtBlock(new List<VarDecl*>,
    new List<Stmt*>);
  }
#line 2139 "parse.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 321 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.stmtList) = (yyvsp[-1].stmtList))->Append((yyvsp[0].stmt)); }
#line 2145 "parse.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 322 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.stmtList) = new List<Stmt*>)->Append((yyvsp[0].stmt)); }
#line 2151 "parse.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 326 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.varDeclList) = (yyvsp[-1].varDeclList))->Append((yyvsp[0].varDecl)); }
#line 2157 "parse.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 327 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.varDeclList) = new List<VarDecl*>)->Append((yyvsp[0].varDecl)); }
#line 2163 "parse.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 331 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[-1].expr); }
#line 2169 "parse.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 332 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.stmt) = new WhileStmt((yyvsp[-2].expr), (yyvsp[0].stmt));
  }
#line 2177 "parse.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 335 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = new ReturnStmt((yylsp[-1]), new EmptyExpr); }
#line 2183 "parse.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 336 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = new ReturnStmt((yylsp[-1]), (yyvsp[-1].expr)); }
#line 2189 "parse.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 337 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = new BreakStmt((yylsp[-1])); }
#line 2195 "parse.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 338 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.stmt) = new PrintStmt((yyvsp[-2].exprList));
  }
#line 2203 "parse.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 341 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.stmt) = new ForStmt((yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt));
  }
#line 2211 "parse.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 344 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].ifStmt); }
#line 2217 "parse.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 345 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.stmt) = new SwitchStmt((yyvsp[-5].expr), (yyvsp[-2].caseStmtList), (yyvsp[-1].defaultStmt));
  }
#line 2225 "parse.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 348 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmtBlock); }
#line 2231 "parse.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 352 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2237 "parse.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 353 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new EmptyExpr(); }
#line 2243 "parse.cc" /* yacc.c:1646  */
    break;

  case 62:
#line 358 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.caseStmtList) = (yyvsp[-1].caseStmtList))->Append((yyvsp[0].caseStmt)); }
#line 2249 "parse.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 359 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.caseStmtList) = new List<CaseStmt*>)->Append((yyvsp[0].caseStmt)); }
#line 2255 "parse.cc" /* yacc.c:1646  */
    break;

  case 64:
#line 363 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    IntConstant *ic = new IntConstant((yylsp[-2]), (yyvsp[-2].integerConstant));
    (yyval.caseStmt) = new CaseStmt(ic, (yyvsp[0].stmtList));
  }
#line 2264 "parse.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 367 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    IntConstant *ic = new IntConstant((yylsp[-1]), (yyvsp[-1].integerConstant));
    (yyval.caseStmt) = new CaseStmt(ic, new List<Stmt*>);
  }
#line 2273 "parse.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 374 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.defaultStmt) = new DefaultStmt((yyvsp[0].stmtList));
  }
#line 2281 "parse.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 377 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.defaultStmt) = new DefaultStmt(new List<Stmt*>);
  }
#line 2289 "parse.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 383 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.ifStmt) = new IfStmt((yyvsp[-2].expr), (yyvsp[0].stmt), NULL);
  }
#line 2297 "parse.cc" /* yacc.c:1646  */
    break;

  case 69:
#line 386 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.ifStmt) = new IfStmt((yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt));
  }
#line 2305 "parse.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 392 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.exprList) = (yyvsp[-2].exprList))->Append((yyvsp[0].expr)); }
#line 2311 "parse.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 393 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { ((yyval.exprList) = new List<Expr*>)->Append((yyvsp[0].expr)); }
#line 2317 "parse.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 397 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2323 "parse.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 398 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2329 "parse.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 399 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2335 "parse.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 400 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "||");
    (yyval.expr) = new LogicalExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2344 "parse.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 404 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "&&");
    (yyval.expr) = new LogicalExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2353 "parse.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 408 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "<");
    (yyval.expr) = new RelationalExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2362 "parse.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 412 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), ">");
    (yyval.expr) = new RelationalExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2371 "parse.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 416 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), ">=");
    (yyval.expr) = new RelationalExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2380 "parse.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 420 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "<=");
    (yyval.expr) = new RelationalExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2389 "parse.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 424 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "==");
    (yyval.expr) = new EqualityExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2398 "parse.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 428 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "!=");
    (yyval.expr) = new EqualityExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2407 "parse.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 432 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
     Operator *op = new Operator((yylsp[-1]), "+");
     (yyval.expr) = new ArithmeticExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2416 "parse.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 436 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "-");
    (yyval.expr) = new ArithmeticExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2425 "parse.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 440 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "*");
    (yyval.expr) = new ArithmeticExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2434 "parse.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 444 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "/");
    (yyval.expr) = new ArithmeticExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2443 "parse.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 448 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "%");
    (yyval.expr) = new ArithmeticExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2452 "parse.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 452 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "^");
    (yyval.expr) = new BitwiseExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2461 "parse.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 456 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "|");
    (yyval.expr) = new BitwiseExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2470 "parse.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 460 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "&");
    (yyval.expr) = new BitwiseExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2479 "parse.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 464 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "<<");
    (yyval.expr) = new BitwiseExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2488 "parse.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 468 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), ">>");
    (yyval.expr) = new BitwiseExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2497 "parse.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 472 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "-");
    (yyval.expr) = new ArithmeticExpr(op, (yyvsp[0].expr));
  }
#line 2506 "parse.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 476 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "!");
    (yyval.expr) = new LogicalExpr(op, (yyvsp[0].expr));
  }
#line 2515 "parse.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 480 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "~");
    (yyval.expr) = new BitwiseExpr(op, (yyvsp[0].expr));
  }
#line 2524 "parse.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 484 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[0]), "++");
    (yyval.expr) = new PostfixExpr((yyvsp[-1].expr), op);
  }
#line 2533 "parse.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 488 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[0]), "--");
    (yyval.expr) = new PostfixExpr((yyvsp[-1].expr), op);
  }
#line 2542 "parse.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 492 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2548 "parse.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 493 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new This((yylsp[0])); }
#line 2554 "parse.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 494 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new ReadIntegerExpr(Join((yylsp[-2]), (yylsp[0]))); }
#line 2560 "parse.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 495 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new ReadLineExpr(Join((yylsp[-2]), (yylsp[0]))); }
#line 2566 "parse.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 496 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new NewExpr(Join((yylsp[-1]), (yylsp[0])), (yyvsp[0].namedType)); }
#line 2572 "parse.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 497 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.expr) = new NewArrayExpr(Join((yylsp[-5]), (yylsp[0])), (yyvsp[-3].expr), (yyvsp[-1].type));
  }
#line 2580 "parse.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 500 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    Operator *op = new Operator((yylsp[-1]), "=");
    (yyval.expr) = new AssignExpr((yyvsp[-2].expr), op, (yyvsp[0].expr));
  }
#line 2589 "parse.cc" /* yacc.c:1646  */
    break;

  case 105:
#line 507 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.expr) = new Call(Join((yylsp[-3]),(yylsp[0])), NULL, new Identifier((yylsp[-3]),(yyvsp[-3].identifier)), (yyvsp[-1].exprList));
  }
#line 2597 "parse.cc" /* yacc.c:1646  */
    break;

  case 106:
#line 510 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    {
    (yyval.expr) = new Call(Join((yylsp[-5]),(yylsp[0])), (yyvsp[-5].expr), new Identifier((yylsp[-3]),(yyvsp[-3].identifier)), (yyvsp[-1].exprList));
  }
#line 2605 "parse.cc" /* yacc.c:1646  */
    break;

  case 107:
#line 516 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.exprList) = (yyvsp[0].exprList); }
#line 2611 "parse.cc" /* yacc.c:1646  */
    break;

  case 108:
#line 517 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.exprList) = new List<Expr*>; }
#line 2617 "parse.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 521 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new FieldAccess(NULL, new Identifier((yylsp[0]), (yyvsp[0].identifier))); }
#line 2623 "parse.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 522 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new FieldAccess((yyvsp[-2].expr), new Identifier((yylsp[0]), (yyvsp[0].identifier))); }
#line 2629 "parse.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 523 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new ArrayAccess(Join((yylsp[-3]), (yylsp[0])), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 2635 "parse.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 528 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new IntConstant((yylsp[0]), (yyvsp[0].integerConstant)); }
#line 2641 "parse.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 529 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new DoubleConstant((yylsp[0]), (yyvsp[0].doubleConstant)); }
#line 2647 "parse.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 530 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new BoolConstant((yylsp[0]), (yyvsp[0].boolConstant)); }
#line 2653 "parse.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 531 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new StringConstant((yylsp[0]), (yyvsp[0].stringConstant)); }
#line 2659 "parse.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 532 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1646  */
    { (yyval.expr) = new NullConstant((yylsp[0])); }
#line 2665 "parse.cc" /* yacc.c:1646  */
    break;


#line 2669 "parse.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 535 "/home/pc/CompilerStudy/Exp4/decaf-master/decaf/parse.yy" /* yacc.c:1906  */


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser() {
  PrintDebug("parser", "Initializing parser");
  yydebug = false;
}
