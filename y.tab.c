/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     ELSEIF = 260,
     FOR = 261,
     WHILE = 262,
     SWITCH = 263,
     CASE = 264,
     DO = 265,
     BREAK = 266,
     DEFAULT = 267,
     TYPE_INT = 268,
     TYPE_FLT = 269,
     TYPE_STR = 270,
     TYPE_CHR = 271,
     TYPE_CONST = 272,
     show_symbol_table = 273,
     ID = 274,
     NUM = 275,
     FLOATING_NUM = 276,
     CHAR_VALUE = 277,
     STRING_VALUE = 278,
     exit_command = 279,
     DEC = 280,
     INC = 281,
     LT = 282,
     GT = 283,
     LTE = 284,
     GTE = 285,
     NOTEQ = 286,
     EQ = 287,
     NOT = 288,
     OR = 289,
     AND = 290
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define ELSEIF 260
#define FOR 261
#define WHILE 262
#define SWITCH 263
#define CASE 264
#define DO 265
#define BREAK 266
#define DEFAULT 267
#define TYPE_INT 268
#define TYPE_FLT 269
#define TYPE_STR 270
#define TYPE_CHR 271
#define TYPE_CONST 272
#define show_symbol_table 273
#define ID 274
#define NUM 275
#define FLOATING_NUM 276
#define CHAR_VALUE 277
#define STRING_VALUE 278
#define exit_command 279
#define DEC 280
#define INC 281
#define LT 282
#define GT 283
#define LTE 284
#define GTE 285
#define NOTEQ 286
#define EQ 287
#define NOT 288
#define OR 289
#define AND 290




/* Copy the first part of user declarations.  */
#line 5 "compilerYacc.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reset();
void declare_initalize(int id, int type_);
void declare_only(int id, int type_);
void assign_only(int id);
void declare_const(int id, int type);
void calc_lowp(char*);
void calc_highp(char*);
void cond_lowp(char*);
void cond_highp(char*);
void switch_test ();
void open_brace();
void close_brace ();
void switch_expr();
void print_symbol_table();
char * get_type(int type);

int new_scope();
int exit_scope();
int opened_scopes = 0;
int nesting_arr[100];
int nesting_last_index = -1;

int exitFlag=0;
int next_reg = 1; // The register number to be written in the next instruction
int next_cond_reg = 11;
int first_for = 1;
int is_first = 1; // check if is the first operation for consistent register counts
int is_first_cond = 1;
int after_hp = 0; // a high priority operation is done
int after_hp_cond = 0; // a high priority operation is done
int declared[26];
int is_constant[26];// for each variable store 1 if it constant
int scope[26]; // a scope number for each variable
int cscope = 0;
int next_case = 0;
int current_scope = 0;
int variable_initialized[26];
int type[26];


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 50 "compilerYacc.y"
{int INTGR; char * STRNG; float FLT; char CHR;}
/* Line 193 of yacc.c.  */
#line 213 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 226 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,     2,
      45,    46,    31,    29,     2,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    44,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    26,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,    28,    49,    25,     2,     2,     2,
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
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    14,    17,    20,    23,
      27,    31,    35,    38,    42,    46,    51,    56,    60,    62,
      64,    66,    68,    70,    71,    78,    79,    84,    85,    91,
      92,    93,   101,   104,   105,   108,   112,   113,   114,   125,
     137,   139,   141,   143,   145,   146,   155,   157,   159,   167,
     178,   188,   191,   193,   195,   199,   203,   207,   210,   212,
     216,   220,   224,   228,   232,   236,   240,   244,   248,   251,
     255,   259,   263,   265,   269,   273,   275,   277,   279,   281,
     285,   289,   292,   295,   298,   303,   308,   313,   318,   320,
     322,   328,   334
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    86,    44,    -1,    85,    44,    -1,    89,
      44,    -1,    53,    -1,    82,    44,    -1,    24,    44,    -1,
      18,    44,    -1,    52,    86,    44,    -1,    52,    85,    44,
      -1,    52,    89,    44,    -1,    52,    53,    -1,    52,    82,
      44,    -1,    52,    24,    44,    -1,    87,    52,    88,    52,
      -1,    52,    87,    52,    88,    -1,    52,    18,    44,    -1,
      76,    -1,    72,    -1,    67,    -1,    64,    -1,    54,    -1,
      -1,     8,    45,    82,    46,    55,    56,    -1,    -1,    87,
      59,    57,    88,    -1,    -1,    87,    59,    63,    58,    88,
      -1,    -1,    -1,     9,    60,    82,    61,    47,    52,    62,
      -1,    59,    59,    -1,    -1,    11,    44,    -1,    12,    47,
      52,    -1,    -1,    -1,    10,    48,    65,    52,    49,    66,
       7,    45,    80,    46,    -1,     6,    45,    85,    68,    80,
      69,    85,    46,    70,    52,    71,    -1,    44,    -1,    44,
      -1,    48,    -1,    49,    -1,    -1,     7,    73,    45,    80,
      46,    74,    52,    75,    -1,    48,    -1,    49,    -1,     3,
      45,    80,    46,    78,    52,    79,    -1,     3,    45,    80,
      46,    78,    52,    79,    77,    52,    79,    -1,     3,    45,
      80,    46,    78,    52,    79,     4,    76,    -1,     4,    48,
      -1,    48,    -1,    49,    -1,    45,    80,    46,    -1,    80,
      42,    81,    -1,    80,    43,    81,    -1,    41,    80,    -1,
      81,    -1,    82,    40,    82,    -1,    82,    39,    82,    -1,
      82,    38,    82,    -1,    82,    36,    82,    -1,    82,    37,
      82,    -1,    82,    35,    82,    -1,    45,    82,    46,    -1,
      82,    29,    83,    -1,    82,    30,    83,    -1,    25,    82,
      -1,    82,    28,    83,    -1,    82,    27,    83,    -1,    82,
      26,    83,    -1,    83,    -1,    83,    31,    84,    -1,    83,
      32,    84,    -1,    84,    -1,    20,    -1,    21,    -1,    19,
      -1,    45,    82,    46,    -1,    19,    50,    82,    -1,    13,
      19,    -1,    14,    19,    -1,    16,    19,    -1,    13,    19,
      50,    82,    -1,    14,    19,    50,    82,    -1,    16,    19,
      50,    22,    -1,    16,    19,    50,    21,    -1,    48,    -1,
      49,    -1,    17,    13,    19,    50,    82,    -1,    17,    14,
      19,    50,    82,    -1,    17,    16,    19,    50,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    91,    92,
      93,    94,    95,    98,    98,   101,   101,   102,   102,   103,
     106,   103,   107,   109,   110,   111,   113,   113,   113,   115,
     116,   118,   121,   125,   131,   131,   133,   134,   137,   138,
     139,   141,   142,   143,   147,   148,   149,   150,   151,   155,
     156,   157,   158,   159,   160,   165,   166,   167,   168,   175,
     176,   177,   178,   181,   182,   183,   187,   189,   191,   203,
     207,   210,   211,   212,   213,   214,   215,   227,   230,   231,
     235,   238,   240
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "ELSEIF", "FOR", "WHILE",
  "SWITCH", "CASE", "DO", "BREAK", "DEFAULT", "TYPE_INT", "TYPE_FLT",
  "TYPE_STR", "TYPE_CHR", "TYPE_CONST", "show_symbol_table", "ID", "NUM",
  "FLOATING_NUM", "CHAR_VALUE", "STRING_VALUE", "exit_command", "'~'",
  "'^'", "'&'", "'|'", "'+'", "'-'", "'*'", "'/'", "DEC", "INC", "LT",
  "GT", "LTE", "GTE", "NOTEQ", "EQ", "NOT", "OR", "AND", "';'", "'('",
  "')'", "':'", "'{'", "'}'", "'='", "$accept", "statement",
  "conditional_statement", "switch_statement", "@1", "switch_body", "@2",
  "@3", "cases", "@4", "@5", "case_break", "default", "do_while", "@6",
  "@7", "for_loop", "for_sep1", "for_sep2", "for_ob", "for_cb",
  "while_loop", "@8", "while_open_brace", "while_closed_brace",
  "if_statement", "ELSE_FINAL", "if_open_brace", "if_closed_brace",
  "condition", "high_p_condition", "math_expr", "high_priority_expr",
  "math_element", "assign_statement", "variable_declaration_statement",
  "open_brace", "close_brace", "constant_declaration_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   126,    94,    38,   124,    43,
      45,    42,    47,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,    59,    40,    41,    58,   123,   125,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    53,    53,
      53,    53,    53,    55,    54,    57,    56,    58,    56,    60,
      61,    59,    59,    62,    62,    63,    65,    66,    64,    67,
      68,    69,    70,    71,    73,    72,    74,    75,    76,    76,
      76,    77,    78,    79,    80,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    83,    83,    83,    84,    84,    84,    84,
      85,    86,    86,    86,    86,    86,    86,    86,    87,    88,
      89,    89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     2,     2,     3,
       3,     3,     2,     3,     3,     4,     4,     3,     1,     1,
       1,     1,     1,     0,     6,     0,     4,     0,     5,     0,
       0,     7,     2,     0,     2,     3,     0,     0,    10,    11,
       1,     1,     1,     1,     0,     8,     1,     1,     7,    10,
       9,     2,     1,     1,     3,     3,     3,     2,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     3,
       3,     2,     2,     2,     4,     4,     4,     4,     1,     1,
       5,     5,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    78,    76,    77,     0,     0,     0,    88,     0,     5,
      22,    21,    20,    19,    18,     0,    72,    75,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    81,    82,    83,
       0,     0,     0,     8,     0,     7,    78,    68,     0,     1,
       0,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     3,     2,     0,     4,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    65,    17,    14,
      13,    10,     9,     0,    11,     0,    71,    70,    69,    66,
      67,    73,    74,    89,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
      23,     0,    84,    85,    87,    86,     0,     0,     0,    16,
       0,    15,    54,    55,    56,    52,     0,    64,    62,    63,
      61,    60,    59,     0,     0,     0,    37,    90,    91,    92,
      79,     0,    41,     0,    46,     0,    24,     0,     0,    53,
      48,     0,     0,    29,    25,     0,     0,     0,     0,    47,
      45,     0,     0,     0,    32,    27,     0,    51,    50,     0,
      42,     0,    30,     0,    26,     0,     0,    49,     0,     0,
      35,    28,    38,    43,    39,     0,    33,     0,    31,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,   145,   156,   173,   185,   174,   171,
     189,   198,   175,    21,    79,   158,    22,   118,   153,   181,
     194,    23,    34,   155,   170,    24,   167,   136,   160,    72,
      73,    25,    26,    27,    28,    29,    30,   104,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -84
static const yytype_int16 yypact[] =
{
     524,   -32,   -22,   -84,   -17,   -40,    14,    27,    42,    -2,
      26,    33,   -84,   -84,    37,    39,    39,   -84,    24,   -84,
     -84,   -84,   -84,   -84,   -84,   273,    -6,   -84,    65,    69,
     524,    71,   108,    58,    74,    39,   -84,    76,    82,    85,
     105,   122,   124,   -84,    39,   -84,   -84,     6,   200,   -84,
     110,   111,   -84,   283,   113,   114,   524,   115,    31,    31,
      31,    31,    31,   -84,    31,    31,   -84,   -84,   271,   -84,
     108,   108,   -37,   -84,   316,    33,   116,   108,   211,   524,
      39,    39,    52,   112,   119,   120,   235,    91,   -84,   -84,
     -84,   -84,   -84,   271,   -84,    39,    -6,    -6,    -6,    -6,
      -6,   -84,   -84,   -84,   524,   -84,    25,   167,    39,    39,
     118,    39,    39,    39,    39,    39,    39,   -84,   108,    49,
     -84,   315,   235,   235,   -84,   -84,    39,    39,   149,   -84,
     278,   557,   -84,   -84,   -84,   -84,   524,   235,   235,   235,
     235,   235,   235,    43,   132,   136,   -84,   235,   235,   -84,
     -84,   359,   -84,    58,   -84,   524,   -84,   177,   180,   -84,
     185,   144,   403,   -84,     9,   153,    -1,   524,   151,   -84,
     -84,    39,   163,   165,   177,   -84,   108,   -84,   -84,   359,
     -84,   524,   235,   524,   -84,   165,    62,   -84,   447,   168,
     557,   -84,   -84,   -84,   -84,   524,   491,   172,   -84,   -84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,    88,    21,   -84,   -84,   -84,   -84,   -84,    55,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,    54,   -84,   -84,    44,   -55,
      22,   -15,   327,    81,   -14,    57,   -11,   -83,    70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      47,    48,     1,    53,    54,   108,   109,    56,    36,   110,
     129,    40,    41,    32,    42,   105,   106,    74,   163,    76,
      78,   172,   119,    33,    49,    64,    65,     1,    35,    86,
       2,     3,     4,    37,     5,    61,    62,     6,     7,    52,
       8,     9,    50,    11,    12,    13,    38,   177,    51,    15,
      46,    12,    13,    53,    54,    74,   107,    56,    46,    12,
      13,    39,    74,   143,    15,   122,   123,   108,   109,    16,
      43,   132,    17,   124,   125,    55,    95,    75,    53,    54,
     130,    45,    56,    44,    16,   108,   109,   152,    57,    52,
     184,   108,   109,    74,    74,   144,   137,   138,   139,   140,
     141,   142,   191,    74,   108,   109,    53,    54,   192,    66,
      56,   147,   148,    67,    52,    69,    53,    54,    68,    77,
      56,   186,   -79,   -79,    83,    55,    80,    46,    12,    13,
     133,   134,    81,    15,   157,    82,    53,    54,    57,   161,
      56,    84,    52,    85,    93,   101,   102,    53,    54,    70,
      55,    56,    52,    71,    88,    89,   182,    91,    92,    94,
     117,    74,   126,    57,    53,    54,   135,   121,    56,   127,
     128,   149,    52,    53,    54,    53,    54,    56,    55,    56,
     154,    53,    54,    52,    17,    56,   163,   165,    55,   166,
     168,    57,   131,    58,    59,    60,    61,    62,   176,   180,
      52,    57,   111,   112,   113,   114,   115,   116,    55,    52,
     183,    52,   164,    87,   103,   195,   199,    52,     0,    55,
     178,    57,     0,   187,   151,     0,    58,    59,    60,    61,
      62,     0,    57,     0,     0,     0,    55,    58,    59,    60,
      61,    62,     0,   162,     0,    55,    87,    55,     0,    57,
       0,     0,     0,    55,     0,   179,     0,   120,    57,     0,
      57,    58,    59,    60,    61,    62,    57,     0,     0,   188,
       0,   190,     0,     0,     1,     0,     0,     2,     3,     4,
       0,     5,     0,   196,     6,     7,     0,     8,     9,    50,
      11,    12,    13,     0,     0,    51,    15,     0,     0,    58,
      59,    60,    61,    62,    58,    59,    60,    61,    62,    58,
      59,    60,    61,    62,     0,     0,    16,    63,     1,    17,
     103,     2,     3,     4,   150,     5,     0,    90,     6,     7,
       0,     8,     9,    50,    11,    12,    13,     0,     0,    51,
      15,     0,    58,    59,    60,    61,    62,     0,     0,     0,
       0,   111,   112,   113,   114,   115,   116,     0,     0,     0,
      16,     0,     1,    17,   146,     2,     3,     4,     0,     5,
       0,     0,     6,     7,     0,     8,     9,    50,    11,    12,
      13,     0,     0,    51,    15,    96,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     1,    17,   159,     2,
       3,     4,     0,     5,     0,     0,     6,     7,     0,     8,
       9,    50,    11,    12,    13,     0,     0,    51,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       1,    17,   169,     2,     3,     4,     0,     5,     0,     0,
       6,     7,     0,     8,     9,    50,    11,    12,    13,     0,
       0,    51,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     1,    17,   193,     2,     3,     4,
       0,     5,   197,     0,     6,     7,     0,     8,     9,    50,
      11,    12,    13,     0,     0,    51,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       2,     3,     4,     0,     5,     0,    16,     6,     7,    17,
       8,     9,    10,    11,    12,    13,     0,     0,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     4,     0,     5,     0,    16,
       6,     7,    17,     8,     9,    50,    11,    12,    13,     0,
       0,    51,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,    17
};

static const yytype_int16 yycheck[] =
{
      15,    16,     3,    18,    18,    42,    43,    18,    48,    46,
      93,    13,    14,    45,    16,    70,    71,    32,     9,    33,
      35,    12,    77,    45,     0,    31,    32,     3,    45,    44,
       6,     7,     8,    19,    10,    29,    30,    13,    14,    18,
      16,    17,    18,    19,    20,    21,    19,    48,    24,    25,
      19,    20,    21,    68,    68,    70,    71,    68,    19,    20,
      21,    19,    77,   118,    25,    80,    81,    42,    43,    45,
      44,    46,    48,    21,    22,    18,    45,    19,    93,    93,
      95,    44,    93,    50,    45,    42,    43,    44,    18,    68,
     173,    42,    43,   108,   109,    46,   111,   112,   113,   114,
     115,   116,   185,   118,    42,    43,   121,   121,    46,    44,
     121,   126,   127,    44,    93,    44,   131,   131,    30,    45,
     131,   176,    31,    32,    19,    68,    50,    19,    20,    21,
     108,   109,    50,    25,   145,    50,   151,   151,    68,   153,
     151,    19,   121,    19,    56,    64,    65,   162,   162,    41,
      93,   162,   131,    45,    44,    44,   171,    44,    44,    44,
      44,   176,    50,    93,   179,   179,    48,    79,   179,    50,
      50,    22,   151,   188,   188,   190,   190,   188,   121,   190,
      48,   196,   196,   162,    48,   196,     9,     7,   131,     4,
      46,   121,   104,    26,    27,    28,    29,    30,    45,    48,
     179,   131,    35,    36,    37,    38,    39,    40,   151,   188,
      47,   190,   157,    46,    49,    47,    44,   196,    -1,   162,
     166,   151,    -1,   179,   136,    -1,    26,    27,    28,    29,
      30,    -1,   162,    -1,    -1,    -1,   179,    26,    27,    28,
      29,    30,    -1,   155,    -1,   188,    46,   190,    -1,   179,
      -1,    -1,    -1,   196,    -1,   167,    -1,    46,   188,    -1,
     190,    26,    27,    28,    29,    30,   196,    -1,    -1,   181,
      -1,   183,    -1,    -1,     3,    -1,    -1,     6,     7,     8,
      -1,    10,    -1,   195,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    26,
      27,    28,    29,    30,    26,    27,    28,    29,    30,    26,
      27,    28,    29,    30,    -1,    -1,    45,    44,     3,    48,
      49,     6,     7,     8,    46,    10,    -1,    44,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      45,    -1,     3,    48,    49,     6,     7,     8,    -1,    10,
      -1,    -1,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,     3,    48,    49,     6,
       7,     8,    -1,    10,    -1,    -1,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
       3,    48,    49,     6,     7,     8,    -1,    10,    -1,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,     3,    48,    49,     6,     7,     8,
      -1,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
       6,     7,     8,    -1,    10,    -1,    45,    13,    14,    48,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,     8,    -1,    10,    -1,    45,
      13,    14,    48,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    10,    13,    14,    16,    17,
      18,    19,    20,    21,    24,    25,    45,    48,    52,    53,
      54,    64,    67,    72,    76,    82,    83,    84,    85,    86,
      87,    89,    45,    45,    73,    45,    48,    19,    19,    19,
      13,    14,    16,    44,    50,    44,    19,    82,    82,     0,
      18,    24,    53,    82,    85,    86,    87,    89,    26,    27,
      28,    29,    30,    44,    31,    32,    44,    44,    52,    44,
      41,    45,    80,    81,    82,    19,    85,    45,    82,    65,
      50,    50,    50,    19,    19,    19,    82,    46,    44,    44,
      44,    44,    44,    52,    44,    45,    83,    83,    83,    83,
      83,    84,    84,    49,    88,    80,    80,    82,    42,    43,
      46,    35,    36,    37,    38,    39,    40,    44,    68,    80,
      46,    52,    82,    82,    21,    22,    50,    50,    50,    88,
      82,    52,    46,    81,    81,    48,    78,    82,    82,    82,
      82,    82,    82,    80,    46,    55,    49,    82,    82,    22,
      46,    52,    44,    69,    48,    74,    56,    87,    66,    49,
      79,    85,    52,     9,    59,     7,     4,    77,    46,    49,
      75,    60,    12,    57,    59,    63,    45,    48,    76,    52,
      48,    70,    82,    47,    88,    58,    80,    79,    52,    61,
      52,    88,    46,    49,    71,    47,    52,    11,    62,    44
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 72 "compilerYacc.y"
    {reset();}
    break;

  case 3:
#line 73 "compilerYacc.y"
    {reset();}
    break;

  case 4:
#line 74 "compilerYacc.y"
    {reset();}
    break;

  case 5:
#line 75 "compilerYacc.y"
    {reset();}
    break;

  case 6:
#line 76 "compilerYacc.y"
    {reset();}
    break;

  case 7:
#line 77 "compilerYacc.y"
    {exit(EXIT_SUCCESS);}
    break;

  case 8:
#line 78 "compilerYacc.y"
    {print_symbol_table();}
    break;

  case 9:
#line 79 "compilerYacc.y"
    {reset();}
    break;

  case 10:
#line 80 "compilerYacc.y"
    {reset();}
    break;

  case 11:
#line 81 "compilerYacc.y"
    {reset();}
    break;

  case 12:
#line 82 "compilerYacc.y"
    {reset();}
    break;

  case 13:
#line 83 "compilerYacc.y"
    {reset();}
    break;

  case 14:
#line 84 "compilerYacc.y"
    {exit(EXIT_SUCCESS);}
    break;

  case 15:
#line 85 "compilerYacc.y"
    {;}
    break;

  case 16:
#line 86 "compilerYacc.y"
    {;}
    break;

  case 17:
#line 87 "compilerYacc.y"
    {print_symbol_table();}
    break;

  case 18:
#line 91 "compilerYacc.y"
    {;}
    break;

  case 19:
#line 92 "compilerYacc.y"
    {;}
    break;

  case 20:
#line 93 "compilerYacc.y"
    {;}
    break;

  case 21:
#line 94 "compilerYacc.y"
    {;}
    break;

  case 22:
#line 95 "compilerYacc.y"
    {;}
    break;

  case 23:
#line 98 "compilerYacc.y"
    {switch_expr();new_scope();}
    break;

  case 25:
#line 101 "compilerYacc.y"
    {int tmp = exit_scope(); printf("label%d%c:\nlabel%d:\n",tmp,'a'-1+next_case,tmp);}
    break;

  case 27:
#line 102 "compilerYacc.y"
    {int tmp = exit_scope();printf("label%d%c:\nlabel%d:\n",tmp,'a'-1+next_case,tmp);}
    break;

  case 29:
#line 103 "compilerYacc.y"
    {if(next_case>0)
								{printf("label%d%c:\n",nesting_arr[nesting_last_index],'a'-1+next_case);}
							next_case++;}
    break;

  case 30:
#line 106 "compilerYacc.y"
    {switch_test();}
    break;

  case 31:
#line 106 "compilerYacc.y"
    {;}
    break;

  case 32:
#line 107 "compilerYacc.y"
    {;}
    break;

  case 34:
#line 110 "compilerYacc.y"
    {printf("JMP label%d\n",nesting_arr[nesting_last_index]);}
    break;

  case 35:
#line 111 "compilerYacc.y"
    {;}
    break;

  case 36:
#line 113 "compilerYacc.y"
    {printf("label:%d\n",new_scope()); open_brace();}
    break;

  case 37:
#line 113 "compilerYacc.y"
    {close_brace();}
    break;

  case 38:
#line 113 "compilerYacc.y"
    {printf("JT R10,label%d\n",exit_scope());}
    break;

  case 39:
#line 115 "compilerYacc.y"
    {;}
    break;

  case 40:
#line 116 "compilerYacc.y"
    {printf("MOV RF,0\n");
								printf("label%d:\n",new_scope());reset();}
    break;

  case 41:
#line 118 "compilerYacc.y"
    {printf("JF R10, label%da\n",nesting_arr[nesting_last_index]);
								printf("CMPE RF,0\n");
								printf("JT R10, label%db\n", nesting_arr[nesting_last_index]);}
    break;

  case 42:
#line 121 "compilerYacc.y"
    {printf("label%db:\n",nesting_arr[nesting_last_index]);
							printf("MOV RF,1\n");
							open_brace();
							reset();}
    break;

  case 43:
#line 125 "compilerYacc.y"
    {printf("JMP label%d\n",nesting_arr[nesting_last_index]);
							printf("label%da:\n",exit_scope());
							close_brace();
						}
    break;

  case 44:
#line 131 "compilerYacc.y"
    {printf("label%d:\n",new_scope());}
    break;

  case 45:
#line 131 "compilerYacc.y"
    {;}
    break;

  case 46:
#line 133 "compilerYacc.y"
    {printf("JF R10, label%da\n",nesting_arr[nesting_last_index]);reset();open_brace();}
    break;

  case 47:
#line 134 "compilerYacc.y"
    {printf("JMP label%d\n",nesting_arr[nesting_last_index]);
													printf("label%da:\n",exit_scope());reset();close_brace();}
    break;

  case 48:
#line 137 "compilerYacc.y"
    {;}
    break;

  case 49:
#line 138 "compilerYacc.y"
    {;}
    break;

  case 50:
#line 139 "compilerYacc.y"
    {;}
    break;

  case 51:
#line 141 "compilerYacc.y"
    {printf("JT R10, label%d\n",new_scope());open_brace();reset();}
    break;

  case 52:
#line 142 "compilerYacc.y"
    {printf("JF R10, label%d\n",new_scope());open_brace();reset();}
    break;

  case 53:
#line 143 "compilerYacc.y"
    {printf("label%d:\n",exit_scope());close_brace();}
    break;

  case 54:
#line 147 "compilerYacc.y"
    {;}
    break;

  case 55:
#line 148 "compilerYacc.y"
    {cond_lowp("OR");}
    break;

  case 56:
#line 149 "compilerYacc.y"
    {cond_lowp("AND");}
    break;

  case 57:
#line 150 "compilerYacc.y"
    {printf("NOT R10\n");}
    break;

  case 58:
#line 151 "compilerYacc.y"
    {;}
    break;

  case 59:
#line 155 "compilerYacc.y"
    {cond_highp("CMPE");}
    break;

  case 60:
#line 156 "compilerYacc.y"
    {cond_highp("CMPNE");}
    break;

  case 61:
#line 157 "compilerYacc.y"
    {cond_highp("CMPGE");}
    break;

  case 62:
#line 158 "compilerYacc.y"
    {cond_highp("CMPG");}
    break;

  case 63:
#line 159 "compilerYacc.y"
    {cond_highp("CMPLE");}
    break;

  case 64:
#line 160 "compilerYacc.y"
    {cond_highp("CMPL");}
    break;

  case 65:
#line 165 "compilerYacc.y"
    {(yyval.INTGR)=(yyvsp[(2) - (3)].INTGR);}
    break;

  case 66:
#line 166 "compilerYacc.y"
    { calc_lowp("ADD"); }
    break;

  case 67:
#line 167 "compilerYacc.y"
    { calc_lowp("SUB"); }
    break;

  case 68:
#line 168 "compilerYacc.y"
    {
																												(yyval.INTGR) = ~(yyvsp[(2) - (2)].INTGR);
																												if(after_hp)
																													printf("NOT R4\n");
																												else
																													printf("NOT R%d\n",next_reg-1);
																											}
    break;

  case 69:
#line 175 "compilerYacc.y"
    { calc_lowp("OR"); }
    break;

  case 70:
#line 176 "compilerYacc.y"
    { calc_lowp("AND"); }
    break;

  case 71:
#line 177 "compilerYacc.y"
    { calc_lowp("XOR"); }
    break;

  case 72:
#line 178 "compilerYacc.y"
    {	(yyval.INTGR)=(yyvsp[(1) - (1)].INTGR);}
    break;

  case 73:
#line 181 "compilerYacc.y"
    { calc_highp("MUL"); }
    break;

  case 74:
#line 182 "compilerYacc.y"
    { calc_highp("DIV"); }
    break;

  case 75:
#line 183 "compilerYacc.y"
    { (yyval.INTGR)=(yyvsp[(1) - (1)].INTGR); }
    break;

  case 76:
#line 187 "compilerYacc.y"
    {(yyval.INTGR)=(yyvsp[(1) - (1)].INTGR);
																printf("MOV R%d, %d\n",next_reg++ ,(yyvsp[(1) - (1)].INTGR));}
    break;

  case 77:
#line 189 "compilerYacc.y"
    {(yyval.INTGR)=(yyvsp[(1) - (1)].FLT);
																printf("MOV R%d, %f\n",next_reg++,(yyvsp[(1) - (1)].FLT));}
    break;

  case 78:
#line 191 "compilerYacc.y"
    {(yyval.INTGR)=(yyvsp[(1) - (1)].INTGR);
																	if(declared[(yyvsp[(1) - (1)].INTGR)] == 1){
																		if(variable_initialized[(yyvsp[(1) - (1)].INTGR)] == 1){
																			(yyval.INTGR)=(yyvsp[(1) - (1)].INTGR);
																			printf("MOV R%d, %c\n",next_reg++,(yyvsp[(1) - (1)].INTGR)+'a');
																		} else {
																			printf("Error: %c is not set\n", (yyvsp[(1) - (1)].INTGR)+'a');
																		}
																	} else {
																		printf("Error: %c is not declared\n", (yyvsp[(1) - (1)].INTGR)+'a');
																	}
																}
    break;

  case 79:
#line 203 "compilerYacc.y"
    {(yyval.INTGR)=(yyvsp[(2) - (3)].INTGR);}
    break;

  case 80:
#line 207 "compilerYacc.y"
    {	assign_only((yyvsp[(1) - (3)].INTGR));}
    break;

  case 81:
#line 210 "compilerYacc.y"
    { 	declare_only((yyvsp[(2) - (2)].INTGR),1);}
    break;

  case 82:
#line 211 "compilerYacc.y"
    { 	declare_only((yyvsp[(2) - (2)].INTGR),2);}
    break;

  case 83:
#line 212 "compilerYacc.y"
    { 	declare_only((yyvsp[(2) - (2)].INTGR),3);}
    break;

  case 84:
#line 213 "compilerYacc.y"
    { 	declare_initalize((yyvsp[(2) - (4)].INTGR),1);}
    break;

  case 85:
#line 214 "compilerYacc.y"
    { 	declare_initalize((yyvsp[(2) - (4)].INTGR),2);}
    break;

  case 86:
#line 215 "compilerYacc.y"
    {if(declared[(yyvsp[(2) - (4)].INTGR)] == 0) {
																	declared[(yyvsp[(2) - (4)].INTGR)] = 1;
																	type[(yyvsp[(2) - (4)].INTGR)] = 3;
																	scope[(yyvsp[(2) - (4)].INTGR)] = cscope;
																	is_constant[(yyvsp[(2) - (4)].INTGR)] = 0;
																	variable_initialized[(yyvsp[(2) - (4)].INTGR)] = 1;
																	printf("MOV %c,'%c'\n",(yyvsp[(2) - (4)].INTGR)+'a',(yyvsp[(4) - (4)].CHR)+'a');

																} else {
																	printf("Syntax Error : %c is an already declared variable\n", (yyvsp[(2) - (4)].INTGR) + 'a');
																}
															}
    break;

  case 87:
#line 227 "compilerYacc.y"
    { printf("Syntax Error : char can not be assigned a floating number\n");}
    break;

  case 88:
#line 230 "compilerYacc.y"
    { open_brace(); }
    break;

  case 89:
#line 231 "compilerYacc.y"
    { close_brace(); }
    break;

  case 90:
#line 235 "compilerYacc.y"
    { 	declare_const((yyvsp[(3) - (5)].INTGR),1);
																						}
    break;

  case 91:
#line 238 "compilerYacc.y"
    { 	declare_const((yyvsp[(3) - (5)].INTGR),2);
																						}
    break;

  case 92:
#line 240 "compilerYacc.y"
    {
																								if(declared[(yyvsp[(3) - (5)].INTGR)] == 0) {
																									declared[(yyvsp[(3) - (5)].INTGR)] = 1;
																									type[(yyvsp[(3) - (5)].INTGR)] = 3;
																									scope[(yyvsp[(3) - (5)].INTGR)] = cscope;
																									is_constant[(yyvsp[(3) - (5)].INTGR)] = 1;
																									variable_initialized[(yyvsp[(3) - (5)].INTGR)] = 1;
																									printf("MOV %c,'%c'\n",(yyvsp[(3) - (5)].INTGR)+'a',(yyvsp[(5) - (5)].CHR)+'a');

																								} else {
																									printf("Syntax Error : %c is an already declared variable\n", (yyvsp[(3) - (5)].INTGR) + 'a');
																								}
																							}
    break;


/* Line 1267 of yacc.c.  */
#line 2170 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 256 "compilerYacc.y"

//Normal C-code
int main(void)
{
	return yyparse();
}
void print_symbol_table()
{
	printf("Symbol Table:\n=============\n");
	printf("Symbol\t\tType\t\tInitialized\t\tConstant\t\tScope\t\t\n");
	for (int i = 0 ; i < 26 ; i ++){
		if(declared[i] == 1)
		{
			printf("%c\t\t%s\t\t",i+'a',get_type(type[i]));
			if(variable_initialized[i] == 1)
				printf("true\t\t\t");
			else printf("false\t\t\t");
			if(is_constant[i] == 1)
				printf("true\t\t\t");
			else printf("false\t\t\t");

			printf("%d\n", scope[i]);
		}
	}
}
char * get_type(int type){
	if(type == 1)
		return "int";
	if(type == 2)
		return "float";
	if(type == 3)
		return "char";
}
void calc_lowp (char * op) {
	/*$$ = $1 + $3;*/
	if(is_first){
		printf("%s R0,R%d,R%d\n", op, --next_reg ,--next_reg );
		is_first=0;
	}
	else{
		if(after_hp){
			printf("%s R0,R%d,R4\n",op, --next_reg);
			after_hp = 0;
		}
		else{
			printf("%s R0,R%d,R0\n",op, --next_reg);
		}
		}
}

void calc_highp (char * op) {
	if(!after_hp){
		printf("%s R4,R%d,R%d\n", op, --next_reg ,--next_reg );
		after_hp = 1;
		is_first = 0;
	}
	else{
		printf("%s R4,R%d,R4\n", op, --next_reg );
	}
}

void cond_lowp (char * op) {
printf("%s R10,R10,R14\n",op);
}

void cond_highp (char * op) {
	if(!after_hp_cond){
		printf("%s R10,R%d,R%d\n", op, --next_reg ,--next_reg );
		after_hp_cond = 1;
		is_first_cond = 0;
	}
	else{
		printf("%s R14,R%d,R%d\n", op, --next_reg, --next_reg );
	}
}
void switch_test () {
	if(is_first){
		printf("CMPE R10,RS,R%d\n", --next_reg );
		is_first=0;
	}
	else{
		if(after_hp){
			printf("CMPE R10,RS,R4\n", --next_reg);
		}
		else{
			printf("CMPE R10,RS,R0\n", --next_reg);
		}
		}
		printf("JF R10,label%d%c\n",nesting_arr[nesting_last_index],'a'-1+next_case);
		reset();
}
void declare_only(int id,int type_)
{
	if(declared[id] == 0) {
	declared[id] = 1;
	type[id] = type_;
	scope[id] = cscope;
	variable_initialized[id] = 0;
	is_constant[id] = 0;
	} else {
		printf("Syntax Error : %c is an already declared variable\n", id + 'a');
	}
}
void assign_only(int id){
	if(declared[id] == 1) {
		if (is_constant[id] == 0) {
			variable_initialized[id] = 1;
			if(is_first){
				printf("MOV %c,R%d\n",id+'a',--next_reg);
				}else{
					if(after_hp)
						printf("MOV %c,R4\n",id+'a');
					else
						printf("MOV %c,R0\n",id+'a');
				}
			} else {
				printf("Syntax Error : %c is a constant\n", id + 'a');
			}
	} else {
		printf("Syntax Error : %c is not declared\n", id + 'a');
	}
}

void switch_expr(){
	if(is_first){
		printf("MOV RS,R%d\n",--next_reg);
		}else{
			if(after_hp)
				printf("MOV RS,R4\n");
			else
				printf("MOV RS,R0\n");
		}
	}

void declare_const(int id, int _type)
{
	if(declared[id] == 0) {
			declared[id] = 1;
			type[id] = _type;
			scope[id] = cscope;
			variable_initialized[id] = 1;
			is_constant[id] = 1;
			if(is_first){
				printf("MOV %c,R%d\n",id+'a',--next_reg);
		}else{
			if(after_hp)
				printf("MOV %c,R4\n",id+'a');
			else
				printf("MOV %c,R0\n",id+'a');
			}
	} else {
		printf("Syntax Error : %c is an already declared variable\n", id + 'a');
	}
}
void declare_initalize(int id, int _type){
	if(declared[id] == 0) {
		declared[id] = 1;
		type[id] = _type;
		scope[id] = cscope;
		variable_initialized[id] = 1;
		is_constant[id] = 0;
		if(is_first){
			printf("MOV %c,R%d\n",id+'a',--next_reg);
		}else{
			if(after_hp)
				printf("MOV %c,R4\n",id+'a');
			else
				printf("MOV %c,R0\n",id+'a');
			}
	} else {
		printf("Syntax Error : %c is an already declared variable\n", id + 'a');
	}
}
void reset()
{
	next_reg = 1;
	is_first = 1;
	after_hp = 0;
	is_first_cond = 1;
	after_hp_cond = 0;
	printf("\n");
}
int yyerror(char* s)
{
  fprintf(stderr, "%s\n",s);
  return 1;
}
int yywrap()
{
  return(1);
}

void open_brace() {
	cscope++;
}

void close_brace () {
	for (int i = 0; i < 26; i++) {
			if (scope[i] == cscope ) {
				scope[i] = -1;
				declared[i] = 0;
			}
	}
	cscope--;
}


int new_scope()
{
	opened_scopes ++;
	nesting_last_index ++;
	nesting_arr[nesting_last_index] = opened_scopes;
	return opened_scopes;
}
int exit_scope()
{
	int tmp = nesting_arr[nesting_last_index];
	nesting_last_index --;
	return tmp;
}

