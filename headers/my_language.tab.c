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
char msg[ARR_SIZE], var_type[ARR_SIZE], var_name[ARR_SIZE], scope[ARR_SIZE], arr_type[ARR_SIZE], init_list[ARR_SIZE], element[ARR_SIZE];
int inum, opi1, opi2;
float fnum, opf1, opf2; 
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
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_FOR_LOOP = 17,                  /* FOR_LOOP  */
  YYSYMBOL_WHILE_LOOP = 18,                /* WHILE_LOOP  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_LTE = 21,                       /* LTE  */
  YYSYMBOL_GTE = 22,                       /* GTE  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_25_ = 25,                       /* '<'  */
  YYSYMBOL_26_ = 26,                       /* '>'  */
  YYSYMBOL_27_ = 27,                       /* '!'  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '*'  */
  YYSYMBOL_32_ = 32,                       /* '%'  */
  YYSYMBOL_33_ = 33,                       /* '^'  */
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_37_ = 37,                       /* '['  */
  YYSYMBOL_38_ = 38,                       /* ']'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_global_variables = 44,          /* global_variables  */
  YYSYMBOL_global_declaration = 45,        /* global_declaration  */
  YYSYMBOL_brackets = 46,                  /* brackets  */
  YYSYMBOL_initialization_list = 47,       /* initialization_list  */
  YYSYMBOL_initialization_list_int = 48,   /* initialization_list_int  */
  YYSYMBOL_initialization_list_float = 49, /* initialization_list_float  */
  YYSYMBOL_initialization_list_bool = 50,  /* initialization_list_bool  */
  YYSYMBOL_initialization_list_char = 51,  /* initialization_list_char  */
  YYSYMBOL_initialization_list_string = 52, /* initialization_list_string  */
  YYSYMBOL_functions = 53,                 /* functions  */
  YYSYMBOL_function_declaration = 54,      /* function_declaration  */
  YYSYMBOL_param_list = 55,                /* param_list  */
  YYSYMBOL_classes = 56,                   /* classes  */
  YYSYMBOL_class_declarations = 57,        /* class_declarations  */
  YYSYMBOL_class_declaration = 58,         /* class_declaration  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_statements = 60,                /* statements  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_init = 62,                      /* init  */
  YYSYMBOL_cond = 63,                      /* cond  */
  YYSYMBOL_increment = 64,                 /* increment  */
  YYSYMBOL_params = 65,                    /* params  */
  YYSYMBOL_param = 66,                     /* param  */
  YYSYMBOL_exp = 67,                       /* exp  */
  YYSYMBOL_aexp = 68,                      /* aexp  */
  YYSYMBOL_bexp = 69,                      /* bexp  */
  YYSYMBOL_str = 70                        /* str  */
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
#define YYLAST   403

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  282

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


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
       2,     2,     2,    27,     2,     2,     2,    32,     2,     2,
      40,    41,    31,    28,    39,    29,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    34,
      25,     2,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,    33,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    55,    57,    67,    77,    87,    99,   104,
     111,   112,   113,   114,   115,   118,   124,   133,   139,   148,
     154,   163,   169,   178,   184,   193,   194,   195,   198,   199,
     202,   203,   204,   205,   208,   209,   212,   213,   216,   217,
     218,   219,   220,   221,   222,   225,   228,   229,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   245,
     246,   248,   249,   252,   253,   256,   257,   260,   261,   262,
     265,   280,   287,   294,   303,   325,   347,   369,   391,   414,
     436,   469,   502,   525,   548,   570,   592,   599,   606,   626,
     643,   660,   677,   694,   711,   728,   745,   762,   779,   796,
     813,   830,   831,   832,   833,   834,   835,   836,   837,   838,
     839,   842,   847,   862,   875
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
  "ASSIGN", "CLASS", "IF", "ELSE", "FOR_LOOP", "WHILE_LOOP", "AND", "OR",
  "LTE", "GTE", "NEQ", "EQ", "'<'", "'>'", "'!'", "'+'", "'-'", "'/'",
  "'*'", "'%'", "'^'", "';'", "'{'", "'}'", "'['", "']'", "','", "'('",
  "')'", "':'", "$accept", "global_variables", "global_declaration",
  "brackets", "initialization_list", "initialization_list_int",
  "initialization_list_float", "initialization_list_bool",
  "initialization_list_char", "initialization_list_string", "functions",
  "function_declaration", "param_list", "classes", "class_declarations",
  "class_declaration", "program", "statements", "statement", "init",
  "cond", "increment", "params", "param", "exp", "aexp", "bexp", "str", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     217,    22,     5,    -1,    72,    90,    79,  -141,    92,  -141,
    -141,   113,     9,    97,    87,  -141,   217,   215,    18,     1,
     132,   139,    -4,   138,   112,    81,  -141,   158,  -141,   118,
     157,   175,   167,   169,   198,   216,    18,   132,   242,  -141,
    -141,  -141,  -141,  -141,  -141,   170,   170,  -141,   259,   234,
      -3,   239,   267,  -141,   237,   251,    18,   289,   326,   296,
     299,   294,   132,   309,     4,   331,   324,   170,   328,   170,
     215,  -141,  -141,   304,   259,  -141,   272,   306,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   170,   170,   170,   333,   333,     0,   305,   161,  -141,
     303,   329,   338,    38,   310,    81,   311,   341,   307,   314,
     308,   312,  -141,   337,   132,   163,   347,   319,   165,  -141,
     303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,   170,   170,   170,     0,   285,   285,
     285,   285,   285,   285,   210,   210,  -141,  -141,  -141,  -141,
     147,   147,  -141,  -141,   276,  -141,   245,  -141,   344,   316,
     317,   318,   320,   321,   322,   327,  -141,  -141,  -141,  -141,
    -141,  -141,    75,   132,     6,  -141,    65,  -141,  -141,   168,
     116,  -141,   330,   141,   132,   332,   323,   349,   170,   334,
     335,   183,   189,   204,   218,   232,   238,    52,   160,   336,
     339,   340,   342,   137,   153,   343,   345,   291,  -141,   344,
     362,   363,   362,   360,   361,  -141,   132,   359,  -141,  -141,
     346,  -141,  -141,   125,  -141,   348,  -141,  -141,   351,  -141,
      18,  -141,   354,   234,    18,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   132,
    -141,   356,   350,  -141,  -141,   357,   368,   358,  -141,  -141,
     364,  -141,   365,   355,  -141,  -141,   132,   366,  -141,    18,
     367,  -141
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     3,     0,    27,
      35,     0,     0,     0,     0,     1,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     2,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,    86,
      87,    88,   114,    73,   110,     0,     0,     5,    70,    71,
      72,     0,     0,    28,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,    46,     4,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    32,    29,
       0,     0,     0,    40,     0,    37,     0,     0,    88,     0,
       0,    66,    69,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    95,
      99,    97,    89,    91,    74,    76,    80,    78,    82,    84,
     101,   103,   107,   105,   111,   113,   112,     8,     0,    33,
      16,    18,    24,    22,    20,     0,    10,    11,    12,    13,
      14,    45,     0,     0,     0,    44,     0,    36,    50,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    62,     0,
       0,    93,    95,    99,    97,    89,    91,    74,    76,    80,
      78,    82,    84,   101,   103,   107,   105,     0,    30,     0,
       0,     0,     0,     0,     0,     7,     0,     0,    39,    41,
       0,    34,    53,     0,    67,     0,    52,    65,     0,    48,
      47,    59,     0,    61,    47,     6,    94,    96,   100,    98,
      90,    92,    75,    77,    81,    79,    83,    85,   102,   104,
     108,   106,    31,    15,    17,    23,    21,    19,    38,     0,
      42,     0,     0,    68,    49,     0,    64,     0,    43,    54,
       0,    56,     0,     0,    57,    55,     0,     0,    63,    47,
       0,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,   376,  -141,   -17,   254,    -7,   164,   162,   166,  -141,
      -2,  -141,  -140,   206,   290,  -141,  -141,   -35,  -141,  -141,
    -141,  -141,   -91,   174,   -20,   -26,   -19,   233
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    23,   165,   166,   167,   168,   169,   170,
       7,     8,    54,     9,    59,    60,    10,    35,    36,   117,
     232,   273,   110,   111,   112,    48,    49,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    71,    38,    39,    40,    41,    52,    39,    40,   108,
      12,    42,    43,    44,    37,    28,    52,    72,   208,    74,
      76,   101,    20,    29,    30,    94,    75,    77,    31,    95,
      96,    45,    11,    32,   220,    33,    34,    53,    21,    13,
     137,    74,   106,    74,    46,   109,    21,   219,   115,    22,
     118,   173,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    74,    74,    74,    74,   119,   252,
     156,   150,   151,   152,   153,    21,     3,    14,   174,     4,
     157,   159,    86,    87,    88,    89,   175,    57,   216,   225,
      15,    58,   227,   242,   185,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,    74,    74,    74,
      74,   207,    21,    16,   203,   204,   205,   206,    19,    39,
      40,   108,    25,    42,    43,    44,    17,    18,    39,    40,
     108,    62,    42,    43,    44,    39,    40,    41,    24,    42,
      43,    44,    51,    45,    39,    40,   108,    63,    42,    43,
      44,    55,    45,   218,    56,   217,    46,   224,    64,    45,
      92,    93,    74,    61,   228,    46,   261,    65,    45,   233,
      92,    93,    46,    39,    40,    41,    92,    93,   248,    44,
      66,    46,    90,    91,    90,    91,    92,    93,    92,    93,
      86,    87,    88,    89,   249,   265,   258,    45,    21,   267,
     158,   243,   222,   253,   186,   255,   189,    67,   223,    68,
      46,    84,    85,    86,    87,    88,    89,    84,    85,    86,
      87,    88,    89,     1,   236,    27,     3,     2,     3,     4,
     237,     4,    84,    85,    86,    87,    88,    89,    69,   268,
      86,    87,    88,    89,   280,   238,    84,    85,    86,    87,
      88,    89,    70,    90,    91,    73,   278,    92,    93,   239,
      84,    85,    86,    87,    88,    89,    84,    85,    86,    87,
      88,    89,    98,   240,    85,    86,    87,    97,    99,   241,
      78,    79,    80,    81,    82,    83,   100,    84,    85,    86,
      87,    88,    89,   121,   122,   123,   124,   125,   126,   102,
     127,   128,   129,   130,   131,   132,   160,   161,    95,    96,
     162,   163,   164,    84,    85,    86,    87,    88,    89,   127,
     128,   129,   130,   131,   132,   133,   134,   154,   155,   135,
     136,   103,   104,   105,    22,   107,   113,   114,   116,   120,
      42,   171,    21,   172,   176,   178,   179,   180,   181,   182,
     184,   183,   187,   188,    52,   209,   210,   211,   230,   212,
     213,   214,   231,   215,   226,   160,   229,   161,   163,   234,
     164,   235,   259,   272,   190,   254,   257,   244,   276,   256,
     245,   246,   221,   247,   250,   264,   251,   260,   266,   263,
     269,   270,    26,   271,   274,   177,   277,   262,   275,     0,
       0,   279,     0,   281
};

static const yytype_int16 yycheck[] =
{
      20,    36,    19,     3,     4,     5,    10,     3,     4,     5,
       5,     7,     8,     9,    13,    17,    10,    37,   158,    45,
      46,    56,    13,     5,     6,    28,    45,    46,    10,    32,
      33,    27,    10,    15,   174,    17,    18,    41,    37,    40,
      40,    67,    62,    69,    40,    41,    37,    41,    67,    40,
      69,    13,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    70,   209,
      96,    90,    91,    92,    93,    37,    11,     5,    40,    14,
      97,    98,    30,    31,    32,    33,   103,     6,    13,   180,
       0,    10,   183,    41,   114,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    37,    34,   133,   134,   135,   136,     5,     3,
       4,     5,    35,     7,     8,     9,    34,    35,     3,     4,
       5,    13,     7,     8,     9,     3,     4,     5,    41,     7,
       8,     9,     3,    27,     3,     4,     5,    29,     7,     8,
       9,    13,    27,   173,    42,   172,    40,    41,    40,    27,
      23,    24,   188,     5,   184,    40,    41,    10,    27,   188,
      23,    24,    40,     3,     4,     5,    23,    24,    41,     9,
       5,    40,    19,    20,    19,    20,    23,    24,    23,    24,
      30,    31,    32,    33,    41,   230,   216,    27,    37,   234,
      39,    41,    34,   210,    41,   212,    41,    40,    40,    40,
      40,    28,    29,    30,    31,    32,    33,    28,    29,    30,
      31,    32,    33,     6,    41,    10,    11,    10,    11,    14,
      41,    14,    28,    29,    30,    31,    32,    33,    40,   259,
      30,    31,    32,    33,   279,    41,    28,    29,    30,    31,
      32,    33,    36,    19,    20,    13,   276,    23,    24,    41,
      28,    29,    30,    31,    32,    33,    28,    29,    30,    31,
      32,    33,     5,    41,    29,    30,    31,    38,    41,    41,
      21,    22,    23,    24,    25,    26,    35,    28,    29,    30,
      31,    32,    33,    21,    22,    23,    24,    25,    26,    10,
      28,    29,    30,    31,    32,    33,     3,     4,    32,    33,
       7,     8,     9,    28,    29,    30,    31,    32,    33,    28,
      29,    30,    31,    32,    33,    19,    20,    94,    95,    23,
      24,     5,    36,    34,    40,    26,     5,    13,    10,    35,
       7,    12,    37,     5,    34,    34,     5,    40,    34,    41,
      13,    39,     5,    34,    10,    39,    39,    39,    35,    39,
      39,    39,    13,    36,    34,     3,    34,     4,     8,    35,
       9,    36,    13,     5,   120,   211,   214,    41,    13,   213,
      41,    41,   176,    41,    41,    34,    41,    41,    34,    41,
      34,    41,    16,    36,    36,   105,    41,   223,    34,    -1,
      -1,    35,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    10,    11,    14,    44,    45,    53,    54,    56,
      59,    10,     5,    40,     5,     0,    34,    34,    35,     5,
      13,    37,    40,    46,    41,    35,    44,    10,    53,     5,
       6,    10,    15,    17,    18,    60,    61,    13,    46,     3,
       4,     5,     7,     8,     9,    27,    40,    67,    68,    69,
      70,     3,    10,    41,    55,    13,    42,     6,    10,    57,
      58,     5,    13,    29,    40,    10,     5,    40,    40,    40,
      36,    60,    67,    13,    68,    69,    68,    69,    21,    22,
      23,    24,    25,    26,    28,    29,    30,    31,    32,    33,
      19,    20,    23,    24,    28,    32,    33,    38,     5,    41,
      35,    60,    10,     5,    36,    34,    67,    26,     5,    41,
      65,    66,    67,     5,    13,    69,    10,    62,    69,    53,
      35,    21,    22,    23,    24,    25,    26,    28,    29,    30,
      31,    32,    33,    19,    20,    23,    24,    40,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    70,    70,    68,    46,    39,    46,
       3,     4,     7,     8,     9,    47,    48,    49,    50,    51,
      52,    12,     5,    13,    40,    46,    34,    57,    34,     5,
      40,    34,    41,    39,    13,    67,    41,     5,    34,    41,
      47,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    69,    69,    68,    55,    39,
      39,    39,    39,    39,    39,    36,    13,    46,    67,    41,
      55,    56,    34,    40,    41,    65,    34,    65,    67,    34,
      35,    13,    63,    69,    35,    36,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    55,    48,    49,    48,    51,    50,    67,    13,
      41,    41,    66,    41,    34,    60,    34,    60,    67,    34,
      41,    36,     5,    64,    36,    34,    13,    41,    67,    35,
      60,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    45,    45,    46,    46,
      47,    47,    47,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    53,    54,    54,
      55,    55,    55,    55,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    58,    58,    59,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     5,     4,     8,     7,     4,     3,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     5,     1,     4,     5,
       4,     5,     2,     3,     7,     1,     3,     2,     5,     4,
       2,     4,     5,     6,     3,     6,     2,     0,     5,     6,
       4,     4,     5,     5,     7,     8,     7,     7,    11,     3,
       0,     1,     0,     3,     0,     3,     1,     3,     4,     1,
       1,     1,     1,     1,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     5,     1,     1,     1,     3,
       5,     3,     5,     3,     5,     3,     5,     3,     5,     3,
       5,     3,     5,     3,     5,     3,     5,     3,     5,     2,
       1,     3,     3,     3,     1
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
#line 57 "my_language.y"
                                             {
                        types_arr_size = 0;
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, (yyvsp[-2].str_value)); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s %s", (yyvsp[-4].str_value), (yyvsp[-3].str_value));
                        insertVar(var_name, var_type, scope, (yyvsp[0].address));
                   }
#line 1352 "./headers/my_language.tab.c"
    break;

  case 5: /* global_declaration: TIP ID ASSIGN exp  */
#line 67 "my_language.y"
                                       {
                        types_arr_size = 0;
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, (yyvsp[-2].str_value)); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s", (yyvsp[-3].str_value));
                        insertVar(var_name, var_type, scope, (yyvsp[0].address));
                   }
#line 1367 "./headers/my_language.tab.c"
    break;

  case 6: /* global_declaration: CONST TIP ID brackets ASSIGN '{' initialization_list '}'  */
#line 77 "my_language.y"
                                                                              {
                        strcpy(arr_type, (yyvsp[-6].str_value));
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, (yyvsp[-5].str_value)); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s %s*", (yyvsp[-7].str_value), (yyvsp[-6].str_value));
                        insertVar(var_name, var_type, scope, (yyvsp[-1].str_value));
                   }
#line 1382 "./headers/my_language.tab.c"
    break;

  case 7: /* global_declaration: TIP ID brackets ASSIGN '{' initialization_list '}'  */
#line 87 "my_language.y"
                                                                        {
                        strcpy(arr_type, (yyvsp[-6].str_value));
                        var_name[0] = '\0';
                        strcpy(scope, "global");
                        strcat(var_name, (yyvsp[-5].str_value)); 
                        strcat(var_name, "::"); 
                        strcat(var_name, scope);
                        sprintf(var_type, "%s*", (yyvsp[-6].str_value));
                        insertVar(var_name, var_type, scope, (yyvsp[-1].str_value));
                   }
#line 1397 "./headers/my_language.tab.c"
    break;

  case 8: /* brackets: '[' INTEGER ']' brackets  */
#line 99 "my_language.y"
                                    { 
            if ((yyvsp[-2].int_value) < 0) {
                yyerror("Eroare. Dimensiune negativa a array-ului");
            } 
         }
#line 1407 "./headers/my_language.tab.c"
    break;

  case 9: /* brackets: '[' INTEGER ']'  */
#line 104 "my_language.y"
                           {
            if ((yyvsp[-1].int_value) < 0) {
                yyerror("Eroare. Dimensiune negativa a array-ului");
            } 
         }
#line 1417 "./headers/my_language.tab.c"
    break;

  case 10: /* initialization_list: initialization_list_int  */
#line 111 "my_language.y"
                                              {(yyval.str_value) = (yyvsp[0].str_value);}
#line 1423 "./headers/my_language.tab.c"
    break;

  case 11: /* initialization_list: initialization_list_float  */
#line 112 "my_language.y"
                                                {(yyval.str_value) = (yyvsp[0].str_value);}
#line 1429 "./headers/my_language.tab.c"
    break;

  case 12: /* initialization_list: initialization_list_bool  */
#line 113 "my_language.y"
                                               {(yyval.str_value) = (yyvsp[0].str_value);}
#line 1435 "./headers/my_language.tab.c"
    break;

  case 13: /* initialization_list: initialization_list_char  */
#line 114 "my_language.y"
                                               {(yyval.str_value) = (yyvsp[0].str_value);}
#line 1441 "./headers/my_language.tab.c"
    break;

  case 14: /* initialization_list: initialization_list_string  */
#line 115 "my_language.y"
                                                 {(yyval.str_value) = (yyvsp[0].str_value);}
#line 1447 "./headers/my_language.tab.c"
    break;

  case 15: /* initialization_list_int: INTEGER ',' initialization_list_int  */
#line 118 "my_language.y"
                                                              {
                            element[0] = '\0';
                            sprintf(element, "%d", (yyvsp[-2].int_value)); 
                            strcat(init_list, element);
                            strcat(init_list, ", ");
                        }
#line 1458 "./headers/my_language.tab.c"
    break;

  case 16: /* initialization_list_int: INTEGER  */
#line 124 "my_language.y"
                                  {
                            element[0] = '\0';
                            sprintf(element, "%d", (yyvsp[0].int_value));
                            strcat(init_list, element); 
                            (yyval.str_value) = strdup(init_list);
                            init_list[0] = '\0';
                        }
#line 1470 "./headers/my_language.tab.c"
    break;

  case 17: /* initialization_list_float: FLOAT ',' initialization_list_float  */
#line 133 "my_language.y"
                                                                {
                            element[0] = '\0';
                            sprintf(element, "%f", (yyvsp[-2].float_value)); 
                            strcat(init_list, element);
                            strcat(init_list, ", ");
                          }
#line 1481 "./headers/my_language.tab.c"
    break;

  case 18: /* initialization_list_float: FLOAT  */
#line 139 "my_language.y"
                                  {
                            element[0] = '\0';
                            sprintf(element, "%f", (yyvsp[0].float_value));
                            strcat(init_list, element); 
                            (yyval.str_value) = strdup(init_list);
                            init_list[0] = '\0';
                          }
#line 1493 "./headers/my_language.tab.c"
    break;

  case 19: /* initialization_list_bool: BOOLEAN ',' initialization_list_bool  */
#line 148 "my_language.y"
                                                                {
                            element[0] = '\0';
                            sprintf(element, "%s", (yyvsp[-2].boolean_value) ? "true" : "false");
                            strcat(init_list, element); 
                            strcat(init_list, ", ");
                         }
#line 1504 "./headers/my_language.tab.c"
    break;

  case 20: /* initialization_list_bool: BOOLEAN  */
#line 154 "my_language.y"
                                  {
                            element[0] = '\0';
                            sprintf(element, "%s", (yyvsp[0].boolean_value) ? "true" : "false");
                            strcat(init_list, element); 
                            (yyval.str_value) = strdup(init_list);
                            init_list[0] = '\0';
                        }
#line 1516 "./headers/my_language.tab.c"
    break;

  case 21: /* initialization_list_char: CHAR ',' initialization_list_char  */
#line 163 "my_language.y"
                                                             {
                            element[0] = '\0';
                            sprintf(element, "%c", (yyvsp[-2].char_value)); 
                            strcat(init_list, element);
                            strcat(init_list, ", ");
                         }
#line 1527 "./headers/my_language.tab.c"
    break;

  case 22: /* initialization_list_char: CHAR  */
#line 169 "my_language.y"
                               {
                            element[0] = '\0';
                            sprintf(element, "%c", (yyvsp[0].char_value));
                            strcat(init_list, element); 
                            (yyval.str_value) = strdup(init_list);
                            init_list[0] = '\0';
                        }
#line 1539 "./headers/my_language.tab.c"
    break;

  case 23: /* initialization_list_string: STRING ',' initialization_list_int  */
#line 178 "my_language.y"
                                                                {
                                element[0] = '\0';
                                sprintf(element, "%s", (yyvsp[-2].str_value));
                                strcat(init_list, element); 
                                strcat(init_list, ", ");
                            }
#line 1550 "./headers/my_language.tab.c"
    break;

  case 24: /* initialization_list_string: STRING  */
#line 184 "my_language.y"
                                     {
                                element[0] = '\0';
                                sprintf(element, "%s", (yyvsp[0].str_value));
                                strcat(init_list, element); 
                                (yyval.str_value) = strdup(init_list);
                                init_list[0] = '\0';
                            }
#line 1562 "./headers/my_language.tab.c"
    break;

  case 28: /* function_declaration: TIP ID '(' ')'  */
#line 198 "my_language.y"
                                       { strcpy(scope, (yyvsp[-2].str_value)); }
#line 1568 "./headers/my_language.tab.c"
    break;

  case 29: /* function_declaration: TIP ID '(' param_list ')'  */
#line 199 "my_language.y"
                                                 { strcpy(scope, (yyvsp[-3].str_value)); }
#line 1574 "./headers/my_language.tab.c"
    break;

  case 34: /* classes: CLASS ID '{' class_declarations '}' ';' classes  */
#line 208 "my_language.y"
                                                          { strcpy(scope, (yyvsp[-5].str_value)); }
#line 1580 "./headers/my_language.tab.c"
    break;

  case 45: /* program: BGIN '(' ')' ':' statements END  */
#line 225 "my_language.y"
                                          {printf("Program corect sintactic.\n");}
#line 1586 "./headers/my_language.tab.c"
    break;

  case 70: /* exp: aexp  */
#line 265 "my_language.y"
           {
        if (strcmp(types_arr[0], "int") == 0) {
            printf("S-a recunoscut valoarea numerica %d.\n", *((int*)(yyvsp[0].address)));
            inum = *((int*)(yyvsp[0].address)); 
            result = malloc(sizeof(int)); 
            memcpy(result, &inum, sizeof(int)); 
        }
        else {
            printf("S-a recunoscut valoarea numerica %f.\n", *((float*)(yyvsp[0].address)));
            fnum = *((float*)(yyvsp[0].address)); 
            result = malloc(sizeof(float)); 
            memcpy(result, &fnum, sizeof(float)); 
        }
        (yyval.address) = result;
    }
#line 1606 "./headers/my_language.tab.c"
    break;

  case 71: /* exp: bexp  */
#line 280 "my_language.y"
           {
        printf("S-a recunoscut valoarea booleana: %s.\n", (yyvsp[0].boolean_value) ? "true" : "false");
        boolean = (yyvsp[0].boolean_value); 
        result = (void*)(malloc(sizeof(bool))); 
        memcpy(result, &boolean, sizeof(bool)); 
        (yyval.address) = result;    
    }
#line 1618 "./headers/my_language.tab.c"
    break;

  case 72: /* exp: str  */
#line 287 "my_language.y"
          {
        printf("S-a recunoscut sirul %s.\n", (yyvsp[0].str_value));
        string = strdup((yyvsp[0].str_value)); 
        result = (void*)(malloc(strlen(string) + 1)); 
        memcpy(result, string, strlen(string));
        (yyval.address) = result;
    }
#line 1630 "./headers/my_language.tab.c"
    break;

  case 73: /* exp: CHAR  */
#line 294 "my_language.y"
           {
        printf("S-a recunoscut caracterul %c.\n", (yyvsp[0].char_value));
        character = (yyvsp[0].char_value); 
        result = (void*)(malloc(sizeof(char))); 
        memcpy(result, &character, sizeof(char));
        (yyval.address) = result;
    }
#line 1642 "./headers/my_language.tab.c"
    break;

  case 74: /* aexp: aexp '+' aexp  */
#line 303 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address));
                opi2 = *((int*)(yyvsp[0].address));
                inum = opi1 + opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address));
                opf2 = *((float*)(yyvsp[0].address));
                fnum = opf1 + opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            (yyval.address) = result;
        }
    }
#line 1669 "./headers/my_language.tab.c"
    break;

  case 75: /* aexp: '(' aexp '+' aexp ')'  */
#line 325 "my_language.y"
                            {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address));
                opi2 = *((int*)(yyvsp[-1].address));
                inum = opi1 + opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address));
                opf2 = *((float*)(yyvsp[-1].address));
                fnum = opf1 + opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            (yyval.address) = result;
        }
    }
#line 1696 "./headers/my_language.tab.c"
    break;

  case 76: /* aexp: aexp '-' aexp  */
#line 347 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address));
                opi2 = *((int*)(yyvsp[0].address));
                inum = opi1 - opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address));
                opf2 = *((float*)(yyvsp[0].address));
                fnum = opf1 - opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            (yyval.address) = result;
        }
    }
#line 1723 "./headers/my_language.tab.c"
    break;

  case 77: /* aexp: '(' aexp '-' aexp ')'  */
#line 369 "my_language.y"
                            {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address));
                opi2 = *((int*)(yyvsp[-1].address));
                inum = opi1 - opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address));
                opf2 = *((float*)(yyvsp[-1].address));
                fnum = opf1 - opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            (yyval.address) = result;
        }
    }
#line 1750 "./headers/my_language.tab.c"
    break;

  case 78: /* aexp: aexp '*' aexp  */
#line 391 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address));
                opi2 = *((int*)(yyvsp[0].address));
                inum = opi1 * opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address));
                opf2 = *((float*)(yyvsp[0].address));
                fnum = opf1 * opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
                (yyval.address) = result;
            }
            (yyval.address) = result;
        }
    }
#line 1778 "./headers/my_language.tab.c"
    break;

  case 79: /* aexp: '(' aexp '*' aexp ')'  */
#line 414 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address));
                opi2 = *((int*)(yyvsp[-1].address));
                inum = opi1 * opi2;
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address));
                opf2 = *((float*)(yyvsp[-1].address));
                fnum = opf1 * opf2;
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            (yyval.address) = result;
        }
    }
#line 1805 "./headers/my_language.tab.c"
    break;

  case 80: /* aexp: aexp '/' aexp  */
#line 436 "my_language.y"
                    {
         if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address));
                opi2 = *((int*)(yyvsp[0].address));
                if (opi2 != 0) {
                    inum = opi1 / opi2;
                    result = malloc(sizeof(int)); 
                    memcpy(result, &inum, sizeof(int));
                    (yyval.address) = result;
                }
                else {
                    yyerror("Eroare. Impartire la 0");
                }
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address));
                opf2 = *((float*)(yyvsp[0].address));
                if (opf2 != 0) {
                    fnum = opf1 / opf2;
                    result = malloc(sizeof(float)); 
                    memcpy(result, &fnum, sizeof(float));
                    (yyval.address) = result;
                }
                else {
                    yyerror("Eroare, impartire la 0");  
                }
            }
        }
    }
#line 1843 "./headers/my_language.tab.c"
    break;

  case 81: /* aexp: '(' aexp '/' aexp ')'  */
#line 469 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address));
                opi2 = *((int*)(yyvsp[-1].address));
                if (opi2 != 0) {
                    inum = opi1 / opi2;
                    result = malloc(sizeof(int)); 
                    memcpy(result, &inum, sizeof(int));
                    (yyval.address) = result;
                }
                else {
                    yyerror("Eroare. Impartire la 0"); 
                }
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address));
                opf2 = *((float*)(yyvsp[-1].address));
                if (opf2 != 0) {
                    fnum = opf1 / opf2;
                    result = malloc(sizeof(float)); 
                    memcpy(result, &fnum, sizeof(float));
                    (yyval.address) = result;
                }
                else {
                    yyerror("Eroare, impartire la 0");  
                }
            }
        }
    }
#line 1881 "./headers/my_language.tab.c"
    break;

  case 82: /* aexp: aexp '%' aexp  */
#line 502 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address));
                opi2 = *((int*)(yyvsp[0].address));
                if (opi2 != 0) {
                    inum = opi1 % opi2;
                    result = malloc(sizeof(int)); 
                    memcpy(result, &inum, sizeof(int));
                    (yyval.address) = result;
                }
                else {
                    yyerror("Eroare, impartire la 0");  
                }
            }
            else {
                yyerror("Operanzii din expresie nu sunt de tip intreg");
            }
        }
    }
#line 1909 "./headers/my_language.tab.c"
    break;

  case 83: /* aexp: '(' aexp '%' aexp ')'  */
#line 525 "my_language.y"
                            {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address));
                opi2 = *((int*)(yyvsp[-1].address));
                if (opi2 != 0) {
                    inum = opi1 % opi2;
                    result = malloc(sizeof(int)); 
                    memcpy(result, &inum, sizeof(int));
                    (yyval.address) = result;
                }
                else {
                    yyerror("Eroare, impartire la 0");  
                }
            }
            else {
                yyerror("Operanzii din expresie nu sunt de tip intreg");
            }
        }
    }
#line 1937 "./headers/my_language.tab.c"
    break;

  case 84: /* aexp: aexp '^' aexp  */
#line 548 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address));
                opi2 = *((int*)(yyvsp[0].address));
                inum = pow(opi1, opi2);
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address));
                opf2 = *((float*)(yyvsp[0].address));
                fnum = pow(opf1, opf2);
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            (yyval.address) = result;
        }
    }
#line 1964 "./headers/my_language.tab.c"
    break;

  case 85: /* aexp: '(' aexp '^' aexp ')'  */
#line 570 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address));
                opi2 = *((int*)(yyvsp[-1].address));
                inum = pow(opi1, opi2);
                result = malloc(sizeof(int)); 
                memcpy(result, &inum, sizeof(int));
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address));
                opf2 = *((float*)(yyvsp[-1].address));
                fnum = pow(opf1, opf2);
                result = malloc(sizeof(float)); 
                memcpy(result, &fnum, sizeof(float));
            }
            (yyval.address) = result;
        }
    }
#line 1991 "./headers/my_language.tab.c"
    break;

  case 86: /* aexp: INTEGER  */
#line 592 "my_language.y"
              {
        strcpy(types_arr[types_arr_size++], "int"); 
        inum = (yyvsp[0].int_value); 
        result = malloc(sizeof(int)); 
        memcpy(result, &inum, sizeof(int));
        (yyval.address) = result;
    }
#line 2003 "./headers/my_language.tab.c"
    break;

  case 87: /* aexp: FLOAT  */
#line 599 "my_language.y"
            {
        strcpy(types_arr[types_arr_size++], "float"); 
        fnum = (yyvsp[0].float_value); 
        result = malloc(sizeof(float)); 
        memcpy(result, &fnum, sizeof(float));
        (yyval.address) = result;
    }
#line 2015 "./headers/my_language.tab.c"
    break;

  case 88: /* aexp: ID  */
#line 606 "my_language.y"
         {
        if (strcmp(TypeOf((yyvsp[0].str_value)), "undefined") == 0) {
            sprintf(msg, "%s %s %s", "Variabila", (yyvsp[0].str_value), "nu este declarata");
            yyerror(msg); 
        }
        else {
            strcpy(types_arr[types_arr_size++], TypeOf((yyvsp[0].str_value)));
            if (strcmp(TypeOf((yyvsp[0].str_value)), "int") == 0) {
                result = malloc(sizeof(int)); 
                memcpy(result, Eval((yyvsp[0].str_value)), sizeof(int)); 
            }
            else {
                result = malloc(sizeof(float)); 
                memcpy(result, Eval((yyvsp[0].str_value)), sizeof(float)); 
            }
            (yyval.address) = result;
        }
    }
#line 2038 "./headers/my_language.tab.c"
    break;

  case 89: /* bexp: aexp '<' aexp  */
#line 626 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address)); 
                opi2 = *((int*)(yyvsp[0].address));
                (yyval.boolean_value) = (opi1 < opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address)); 
                opf2 = *((float*)(yyvsp[0].address));
                (yyval.boolean_value) = (opf1 < opf2);  
            }
        }
     }
#line 2060 "./headers/my_language.tab.c"
    break;

  case 90: /* bexp: '(' aexp '<' aexp ')'  */
#line 643 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address)); 
                opi2 = *((int*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opi1 < opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address)); 
                opf2 = *((float*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opf1 < opf2);  
            }
        }
     }
#line 2082 "./headers/my_language.tab.c"
    break;

  case 91: /* bexp: aexp '>' aexp  */
#line 660 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address)); 
                opi2 = *((int*)(yyvsp[0].address));
                (yyval.boolean_value) = (opi1 > opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address)); 
                opf2 = *((float*)(yyvsp[0].address));
                (yyval.boolean_value) = (opf1 > opf2);  
            }
        }
    }
#line 2104 "./headers/my_language.tab.c"
    break;

  case 92: /* bexp: '(' aexp '>' aexp ')'  */
#line 677 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address)); 
                opi2 = *((int*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opi1 > opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address)); 
                opf2 = *((float*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opf1 > opf2);  
            }
        }
     }
#line 2126 "./headers/my_language.tab.c"
    break;

  case 93: /* bexp: aexp LTE aexp  */
#line 694 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address)); 
                opi2 = *((int*)(yyvsp[0].address));
                (yyval.boolean_value) = (opi1 <= opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address)); 
                opf2 = *((float*)(yyvsp[0].address));
                (yyval.boolean_value) = (opf1 <= opf2);  
            }
        }
     }
#line 2148 "./headers/my_language.tab.c"
    break;

  case 94: /* bexp: '(' aexp LTE aexp ')'  */
#line 711 "my_language.y"
                             {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address)); 
                opi2 = *((int*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opi1 <= opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address)); 
                opf2 = *((float*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opf1 <= opf2);  
            }
        }
     }
#line 2170 "./headers/my_language.tab.c"
    break;

  case 95: /* bexp: aexp GTE aexp  */
#line 728 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address)); 
                opi2 = *((int*)(yyvsp[0].address));
                (yyval.boolean_value) = (opi1 >= opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address)); 
                opf2 = *((float*)(yyvsp[0].address));
                (yyval.boolean_value) = (opf1 >= opf2);  
            }
        }
     }
#line 2192 "./headers/my_language.tab.c"
    break;

  case 96: /* bexp: '(' aexp GTE aexp ')'  */
#line 745 "my_language.y"
                             {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address)); 
                opi2 = *((int*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opi1 >= opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address)); 
                opf2 = *((float*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opf1 >= opf2);  
            }
        }
     }
#line 2214 "./headers/my_language.tab.c"
    break;

  case 97: /* bexp: aexp EQ aexp  */
#line 762 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address)); 
                opi2 = *((int*)(yyvsp[0].address));
                (yyval.boolean_value) = (opi1 == opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address)); 
                opf2 = *((float*)(yyvsp[0].address));
                (yyval.boolean_value) = (opf1 == opf2);  
            }
        }
     }
#line 2236 "./headers/my_language.tab.c"
    break;

  case 98: /* bexp: '(' aexp EQ aexp ')'  */
#line 779 "my_language.y"
                            {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address)); 
                opi2 = *((int*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opi1 == opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address)); 
                opf2 = *((float*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opf1 == opf2);  
            }
        }
     }
#line 2258 "./headers/my_language.tab.c"
    break;

  case 99: /* bexp: aexp NEQ aexp  */
#line 796 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-2].address)); 
                opi2 = *((int*)(yyvsp[0].address));
                (yyval.boolean_value) = (opi1 != opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-2].address)); 
                opf2 = *((float*)(yyvsp[0].address));
                (yyval.boolean_value) = (opf1 != opf2);  
            }
        }
     }
#line 2280 "./headers/my_language.tab.c"
    break;

  case 100: /* bexp: '(' aexp NEQ aexp ')'  */
#line 813 "my_language.y"
                             {
        if (!checkTypes()) {
            yyerror("Eroare. Operanzii din expresie nu au acelasi tip");
        }
        else {
            if (strcmp(types_arr[0], "int") == 0) {
                opi1 = *((int*)(yyvsp[-3].address)); 
                opi2 = *((int*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opi1 != opi2); 
            }
            else {
                opf1 = *((float*)(yyvsp[-3].address)); 
                opf2 = *((float*)(yyvsp[-1].address));
                (yyval.boolean_value) = (opf1 != opf2);  
            }
        }
     }
#line 2302 "./headers/my_language.tab.c"
    break;

  case 101: /* bexp: bexp AND bexp  */
#line 830 "my_language.y"
                     {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) && (yyvsp[0].boolean_value));}
#line 2308 "./headers/my_language.tab.c"
    break;

  case 102: /* bexp: '(' bexp AND bexp ')'  */
#line 831 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) && (yyvsp[-1].boolean_value));}
#line 2314 "./headers/my_language.tab.c"
    break;

  case 103: /* bexp: bexp OR bexp  */
#line 832 "my_language.y"
                    {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) || (yyvsp[0].boolean_value));}
#line 2320 "./headers/my_language.tab.c"
    break;

  case 104: /* bexp: '(' bexp OR bexp ')'  */
#line 833 "my_language.y"
                            {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) || (yyvsp[-1].boolean_value));}
#line 2326 "./headers/my_language.tab.c"
    break;

  case 105: /* bexp: bexp EQ bexp  */
#line 834 "my_language.y"
                    {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) == (yyvsp[0].boolean_value));}
#line 2332 "./headers/my_language.tab.c"
    break;

  case 106: /* bexp: '(' bexp EQ bexp ')'  */
#line 835 "my_language.y"
                            {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) == (yyvsp[-1].boolean_value));}
#line 2338 "./headers/my_language.tab.c"
    break;

  case 107: /* bexp: bexp NEQ bexp  */
#line 836 "my_language.y"
                     {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) != (yyvsp[0].boolean_value));}
#line 2344 "./headers/my_language.tab.c"
    break;

  case 108: /* bexp: '(' bexp NEQ bexp ')'  */
#line 837 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) != (yyvsp[-1].boolean_value));}
#line 2350 "./headers/my_language.tab.c"
    break;

  case 109: /* bexp: '!' bexp  */
#line 838 "my_language.y"
                {(yyval.boolean_value) = (!(yyvsp[0].boolean_value));}
#line 2356 "./headers/my_language.tab.c"
    break;

  case 110: /* bexp: BOOLEAN  */
#line 839 "my_language.y"
               {(yyval.boolean_value) = (yyvsp[0].boolean_value);}
#line 2362 "./headers/my_language.tab.c"
    break;

  case 111: /* str: str '+' str  */
#line 842 "my_language.y"
                  {
        char *s = strdup((yyvsp[-2].str_value)); 
        strcat(s, (yyvsp[0].str_value)); 
        (yyval.str_value) = s;        
    }
#line 2372 "./headers/my_language.tab.c"
    break;

  case 112: /* str: str '^' aexp  */
#line 847 "my_language.y"
                   {
        if (strcmp(types_arr[0], "int") == 0) {
            inum = *((int*)(yyvsp[0].address));
            if(inum == 0) {
                (yyval.str_value) = '\0';
            }
            else {   
                char *s = strdup((yyvsp[-2].str_value));
                for(int i = 1; i < inum; ++i)
                    s = strcat(s, (yyvsp[-2].str_value));
                (yyval.str_value) = s;
            }
        }  

    }
#line 2392 "./headers/my_language.tab.c"
    break;

  case 113: /* str: str '%' str  */
#line 862 "my_language.y"
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
#line 2410 "./headers/my_language.tab.c"
    break;

  case 114: /* str: STRING  */
#line 875 "my_language.y"
              {(yyval.str_value) = strdup((yyvsp[0].str_value));}
#line 2416 "./headers/my_language.tab.c"
    break;


#line 2420 "./headers/my_language.tab.c"

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

#line 877 "my_language.y"


int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* fptr_vars = fopen(argv[2], "w");

    yyparse();

    print_symbol_table(fptr_vars);

    fclose(fptr_vars);
} 
