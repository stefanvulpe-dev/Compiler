/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "my_language.y"

#include "../headers/utilities.h"
#define ARR_SIZE 1500

extern FILE* yyin;
extern char* yytext;

void* result;
char msg[ARR_SIZE], var_type[ARR_SIZE], var_name[ARR_SIZE], scope[ARR_SIZE];
int inum;
float fnum; 
bool boolean;
char character;
char* string;

#line 87 "./headers/my_language.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "my_language.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_CONST = 6,                      /* CONST  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_BOOLEAN = 9,                    /* BOOLEAN  */
  YYSYMBOL_TIP = 10,                       /* TIP  */
  YYSYMBOL_BGIN = 11,                      /* BGIN  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_CLASS = 14,                     /* CLASS  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_LTE = 17,                       /* LTE  */
  YYSYMBOL_GTE = 18,                       /* GTE  */
  YYSYMBOL_NEQ = 19,                       /* NEQ  */
  YYSYMBOL_EQ = 20,                        /* EQ  */
  YYSYMBOL_21_ = 21,                       /* '<'  */
  YYSYMBOL_22_ = 22,                       /* '>'  */
  YYSYMBOL_23_ = 23,                       /* '!'  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '/'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '%'  */
  YYSYMBOL_29_ = 29,                       /* '^'  */
  YYSYMBOL_30_ = 30,                       /* ';'  */
  YYSYMBOL_31_ = 31,                       /* '['  */
  YYSYMBOL_32_ = 32,                       /* ']'  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_global_variables = 40,          /* global_variables  */
  YYSYMBOL_global_declaration = 41,        /* global_declaration  */
  YYSYMBOL_brackets = 42,                  /* brackets  */
  YYSYMBOL_functions = 43,                 /* functions  */
  YYSYMBOL_function_declaration = 44,      /* function_declaration  */
  YYSYMBOL_param_list = 45,                /* param_list  */
  YYSYMBOL_classes = 46,                   /* classes  */
  YYSYMBOL_class_declarations = 47,        /* class_declarations  */
  YYSYMBOL_class_declaration = 48,         /* class_declaration  */
  YYSYMBOL_program = 49,                   /* program  */
  YYSYMBOL_statements = 50,                /* statements  */
  YYSYMBOL_statement = 51,                 /* statement  */
  YYSYMBOL_params = 52,                    /* params  */
  YYSYMBOL_param = 53,                     /* param  */
  YYSYMBOL_exp = 54,                       /* exp  */
  YYSYMBOL_avars_int = 55,                 /* avars_int  */
  YYSYMBOL_aexp_int = 56,                  /* aexp_int  */
  YYSYMBOL_aexp_float = 57,                /* aexp_float  */
  YYSYMBOL_bexp = 58,                      /* bexp  */
  YYSYMBOL_str = 59                        /* str  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  342

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,     2,     2,    28,     2,     2,
      35,    36,    27,    24,    37,    25,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    30,
      21,     2,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,    29,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    51,    53,    62,    63,    64,    65,    68,
      69,    72,    73,    74,    77,    78,    81,    82,    83,    84,
      87,    88,    91,    92,    95,    96,    97,    98,    99,   100,
     101,   104,   107,   108,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   122,   123,   126,   127,   128,   131,   138,
     145,   152,   159,   166,   175,   176,   177,   178,   179,   180,
     181,   189,   197,   205,   213,   214,   215,   226,   227,   228,
     229,   230,   231,   232,   240,   241,   242,   243,   244,   245,
     248,   249,   250,   251,   252,   253,   254,   262,   263,   264,
     265,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   316,   321,   332,
     345
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "FLOAT",
  "ID", "CONST", "STRING", "CHAR", "BOOLEAN", "TIP", "BGIN", "END",
  "ASSIGN", "CLASS", "AND", "OR", "LTE", "GTE", "NEQ", "EQ", "'<'", "'>'",
  "'!'", "'+'", "'-'", "'/'", "'*'", "'%'", "'^'", "';'", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "','", "':'", "$accept", "global_variables",
  "global_declaration", "brackets", "functions", "function_declaration",
  "param_list", "classes", "class_declarations", "class_declaration",
  "program", "statements", "statement", "params", "param", "exp",
  "avars_int", "aexp_int", "aexp_float", "bexp", "str", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-203)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     106,     0,    13,    14,    53,   104,    91,  -203,   375,  -203,
    -203,   163,    22,   156,   168,  -203,   106,   108,   256,    19,
      16,   213,    -2,  -203,   180,    90,  -203,   226,  -203,    20,
     225,   237,   234,   239,    16,   257,  -203,  -203,  -203,  -203,
    -203,  -203,   244,   244,  -203,   178,   276,   330,   539,   222,
     246,   275,  -203,   263,   256,   302,   308,   280,   297,   305,
      16,   331,     8,   353,   358,   108,   256,  -203,    16,   178,
     276,   330,  -203,   304,   317,   343,   564,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    21,    21,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,   244,   244,   244,   244,   359,   359,     6,   357,
      74,  -203,   378,   402,    68,   394,    90,  -203,   420,   391,
    -203,   392,   390,  -203,   430,    16,  -203,  -203,  -203,    21,
      21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
      21,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,   244,   244,   244,   244,    21,   186,
     186,   186,   186,   186,   186,   116,   116,  -203,  -203,  -203,
    -203,     6,   248,   248,   248,   248,   248,   248,   162,   162,
    -203,  -203,  -203,  -203,     1,   543,   543,   543,   543,   543,
     543,   360,   360,  -203,  -203,  -203,    63,    63,  -203,  -203,
     145,  -203,   133,  -203,   434,   408,  -203,    29,    16,    18,
    -203,   395,  -203,   411,   158,  -203,   236,    16,  -203,   151,
     349,   355,   368,   374,   387,   490,   501,   426,   427,   428,
     429,   393,   406,   412,   425,   431,   444,   505,   516,   442,
     445,   456,   459,   450,   458,   464,   472,   478,   486,   520,
     524,   470,   473,   484,    10,    78,   485,   487,   282,   537,
     549,  -203,   434,    16,   453,  -203,  -203,   488,  -203,   229,
    -203,   489,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,    16,  -203,  -203,   499,  -203,
    -203,  -203
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     3,     0,    13,
      21,     0,     6,     0,     0,     1,     0,     0,    33,     0,
       0,     0,     0,     8,     0,     0,     2,     0,    11,     0,
       0,     0,     0,     0,     0,     0,    79,    90,    66,   140,
      53,   136,     0,     0,     5,    48,    49,    50,    51,    52,
       0,     0,    14,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,    33,     4,     0,     0,
       0,     0,   135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      18,    15,     0,     0,    26,     0,    23,    37,     0,    66,
      38,     0,    44,    47,     0,     0,    12,    32,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     109,   113,   111,   103,   105,    54,    56,    60,    58,    62,
      64,     0,    95,    97,   101,    99,    91,    93,    67,    69,
      73,    71,    75,    77,     0,   119,   121,   125,   123,   115,
     117,    80,    82,    86,    84,    88,   127,   129,   133,   131,
     137,   139,   138,     9,     0,    19,    31,     0,     0,     0,
      30,     0,    22,    40,     0,    39,     0,     0,    34,   107,
     109,   113,   111,   103,   105,    54,    56,    60,    58,    62,
      64,    95,    97,   101,    99,    91,    93,    67,    69,    73,
      71,    75,    77,   119,   121,   125,   123,   115,   117,    80,
      82,    86,    84,    88,   127,   129,   133,   131,     0,     0,
       0,    16,     0,     0,     0,    25,    27,     0,    20,     0,
      45,     0,    43,    35,   108,   110,   114,   112,   104,   106,
      55,    57,    61,    59,    63,    65,    96,    98,   102,   100,
      92,    94,    68,    70,    74,    72,    76,    78,   120,   122,
     126,   124,   116,   118,    81,    83,    87,    85,    89,   128,
     130,   134,   132,    17,    24,     0,    28,    41,     0,    46,
      29,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,   522,  -203,   -18,   -13,  -203,  -202,   216,   410,  -203,
    -203,    -7,  -203,    24,   250,   -20,   142,    -5,   -40,   -36,
      66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    23,     7,     8,    53,     9,    57,    58,
      10,    32,    33,   131,   132,   133,    45,    46,    47,    48,
      49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    35,    71,    75,    28,    37,    72,    76,    51,    36,
      11,    36,    37,   129,    67,    39,    40,    41,    12,    36,
      37,    38,   281,    39,    40,    41,    38,   287,    51,   114,
     115,    42,    34,    60,    52,    20,   204,    70,    74,    42,
     127,   191,   283,    43,   130,    61,   329,   122,   138,    13,
      21,    43,   136,    21,   286,    62,   178,    22,    14,   137,
      21,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,    71,    71,    71,    71,   216,   217,   218,   219,
     333,   228,   114,   115,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,    55,   114,   115,    21,
      56,   223,   225,   229,    15,    21,   230,    70,    70,    70,
      70,   224,     1,   222,   330,   238,     2,     3,    27,     3,
       4,    16,     4,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,    71,    71,    71,    71,   274,   275,
     276,   277,    85,    86,    87,    88,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,    96,    97,
      98,    36,    37,   129,   280,    39,    40,    41,    19,    70,
      70,    70,    70,   117,   118,    83,    84,    85,    86,    87,
      88,    42,   220,   221,    69,    73,   279,   294,    97,    98,
      99,   100,    24,    43,   290,    77,    78,    79,    80,    81,
      82,    25,    83,    84,    85,    86,    87,    88,   285,   284,
      83,    84,    85,    86,    87,    88,    50,   293,    54,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,    59,    36,    37,   129,    63,    39,    40,    41,    36,
      37,   129,    64,    39,    40,    41,   116,    36,    37,    38,
     117,   118,    42,    41,    69,    69,    69,    69,   291,    42,
     292,    29,    30,   334,    43,   337,    31,    42,    65,    66,
      68,    43,    95,    96,    97,    98,    99,   100,   119,    43,
     120,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,    89,    90,    91,    92,    93,    94,   121,
      95,    96,    97,    98,    99,   100,   145,   146,   147,   148,
     149,   150,   123,   124,   125,   340,    69,    69,    69,    69,
     278,   139,   140,   141,   142,   143,   144,   126,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      22,   157,   158,   159,   160,   161,   162,   101,   102,   103,
     104,   105,   106,   128,   107,   108,   109,   110,   134,   111,
     163,   164,   165,   166,   167,   168,    39,   169,   170,   171,
     172,   135,   173,    83,    84,    85,    86,    87,    88,    83,
      84,    85,    86,    87,    88,   295,   109,   110,    21,   111,
     226,   296,    83,    84,    85,    86,    87,    88,    83,    84,
      85,    86,    87,    88,   297,    17,     3,   227,    18,     4,
     298,    83,    84,    85,    86,    87,    88,    95,    96,    97,
      98,    99,   100,   299,   231,   233,   234,   236,   235,   306,
      95,    96,    97,    98,    99,   100,    95,    96,    97,    98,
      99,   100,   307,   237,    51,   282,   289,   288,   308,    95,
      96,    97,    98,    99,   100,    95,    96,    97,    98,    99,
     100,   309,   302,   303,   304,   305,   335,   310,    95,    96,
      97,    98,    99,   100,   107,   108,   109,   110,   314,   111,
     311,   315,   107,   108,   109,   110,   318,   111,   107,   108,
     109,   110,   316,   111,   319,   317,   107,   108,   109,   110,
     320,   111,   107,   108,   109,   110,   326,   111,   321,   327,
     107,   108,   109,   110,   322,   111,    85,    86,    87,    88,
     328,   331,   323,   332,   336,   339,   300,    85,    86,    87,
      88,    97,    98,    99,   100,   341,   232,   301,    26,   338,
       0,   312,    97,    98,    99,   100,   109,   110,     0,   111,
     109,   110,   313,   111,   112,   113,   324,     0,   114,   115,
     325,   157,   158,   159,   160,   161,   162,   107,   108,   109,
     110,     0,   111,   169,   170,   171,   172,     0,   173,   174,
     175,     0,     0,   176,   177
};

static const yytype_int16 yycheck[] =
{
      20,    19,    42,    43,    17,     4,    42,    43,    10,     3,
      10,     3,     4,     5,    34,     7,     8,     9,     5,     3,
       4,     5,   224,     7,     8,     9,     5,   229,    10,    19,
      20,    23,    13,    13,    36,    13,    35,    42,    43,    23,
      60,    35,    13,    35,    36,    25,    36,    54,    68,    35,
      31,    35,    65,    31,    36,    35,    35,    35,     5,    66,
      31,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   112,   113,   114,   115,
     282,    13,    19,    20,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     6,    19,    20,    31,
      10,   119,   120,    35,     0,    31,   124,   112,   113,   114,
     115,    37,     6,   118,    36,   135,    10,    11,    10,    11,
      14,    30,    14,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   174,   175,
     176,   177,    26,    27,    28,    29,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,    25,    26,
      27,     3,     4,     5,   204,     7,     8,     9,     5,   174,
     175,   176,   177,    28,    29,    24,    25,    26,    27,    28,
      29,    23,   116,   117,    42,    43,   191,    36,    26,    27,
      28,    29,    36,    35,    36,    17,    18,    19,    20,    21,
      22,    33,    24,    25,    26,    27,    28,    29,   228,   227,
      24,    25,    26,    27,    28,    29,     3,   237,    38,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     5,     3,     4,     5,    10,     7,     8,     9,     3,
       4,     5,     5,     7,     8,     9,    24,     3,     4,     5,
      28,    29,    23,     9,   112,   113,   114,   115,   234,    23,
     236,     5,     6,   283,    35,    36,    10,    23,    34,    30,
      13,    35,    24,    25,    26,    27,    28,    29,    32,    35,
       5,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    17,    18,    19,    20,    21,    22,    36,
      24,    25,    26,    27,    28,    29,    24,    25,    26,    27,
      28,    29,    10,     5,    34,   335,   174,   175,   176,   177,
     178,    17,    18,    19,    20,    21,    22,    30,    24,    25,
      26,    27,    28,    29,    17,    18,    19,    20,    21,    22,
      35,    24,    25,    26,    27,    28,    29,    17,    18,    19,
      20,    21,    22,    22,    24,    25,    26,    27,     5,    29,
      17,    18,    19,    20,    21,    22,     7,    24,    25,    26,
      27,    13,    29,    24,    25,    26,    27,    28,    29,    24,
      25,    26,    27,    28,    29,    36,    26,    27,    31,    29,
      12,    36,    24,    25,    26,    27,    28,    29,    24,    25,
      26,    27,    28,    29,    36,    30,    11,     5,    33,    14,
      36,    24,    25,    26,    27,    28,    29,    24,    25,    26,
      27,    28,    29,    36,    30,     5,    35,    37,    36,    36,
      24,    25,    26,    27,    28,    29,    24,    25,    26,    27,
      28,    29,    36,    13,    10,    37,    35,   231,    36,    24,
      25,    26,    27,    28,    29,    24,    25,    26,    27,    28,
      29,    36,    36,    36,    36,    36,    13,    36,    24,    25,
      26,    27,    28,    29,    24,    25,    26,    27,    36,    29,
      36,    36,    24,    25,    26,    27,    36,    29,    24,    25,
      26,    27,    36,    29,    36,    36,    24,    25,    26,    27,
      36,    29,    24,    25,    26,    27,    36,    29,    36,    36,
      24,    25,    26,    27,    36,    29,    26,    27,    28,    29,
      36,    36,    36,    36,    36,    36,    36,    26,    27,    28,
      29,    26,    27,    28,    29,    36,   126,    36,    16,   289,
      -1,    36,    26,    27,    28,    29,    26,    27,    -1,    29,
      26,    27,    36,    29,    15,    16,    36,    -1,    19,    20,
      36,    24,    25,    26,    27,    28,    29,    24,    25,    26,
      27,    -1,    29,    24,    25,    26,    27,    -1,    29,    15,
      16,    -1,    -1,    19,    20
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    10,    11,    14,    40,    41,    43,    44,    46,
      49,    10,     5,    35,     5,     0,    30,    30,    33,     5,
      13,    31,    35,    42,    36,    33,    40,    10,    43,     5,
       6,    10,    50,    51,    13,    42,     3,     4,     5,     7,
       8,     9,    23,    35,    54,    55,    56,    57,    58,    59,
       3,    10,    36,    45,    38,     6,    10,    47,    48,     5,
      13,    25,    35,    10,     5,    34,    30,    54,    13,    55,
      56,    57,    58,    55,    56,    57,    58,    17,    18,    19,
      20,    21,    22,    24,    25,    26,    27,    28,    29,    17,
      18,    19,    20,    21,    22,    24,    25,    26,    27,    28,
      29,    17,    18,    19,    20,    21,    22,    24,    25,    26,
      27,    29,    15,    16,    19,    20,    24,    28,    29,    32,
       5,    36,    50,    10,     5,    34,    30,    54,    22,     5,
      36,    52,    53,    54,     5,    13,    43,    50,    54,    17,
      18,    19,    20,    21,    22,    24,    25,    26,    27,    28,
      29,    17,    18,    19,    20,    21,    22,    24,    25,    26,
      27,    28,    29,    17,    18,    19,    20,    21,    22,    24,
      25,    26,    27,    29,    15,    16,    19,    20,    35,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    35,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    35,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    58,    58,    58,
      59,    59,    56,    42,    37,    42,    12,     5,    13,    35,
      42,    30,    47,     5,    35,    36,    37,    13,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    55,    56,
      57,    45,    37,    13,    42,    54,    36,    45,    46,    35,
      36,    52,    52,    54,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    45,    54,    13,    36,    36,    53,    36,
      54,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    41,    41,    41,    41,    41,    42,
      42,    43,    43,    43,    44,    44,    45,    45,    45,    45,
      46,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    49,    50,    50,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    53,    53,    53,    54,    54,
      54,    54,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      59
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     5,     4,     2,     6,     3,     4,
       3,     3,     5,     1,     4,     5,     4,     5,     2,     3,
       7,     1,     3,     2,     5,     4,     2,     4,     5,     6,
       3,     6,     3,     0,     4,     5,     2,     3,     3,     4,
       4,     6,     7,     3,     1,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     5,     1,     3,     5,     3,
       5,     3,     5,     3,     5,     3,     5,     3,     5,     1,
       3,     5,     3,     5,     3,     5,     3,     5,     3,     5,
       1,     3,     5,     3,     5,     3,     5,     3,     5,     3,
       5,     3,     5,     3,     5,     3,     5,     3,     5,     3,
       5,     3,     5,     3,     5,     3,     5,     3,     5,     3,
       5,     3,     5,     3,     5,     3,     5,     3,     5,     3,
       5,     3,     5,     3,     5,     2,     1,     3,     3,     3,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* global_declaration: CONST TIP ID ASSIGN exp  */
#line 53 "my_language.y"
                                             {
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, (yyvsp[-2].str_value)); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s %s", (yyvsp[-4].str_value), (yyvsp[-3].str_value));
                        insertVar(var_name, var_type, (yyvsp[0].address));
                   }
#line 1400 "./headers/my_language.tab.c"
    break;

  case 14: /* function_declaration: TIP ID '(' ')'  */
#line 77 "my_language.y"
                                       { strcpy(scope, (yyvsp[-2].str_value)); }
#line 1406 "./headers/my_language.tab.c"
    break;

  case 15: /* function_declaration: TIP ID '(' param_list ')'  */
#line 78 "my_language.y"
                                                 { strcpy(scope, (yyvsp[-3].str_value)); }
#line 1412 "./headers/my_language.tab.c"
    break;

  case 20: /* classes: CLASS ID '{' class_declarations '}' ';' classes  */
#line 87 "my_language.y"
                                                          { strcpy(scope, (yyvsp[-5].str_value)); }
#line 1418 "./headers/my_language.tab.c"
    break;

  case 31: /* program: BGIN '(' ')' ':' statements END  */
#line 104 "my_language.y"
                                          {printf("Program corect sintactic.\n");}
#line 1424 "./headers/my_language.tab.c"
    break;

  case 48: /* exp: avars_int  */
#line 131 "my_language.y"
                {
        printf("S-a recunoscut valoarea expresiei intregi pe variabile %d.\n", (yyvsp[0].int_value));
        inum = (yyvsp[0].int_value); 
        result = (void*)(malloc(sizeof(int))); 
        memcpy(result, &inum, sizeof(int)); 
        (yyval.address) = result;
    }
#line 1436 "./headers/my_language.tab.c"
    break;

  case 49: /* exp: aexp_int  */
#line 138 "my_language.y"
               {
        printf("S-a recunoscut valoarea numerica %d.\n", (yyvsp[0].int_value));
        inum = (yyvsp[0].int_value); 
        result = (void*)(malloc(sizeof(int))); 
        memcpy(result, &inum, sizeof(int)); 
        (yyval.address) = result;
    }
#line 1448 "./headers/my_language.tab.c"
    break;

  case 50: /* exp: aexp_float  */
#line 145 "my_language.y"
                 {
        printf("S-a recunoscut numarul real %f.\n", (yyvsp[0].float_value));
        fnum = (yyvsp[0].float_value); 
        result = (void*)(malloc(sizeof(float))); 
        memcpy(result, &fnum, sizeof(float)); 
        (yyval.address) = result;
    }
#line 1460 "./headers/my_language.tab.c"
    break;

  case 51: /* exp: bexp  */
#line 152 "my_language.y"
           {
        printf("S-a recunoscut valoarea booleana: %s.\n", (yyvsp[0].boolean_value) ? "true" : "false");
        boolean = (yyvsp[0].boolean_value); 
        result = (void*)(malloc(sizeof(bool))); 
        memcpy(result, &boolean, sizeof(bool)); 
        (yyval.address) = result;    
    }
#line 1472 "./headers/my_language.tab.c"
    break;

  case 52: /* exp: str  */
#line 159 "my_language.y"
          {
        printf("S-a recunoscut sirul %s.\n", (yyvsp[0].str_value));
        string = strdup((yyvsp[0].str_value)); 
        result = (void*)(malloc(strlen(string) + 1)); 
        memcpy(result, string, strlen(string));
        (yyval.address) = result;
    }
#line 1484 "./headers/my_language.tab.c"
    break;

  case 53: /* exp: CHAR  */
#line 166 "my_language.y"
           {
        printf("S-a recunoscut caracterul %c.\n", (yyvsp[0].char_value));
        character = (yyvsp[0].char_value); 
        result = (void*)(malloc(sizeof(char))); 
        memcpy(result, &character, sizeof(char));
        (yyval.address) = result;
    }
#line 1496 "./headers/my_language.tab.c"
    break;

  case 54: /* avars_int: avars_int '+' avars_int  */
#line 175 "my_language.y"
                                    {(yyval.int_value) = (yyvsp[-2].int_value) + (yyvsp[0].int_value);}
#line 1502 "./headers/my_language.tab.c"
    break;

  case 55: /* avars_int: '(' avars_int '+' avars_int ')'  */
#line 176 "my_language.y"
                                          {(yyval.int_value) = (yyvsp[-3].int_value) + (yyvsp[-1].int_value);}
#line 1508 "./headers/my_language.tab.c"
    break;

  case 56: /* avars_int: avars_int '-' avars_int  */
#line 177 "my_language.y"
                                  {(yyval.int_value) = (yyvsp[-2].int_value) - (yyvsp[0].int_value);}
#line 1514 "./headers/my_language.tab.c"
    break;

  case 57: /* avars_int: '(' avars_int '-' avars_int ')'  */
#line 178 "my_language.y"
                                          {(yyval.int_value) = (yyvsp[-3].int_value) - (yyvsp[-1].int_value);}
#line 1520 "./headers/my_language.tab.c"
    break;

  case 58: /* avars_int: avars_int '*' avars_int  */
#line 179 "my_language.y"
                                  {(yyval.int_value) = (yyvsp[-2].int_value) * (yyvsp[0].int_value);}
#line 1526 "./headers/my_language.tab.c"
    break;

  case 59: /* avars_int: '(' avars_int '*' avars_int ')'  */
#line 180 "my_language.y"
                                          {(yyval.int_value) = (yyvsp[-3].int_value) * (yyvsp[-1].int_value);}
#line 1532 "./headers/my_language.tab.c"
    break;

  case 60: /* avars_int: avars_int '/' avars_int  */
#line 181 "my_language.y"
                                  {
            if ((yyvsp[0].int_value) != 0)
                (yyval.int_value) = (yyvsp[-2].int_value) / (yyvsp[0].int_value);
            else {
                printf("Eroare, impartire la 0.\n");  
                exit(0);  
            }
        }
#line 1545 "./headers/my_language.tab.c"
    break;

  case 61: /* avars_int: '(' avars_int '/' avars_int ')'  */
#line 189 "my_language.y"
                                          {
            if ((yyvsp[-1].int_value) != 0)
                (yyval.int_value) = (yyvsp[-3].int_value) / (yyvsp[-1].int_value);
            else {
                printf("Eroare, impartire la 0.\n");  
                exit(0);  
            }
        }
#line 1558 "./headers/my_language.tab.c"
    break;

  case 62: /* avars_int: avars_int '%' avars_int  */
#line 197 "my_language.y"
                                  {
            if ((yyvsp[0].int_value) != 0)
                (yyval.int_value) = (yyvsp[-2].int_value) % (yyvsp[0].int_value);
            else {
                printf("Eroare, impartire la 0.\n");  
                exit(0);  
            }
        }
#line 1571 "./headers/my_language.tab.c"
    break;

  case 63: /* avars_int: '(' avars_int '%' avars_int ')'  */
#line 205 "my_language.y"
                                          {
            if ((yyvsp[-1].int_value) != 0)
                (yyval.int_value) = (yyvsp[-3].int_value) % (yyvsp[-1].int_value);
            else {
                printf("Eroare, impartire la 0.\n");  
                exit(0);  
            }
        }
#line 1584 "./headers/my_language.tab.c"
    break;

  case 64: /* avars_int: avars_int '^' avars_int  */
#line 213 "my_language.y"
                                  {(yyval.int_value) = pow((yyvsp[-2].int_value), (yyvsp[0].int_value));}
#line 1590 "./headers/my_language.tab.c"
    break;

  case 65: /* avars_int: '(' avars_int '^' avars_int ')'  */
#line 214 "my_language.y"
                                         {(yyval.int_value) = pow((yyvsp[-3].int_value), (yyvsp[-1].int_value));}
#line 1596 "./headers/my_language.tab.c"
    break;

  case 66: /* avars_int: ID  */
#line 215 "my_language.y"
             {
            if (strcmp(TypeOf((yyvsp[0].str_value)), "int") == 0) {
                (yyval.int_value) = *((int*)Eval((yyvsp[0].str_value)));
            }
            else {
                sprintf(msg, "%s %s %s", "Variabila", (yyvsp[0].str_value), "nu este de tip int sau nu este declarata");
                yyerror(msg); 
            }
        }
#line 1610 "./headers/my_language.tab.c"
    break;

  case 67: /* aexp_int: aexp_int '+' aexp_int  */
#line 226 "my_language.y"
                                 {(yyval.int_value) = (yyvsp[-2].int_value) + (yyvsp[0].int_value);}
#line 1616 "./headers/my_language.tab.c"
    break;

  case 68: /* aexp_int: '(' aexp_int '+' aexp_int ')'  */
#line 227 "my_language.y"
                                         {(yyval.int_value) = (yyvsp[-3].int_value) + (yyvsp[-1].int_value);}
#line 1622 "./headers/my_language.tab.c"
    break;

  case 69: /* aexp_int: aexp_int '-' aexp_int  */
#line 228 "my_language.y"
                                 {(yyval.int_value) = (yyvsp[-2].int_value) - (yyvsp[0].int_value);}
#line 1628 "./headers/my_language.tab.c"
    break;

  case 70: /* aexp_int: '(' aexp_int '-' aexp_int ')'  */
#line 229 "my_language.y"
                                         {(yyval.int_value) = (yyvsp[-3].int_value) - (yyvsp[-1].int_value);}
#line 1634 "./headers/my_language.tab.c"
    break;

  case 71: /* aexp_int: aexp_int '*' aexp_int  */
#line 230 "my_language.y"
                                 {(yyval.int_value) = (yyvsp[-2].int_value) * (yyvsp[0].int_value);}
#line 1640 "./headers/my_language.tab.c"
    break;

  case 72: /* aexp_int: '(' aexp_int '*' aexp_int ')'  */
#line 231 "my_language.y"
                                        {(yyval.int_value) = (yyvsp[-3].int_value) * (yyvsp[-1].int_value);}
#line 1646 "./headers/my_language.tab.c"
    break;

  case 73: /* aexp_int: aexp_int '/' aexp_int  */
#line 232 "my_language.y"
                                 {
                if ((yyvsp[0].int_value) != 0)
                    (yyval.int_value) = (yyvsp[-2].int_value) / (yyvsp[0].int_value);
                else {
                    printf("Eroare, impartire la 0.\n");  
                    exit(0);  
                }
            }
#line 1659 "./headers/my_language.tab.c"
    break;

  case 74: /* aexp_int: '(' aexp_int '/' aexp_int ')'  */
#line 240 "my_language.y"
                                        {(yyval.int_value) = (yyvsp[-3].int_value) / (yyvsp[-1].int_value);}
#line 1665 "./headers/my_language.tab.c"
    break;

  case 75: /* aexp_int: aexp_int '%' aexp_int  */
#line 241 "my_language.y"
                                 {(yyval.int_value) = (yyvsp[-2].int_value) % (yyvsp[0].int_value);}
#line 1671 "./headers/my_language.tab.c"
    break;

  case 76: /* aexp_int: '(' aexp_int '%' aexp_int ')'  */
#line 242 "my_language.y"
                                         {(yyval.int_value) = (yyvsp[-3].int_value) % (yyvsp[-1].int_value);}
#line 1677 "./headers/my_language.tab.c"
    break;

  case 77: /* aexp_int: aexp_int '^' aexp_int  */
#line 243 "my_language.y"
                                 {(yyval.int_value) = pow((yyvsp[-2].int_value), (yyvsp[0].int_value));}
#line 1683 "./headers/my_language.tab.c"
    break;

  case 78: /* aexp_int: '(' aexp_int '^' aexp_int ')'  */
#line 244 "my_language.y"
                                        {(yyval.int_value) = pow((yyvsp[-3].int_value), (yyvsp[-1].int_value));}
#line 1689 "./headers/my_language.tab.c"
    break;

  case 79: /* aexp_int: INTEGER  */
#line 245 "my_language.y"
                   {(yyval.int_value) = (yyvsp[0].int_value);}
#line 1695 "./headers/my_language.tab.c"
    break;

  case 80: /* aexp_float: aexp_float '+' aexp_float  */
#line 248 "my_language.y"
                                       {(yyval.float_value) = (yyvsp[-2].float_value) + (yyvsp[0].float_value);}
#line 1701 "./headers/my_language.tab.c"
    break;

  case 81: /* aexp_float: '(' aexp_float '+' aexp_float ')'  */
#line 249 "my_language.y"
                                               {(yyval.float_value) = (yyvsp[-3].float_value) + (yyvsp[-1].float_value);}
#line 1707 "./headers/my_language.tab.c"
    break;

  case 82: /* aexp_float: aexp_float '-' aexp_float  */
#line 250 "my_language.y"
                                       {(yyval.float_value) = (yyvsp[-2].float_value) - (yyvsp[0].float_value);}
#line 1713 "./headers/my_language.tab.c"
    break;

  case 83: /* aexp_float: '(' aexp_float '-' aexp_float ')'  */
#line 251 "my_language.y"
                                               {(yyval.float_value) = (yyvsp[-3].float_value) - (yyvsp[-1].float_value);}
#line 1719 "./headers/my_language.tab.c"
    break;

  case 84: /* aexp_float: aexp_float '*' aexp_float  */
#line 252 "my_language.y"
                                       {(yyval.float_value) = (yyvsp[-2].float_value) * (yyvsp[0].float_value);}
#line 1725 "./headers/my_language.tab.c"
    break;

  case 85: /* aexp_float: '(' aexp_float '*' aexp_float ')'  */
#line 253 "my_language.y"
                                              {(yyval.float_value) = (yyvsp[-3].float_value) * (yyvsp[-1].float_value);}
#line 1731 "./headers/my_language.tab.c"
    break;

  case 86: /* aexp_float: aexp_float '/' aexp_float  */
#line 254 "my_language.y"
                                       {
                if ((yyvsp[0].float_value) != 0)
                    (yyval.float_value) = (yyvsp[-2].float_value) / (yyvsp[0].float_value);
                else {
                    printf("Eroare, impartire la 0.\n");  
                    exit(0);  
                }
            }
#line 1744 "./headers/my_language.tab.c"
    break;

  case 87: /* aexp_float: '(' aexp_float '/' aexp_float ')'  */
#line 262 "my_language.y"
                                              {(yyval.float_value) = (yyvsp[-3].float_value) / (yyvsp[-1].float_value);}
#line 1750 "./headers/my_language.tab.c"
    break;

  case 88: /* aexp_float: aexp_float '^' aexp_float  */
#line 263 "my_language.y"
                                       {(yyval.float_value) = pow((yyvsp[-2].float_value), (yyvsp[0].float_value));}
#line 1756 "./headers/my_language.tab.c"
    break;

  case 89: /* aexp_float: '(' aexp_float '^' aexp_float ')'  */
#line 264 "my_language.y"
                                              {(yyval.float_value) = pow((yyvsp[-3].float_value), (yyvsp[-1].float_value));}
#line 1762 "./headers/my_language.tab.c"
    break;

  case 90: /* aexp_float: FLOAT  */
#line 265 "my_language.y"
                   {(yyval.float_value) = (yyvsp[0].float_value);}
#line 1768 "./headers/my_language.tab.c"
    break;

  case 91: /* bexp: aexp_int '<' aexp_int  */
#line 268 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-2].int_value) < (yyvsp[0].int_value));}
#line 1774 "./headers/my_language.tab.c"
    break;

  case 92: /* bexp: '(' aexp_int '<' aexp_int ')'  */
#line 269 "my_language.y"
                                   {(yyval.boolean_value) = ((yyvsp[-3].int_value) < (yyvsp[-1].int_value));}
#line 1780 "./headers/my_language.tab.c"
    break;

  case 93: /* bexp: aexp_int '>' aexp_int  */
#line 270 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-2].int_value) > (yyvsp[0].int_value));}
#line 1786 "./headers/my_language.tab.c"
    break;

  case 94: /* bexp: '(' aexp_int '>' aexp_int ')'  */
#line 271 "my_language.y"
                                   {(yyval.boolean_value) = ((yyvsp[-3].int_value) > (yyvsp[-1].int_value));}
#line 1792 "./headers/my_language.tab.c"
    break;

  case 95: /* bexp: aexp_int LTE aexp_int  */
#line 272 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-2].int_value) <= (yyvsp[0].int_value));}
#line 1798 "./headers/my_language.tab.c"
    break;

  case 96: /* bexp: '(' aexp_int LTE aexp_int ')'  */
#line 273 "my_language.y"
                                     {(yyval.boolean_value) = ((yyvsp[-3].int_value) <= (yyvsp[-1].int_value));}
#line 1804 "./headers/my_language.tab.c"
    break;

  case 97: /* bexp: aexp_int GTE aexp_int  */
#line 274 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-2].int_value) >= (yyvsp[0].int_value));}
#line 1810 "./headers/my_language.tab.c"
    break;

  case 98: /* bexp: '(' aexp_int GTE aexp_int ')'  */
#line 275 "my_language.y"
                                     {(yyval.boolean_value) = ((yyvsp[-3].int_value) >= (yyvsp[-1].int_value));}
#line 1816 "./headers/my_language.tab.c"
    break;

  case 99: /* bexp: aexp_int EQ aexp_int  */
#line 276 "my_language.y"
                            {(yyval.boolean_value) = ((yyvsp[-2].int_value) == (yyvsp[0].int_value));}
#line 1822 "./headers/my_language.tab.c"
    break;

  case 100: /* bexp: '(' aexp_int EQ aexp_int ')'  */
#line 277 "my_language.y"
                                    {(yyval.boolean_value) = ((yyvsp[-3].int_value) == (yyvsp[-1].int_value));}
#line 1828 "./headers/my_language.tab.c"
    break;

  case 101: /* bexp: aexp_int NEQ aexp_int  */
#line 278 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-2].int_value) != (yyvsp[0].int_value));}
#line 1834 "./headers/my_language.tab.c"
    break;

  case 102: /* bexp: '(' aexp_int NEQ aexp_int ')'  */
#line 279 "my_language.y"
                                     {(yyval.boolean_value) = ((yyvsp[-3].int_value) != (yyvsp[-1].int_value));}
#line 1840 "./headers/my_language.tab.c"
    break;

  case 103: /* bexp: avars_int '<' avars_int  */
#line 280 "my_language.y"
                               {(yyval.boolean_value) = ((yyvsp[-2].int_value) < (yyvsp[0].int_value));}
#line 1846 "./headers/my_language.tab.c"
    break;

  case 104: /* bexp: '(' avars_int '<' avars_int ')'  */
#line 281 "my_language.y"
                                     {(yyval.boolean_value) = ((yyvsp[-3].int_value) < (yyvsp[-1].int_value));}
#line 1852 "./headers/my_language.tab.c"
    break;

  case 105: /* bexp: avars_int '>' avars_int  */
#line 282 "my_language.y"
                               {(yyval.boolean_value) = ((yyvsp[-2].int_value) > (yyvsp[0].int_value));}
#line 1858 "./headers/my_language.tab.c"
    break;

  case 106: /* bexp: '(' avars_int '>' avars_int ')'  */
#line 283 "my_language.y"
                                     {(yyval.boolean_value) = ((yyvsp[-3].int_value) > (yyvsp[-1].int_value));}
#line 1864 "./headers/my_language.tab.c"
    break;

  case 107: /* bexp: avars_int LTE avars_int  */
#line 284 "my_language.y"
                               {(yyval.boolean_value) = ((yyvsp[-2].int_value) <= (yyvsp[0].int_value));}
#line 1870 "./headers/my_language.tab.c"
    break;

  case 108: /* bexp: '(' avars_int LTE avars_int ')'  */
#line 285 "my_language.y"
                                       {(yyval.boolean_value) = ((yyvsp[-3].int_value) <= (yyvsp[-1].int_value));}
#line 1876 "./headers/my_language.tab.c"
    break;

  case 109: /* bexp: avars_int GTE avars_int  */
#line 286 "my_language.y"
                               {(yyval.boolean_value) = ((yyvsp[-2].int_value) >= (yyvsp[0].int_value));}
#line 1882 "./headers/my_language.tab.c"
    break;

  case 110: /* bexp: '(' avars_int GTE avars_int ')'  */
#line 287 "my_language.y"
                                       {(yyval.boolean_value) = ((yyvsp[-3].int_value) >= (yyvsp[-1].int_value));}
#line 1888 "./headers/my_language.tab.c"
    break;

  case 111: /* bexp: avars_int EQ avars_int  */
#line 288 "my_language.y"
                              {(yyval.boolean_value) = ((yyvsp[-2].int_value) == (yyvsp[0].int_value));}
#line 1894 "./headers/my_language.tab.c"
    break;

  case 112: /* bexp: '(' avars_int EQ avars_int ')'  */
#line 289 "my_language.y"
                                      {(yyval.boolean_value) = ((yyvsp[-3].int_value) == (yyvsp[-1].int_value));}
#line 1900 "./headers/my_language.tab.c"
    break;

  case 113: /* bexp: avars_int NEQ avars_int  */
#line 290 "my_language.y"
                               {(yyval.boolean_value) = ((yyvsp[-2].int_value) != (yyvsp[0].int_value));}
#line 1906 "./headers/my_language.tab.c"
    break;

  case 114: /* bexp: '(' avars_int NEQ avars_int ')'  */
#line 291 "my_language.y"
                                       {(yyval.boolean_value) = ((yyvsp[-3].int_value) != (yyvsp[-1].int_value));}
#line 1912 "./headers/my_language.tab.c"
    break;

  case 115: /* bexp: aexp_float '<' aexp_float  */
#line 292 "my_language.y"
                                 {(yyval.boolean_value) = ((yyvsp[-2].float_value) < (yyvsp[0].float_value));}
#line 1918 "./headers/my_language.tab.c"
    break;

  case 116: /* bexp: '(' aexp_float '<' aexp_float ')'  */
#line 293 "my_language.y"
                                       {(yyval.boolean_value) = ((yyvsp[-3].float_value) < (yyvsp[-1].float_value));}
#line 1924 "./headers/my_language.tab.c"
    break;

  case 117: /* bexp: aexp_float '>' aexp_float  */
#line 294 "my_language.y"
                                 {(yyval.boolean_value) = ((yyvsp[-2].float_value) > (yyvsp[0].float_value));}
#line 1930 "./headers/my_language.tab.c"
    break;

  case 118: /* bexp: '(' aexp_float '>' aexp_float ')'  */
#line 295 "my_language.y"
                                       {(yyval.boolean_value) = ((yyvsp[-3].float_value) > (yyvsp[-1].float_value));}
#line 1936 "./headers/my_language.tab.c"
    break;

  case 119: /* bexp: aexp_float LTE aexp_float  */
#line 296 "my_language.y"
                                 {(yyval.boolean_value) = ((yyvsp[-2].float_value) <= (yyvsp[0].float_value));}
#line 1942 "./headers/my_language.tab.c"
    break;

  case 120: /* bexp: '(' aexp_float LTE aexp_float ')'  */
#line 297 "my_language.y"
                                         {(yyval.boolean_value) = ((yyvsp[-3].float_value) <= (yyvsp[-1].float_value));}
#line 1948 "./headers/my_language.tab.c"
    break;

  case 121: /* bexp: aexp_float GTE aexp_float  */
#line 298 "my_language.y"
                                 {(yyval.boolean_value) = ((yyvsp[-2].float_value) >= (yyvsp[0].float_value));}
#line 1954 "./headers/my_language.tab.c"
    break;

  case 122: /* bexp: '(' aexp_float GTE aexp_float ')'  */
#line 299 "my_language.y"
                                         {(yyval.boolean_value) = ((yyvsp[-3].float_value) >= (yyvsp[-1].float_value));}
#line 1960 "./headers/my_language.tab.c"
    break;

  case 123: /* bexp: aexp_float EQ aexp_float  */
#line 300 "my_language.y"
                                {(yyval.boolean_value) = ((yyvsp[-2].float_value) == (yyvsp[0].float_value));}
#line 1966 "./headers/my_language.tab.c"
    break;

  case 124: /* bexp: '(' aexp_float EQ aexp_float ')'  */
#line 301 "my_language.y"
                                        {(yyval.boolean_value) = ((yyvsp[-3].float_value) == (yyvsp[-1].float_value));}
#line 1972 "./headers/my_language.tab.c"
    break;

  case 125: /* bexp: aexp_float NEQ aexp_float  */
#line 302 "my_language.y"
                                 {(yyval.boolean_value) = ((yyvsp[-2].float_value) != (yyvsp[0].float_value));}
#line 1978 "./headers/my_language.tab.c"
    break;

  case 126: /* bexp: '(' aexp_float NEQ aexp_float ')'  */
#line 303 "my_language.y"
                                         {(yyval.boolean_value) = ((yyvsp[-3].float_value) != (yyvsp[-1].float_value));}
#line 1984 "./headers/my_language.tab.c"
    break;

  case 127: /* bexp: bexp AND bexp  */
#line 304 "my_language.y"
                     {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) && (yyvsp[0].boolean_value));}
#line 1990 "./headers/my_language.tab.c"
    break;

  case 128: /* bexp: '(' bexp AND bexp ')'  */
#line 305 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) && (yyvsp[-1].boolean_value));}
#line 1996 "./headers/my_language.tab.c"
    break;

  case 129: /* bexp: bexp OR bexp  */
#line 306 "my_language.y"
                    {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) || (yyvsp[0].boolean_value));}
#line 2002 "./headers/my_language.tab.c"
    break;

  case 130: /* bexp: '(' bexp OR bexp ')'  */
#line 307 "my_language.y"
                            {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) || (yyvsp[-1].boolean_value));}
#line 2008 "./headers/my_language.tab.c"
    break;

  case 131: /* bexp: bexp EQ bexp  */
#line 308 "my_language.y"
                    {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) == (yyvsp[0].boolean_value));}
#line 2014 "./headers/my_language.tab.c"
    break;

  case 132: /* bexp: '(' bexp EQ bexp ')'  */
#line 309 "my_language.y"
                            {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) == (yyvsp[-1].boolean_value));}
#line 2020 "./headers/my_language.tab.c"
    break;

  case 133: /* bexp: bexp NEQ bexp  */
#line 310 "my_language.y"
                     {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) != (yyvsp[0].boolean_value));}
#line 2026 "./headers/my_language.tab.c"
    break;

  case 134: /* bexp: '(' bexp NEQ bexp ')'  */
#line 311 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) != (yyvsp[-1].boolean_value));}
#line 2032 "./headers/my_language.tab.c"
    break;

  case 135: /* bexp: '!' bexp  */
#line 312 "my_language.y"
                {(yyval.boolean_value) = (!(yyvsp[0].boolean_value));}
#line 2038 "./headers/my_language.tab.c"
    break;

  case 136: /* bexp: BOOLEAN  */
#line 313 "my_language.y"
               {(yyval.boolean_value) = (yyvsp[0].boolean_value);}
#line 2044 "./headers/my_language.tab.c"
    break;

  case 137: /* str: str '+' str  */
#line 316 "my_language.y"
                  {
        char *s = strdup((yyvsp[-2].str_value)); 
        strcat(s, (yyvsp[0].str_value)); 
        (yyval.str_value) = s;        
    }
#line 2054 "./headers/my_language.tab.c"
    break;

  case 138: /* str: str '^' aexp_int  */
#line 321 "my_language.y"
                       {
        if((yyvsp[0].int_value) == 0) {
            (yyval.str_value) = '\0';
        }
        else {   
            char *s = strdup((yyvsp[-2].str_value));
			for(int i = 1; i < (yyvsp[0].int_value); ++i)
			    s = strcat(s, (yyvsp[-2].str_value));
            (yyval.str_value) = s;
        }   
    }
#line 2070 "./headers/my_language.tab.c"
    break;

  case 139: /* str: str '%' str  */
#line 332 "my_language.y"
                  {
        char* aux = strdup("");
        char* aux2 = strdup((yyvsp[-2].str_value));
        char* aux3 = strdup((yyvsp[0].str_value));
        int i = 0;
        while(aux2[i] != '\0' && aux3[i] != '\0') {
            strncat(aux, aux2 + i, 1);
            strncat(aux, aux3 + i, 1);
            ++i;
        }
        strcat(aux, "\0");
        (yyval.str_value) = aux;
    }
#line 2088 "./headers/my_language.tab.c"
    break;

  case 140: /* str: STRING  */
#line 345 "my_language.y"
              {(yyval.str_value) = strdup((yyvsp[0].str_value));}
#line 2094 "./headers/my_language.tab.c"
    break;


#line 2098 "./headers/my_language.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 347 "my_language.y"


int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* fptr_vars = fopen(argv[2], "w");

    yyparse();

    print_symbol_table(fptr_vars);

    fclose(fptr_vars);
} 
