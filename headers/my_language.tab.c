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

struct symbol_table tmp_vars[100];
int tmp_size = 0;

#line 90 "./headers/my_language.tab.c"

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
  YYSYMBOL_function_statements = 56,       /* function_statements  */
  YYSYMBOL_function_statement = 57,        /* function_statement  */
  YYSYMBOL_classes = 58,                   /* classes  */
  YYSYMBOL_class_declarations = 59,        /* class_declarations  */
  YYSYMBOL_class_declaration = 60,         /* class_declaration  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_local_statements = 62,          /* local_statements  */
  YYSYMBOL_local_statement = 63,           /* local_statement  */
  YYSYMBOL_init = 64,                      /* init  */
  YYSYMBOL_cond = 65,                      /* cond  */
  YYSYMBOL_increment = 66,                 /* increment  */
  YYSYMBOL_params = 67,                    /* params  */
  YYSYMBOL_param = 68,                     /* param  */
  YYSYMBOL_exp = 69,                       /* exp  */
  YYSYMBOL_aexp = 70,                      /* aexp  */
  YYSYMBOL_bexp = 71,                      /* bexp  */
  YYSYMBOL_str = 72                        /* str  */
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
#define YYLAST   509

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

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
       0,    57,    57,    58,    61,    75,    89,   103,   119,   124,
     131,   135,   139,   143,   147,   153,   160,   170,   177,   187,
     194,   204,   211,   221,   228,   238,   239,   240,   243,   248,
     255,   259,   265,   269,   277,   278,   281,   291,   304,   310,
     319,   331,   334,   338,   339,   340,   341,   342,   343,   344,
     347,   352,   355,   356,   359,   372,   385,   394,   395,   396,
     403,   412,   415,   416,   419,   430,   444,   450,   459,   472,
     475,   479,   480,   481,   482,   483,   484,   485,   488,   501,
     503,   504,   507,   508,   511,   512,   515,   519,   530,   542,
     549,   564,   572,   580,   590,   612,   634,   656,   678,   701,
     723,   756,   789,   812,   835,   857,   879,   886,   893,   913,
     930,   947,   964,   981,   998,  1015,  1032,  1049,  1066,  1083,
    1100,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,
    1126,  1129,  1134,  1152,  1165
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
  "function_declaration", "param_list", "function_statements",
  "function_statement", "classes", "class_declarations",
  "class_declaration", "program", "local_statements", "local_statement",
  "init", "cond", "increment", "params", "param", "exp", "aexp", "bexp",
  "str", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-179)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      77,     2,    24,    33,    35,    15,    52,  -179,     0,  -179,
    -179,    87,    39,    55,    70,  -179,    77,   195,   338,    10,
     193,   128,    -2,   143,    96,   139,  -179,   138,  -179,     1,
     153,   155,   142,   159,   164,   182,   338,   193,   209,  -179,
    -179,  -179,  -179,  -179,  -179,   210,   210,  -179,   342,   117,
     250,   157,   222,  -179,   190,   208,   344,   255,   292,   267,
     285,   228,   193,   291,    19,   125,   315,   309,   210,   316,
     210,   195,  -179,  -179,   290,   342,  -179,   355,   205,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,   210,   210,   210,   210,   333,   333,     6,   305,   130,
    -179,    86,   110,   335,   341,   311,   312,   317,   346,   344,
     364,    40,   326,   139,   348,   403,   372,   373,    38,   375,
     374,   377,  -179,   399,   193,   169,   408,   380,   232,  -179,
      86,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,   210,   210,   210,   210,     6,   361,   361,
     361,   361,   361,   361,   371,   371,  -179,  -179,  -179,  -179,
     188,   188,  -179,  -179,   202,  -179,   376,  -179,   407,   379,
     381,   382,   383,   384,   385,   389,  -179,  -179,  -179,  -179,
    -179,   193,   393,   244,   150,   421,   414,   210,   316,   210,
    -179,  -179,    61,   193,     3,  -179,   137,  -179,  -179,    -8,
     415,   416,   271,   390,  -179,   396,   237,   193,   398,   400,
     420,   210,   401,   402,   257,   263,   277,   283,   300,   306,
      94,   239,   404,   405,   406,   409,    -5,    58,   410,   411,
     367,  -179,   407,   431,   433,   432,   434,   435,  -179,   419,
     436,   417,   418,   423,   413,   427,   193,   234,   424,   243,
     193,  -179,  -179,  -179,   422,  -179,  -179,   167,   193,   193,
     426,   428,  -179,  -179,  -179,   425,  -179,   338,   193,   437,
     117,   338,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,    -3,   430,   447,  -179,
     438,   193,   439,   440,   210,   441,  -179,  -179,   443,   429,
     444,   445,  -179,  -179,  -179,   412,  -179,   456,   446,  -179,
     176,   193,   193,  -179,   449,  -179,   344,   450,   344,  -179,
     451,  -179,  -179,   452,   454,   448,  -179,   453,   455,   457,
     458,  -179,   459,   456,   461,  -179,   463,   193,   464,  -179,
     460,  -179,  -179,   465,   462,  -179,   338,  -179,   338,  -179,
     466,   467,   468,   469,   344,   344,  -179,  -179,   470,   471,
    -179,  -179
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     3,     0,    27,
      51,     0,     0,     0,     0,     1,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     2,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    35,     0,     0,   106,
     107,   108,   134,    93,   130,     0,     0,     5,    90,    91,
      92,     0,     0,    28,     0,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,    34,     4,     0,     0,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    32,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    56,     0,    53,     0,     0,     0,     0,   108,     0,
       0,    85,    89,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   115,
     119,   117,   109,   111,    94,    96,   100,    98,   102,   104,
     121,   123,   127,   125,   131,   133,   132,     8,     0,    33,
      16,    18,    24,    22,    20,     0,    10,    11,    12,    13,
      14,     0,     0,     0,     0,     0,     0,     0,    79,     0,
      61,    62,     0,     0,     0,    60,     0,    52,    38,     0,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,    81,     0,     0,   113,   115,   119,   117,   109,   111,
      94,    96,   100,    98,   102,   104,   121,   123,   127,   125,
       0,    30,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    55,    57,     0,    50,    43,     0,     0,     0,
       0,     0,    86,    42,    84,     0,    36,    35,     0,     0,
      80,    35,     6,   114,   116,   120,   118,   110,   112,    95,
      97,   101,    99,   103,   105,   122,   124,   128,   126,    31,
      15,    17,    23,    21,    19,    66,     0,     0,     0,    69,
       0,     0,     0,     0,    81,     0,    54,    58,     0,     0,
       0,     0,    87,    88,    37,     0,    78,    83,     0,    71,
       0,     0,     0,    70,     0,    64,    63,     0,    63,    44,
       0,    39,    40,    46,     0,     0,    48,     0,     0,     0,
       0,    65,     0,    83,     0,    45,     0,     0,     0,    72,
       0,    67,    68,    74,     0,    76,    35,    82,    35,    73,
       0,     0,     0,     0,    63,    63,    47,    49,     0,     0,
      75,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,   472,  -179,   -14,   319,   229,   231,   249,   233,   245,
      -1,  -179,  -161,   -35,  -179,   278,   387,  -179,  -179,  -105,
    -179,   302,   189,   165,  -178,   252,   -20,   -25,   -43,   204
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    23,   175,   176,   177,   178,   179,   180,
       7,     8,    54,    35,    36,     9,    59,    60,    10,   108,
     109,   127,   269,   335,   120,   121,   122,    48,    49,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    72,    76,    78,   191,    38,   244,   231,    52,    39,
      40,    41,    11,    52,    62,    15,    28,    73,    93,    94,
      75,    77,   116,    37,   117,   125,   256,   128,   264,    12,
      63,   319,   257,   254,    17,    18,   285,   320,    64,    53,
      14,    65,   114,    75,   253,    75,   147,    21,   160,   161,
     162,   163,    20,   193,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    75,    75,    75,    75,
     129,   289,   166,    13,   250,   202,    21,    21,   203,    22,
     194,    93,    94,     1,   167,   169,    16,     2,     3,   170,
     171,     4,    19,   172,   173,   174,    24,   195,    21,   286,
     226,   227,   228,   229,   208,    25,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,    75,    75,
      75,    75,   230,   181,    87,    88,    89,    90,    39,    40,
     118,    51,    42,    43,    44,   279,    91,    92,    56,   182,
      93,    94,   338,    61,   247,    57,   249,   183,     3,    58,
     184,     4,    45,    39,    40,   118,    55,    42,    43,    44,
      67,   239,    75,    66,    75,    46,   119,    21,   270,   168,
      39,    40,   118,   252,    42,    43,    44,    45,   251,    39,
      40,   118,    68,    42,    43,    44,    75,   265,    91,    92,
      46,   243,    93,    94,    45,    98,    39,    40,    41,    69,
      42,    43,    44,    45,    70,    27,     3,    46,   308,     4,
     209,    93,    94,    39,    40,    41,    46,   337,    71,    44,
      45,   342,    74,   344,   143,   144,   302,    99,   145,   146,
     306,   100,   315,    46,    96,    97,   318,    45,   310,   311,
      39,    40,   118,   101,    42,    43,    44,   241,   316,   242,
      46,    91,    92,    91,    92,    93,    94,    93,    94,   368,
     369,   270,    91,    92,    45,   110,    93,    94,    22,    87,
      88,    89,    90,   212,   260,   303,   261,    46,    95,    75,
     280,   324,    96,    97,   305,    85,    86,    87,    88,    89,
      90,    85,    86,    87,    88,    89,    90,   111,   273,   164,
     165,   339,   340,   112,   274,    85,    86,    87,    88,    89,
      90,    85,    86,    87,    88,    89,    90,   115,   275,   113,
     123,   362,   124,   363,   276,   130,   126,   357,    85,    86,
      87,    88,    89,    90,    85,    86,    87,    88,    89,    90,
      42,   277,    21,    29,    30,   185,   186,   278,    31,   102,
     103,   187,   188,    32,   104,    33,    34,   189,   190,   105,
     196,   106,   107,    79,    80,    81,    82,    83,    84,   192,
      85,    86,    87,    88,    89,    90,   131,   132,   133,   134,
     135,   136,   198,   137,   138,   139,   140,   141,   142,    85,
      86,    87,    88,    89,    90,   137,   138,   139,   140,   141,
     142,    87,    88,    89,    90,    86,    87,    88,   199,   204,
     200,   201,   207,   210,   211,   205,   206,    52,   232,   240,
     233,   234,   235,   236,   237,   238,   245,   246,   258,   259,
     263,   262,   266,   268,   170,   267,   271,   171,   272,   172,
     301,   296,   173,   321,   174,   281,   282,   283,   333,   213,
     284,   287,   288,   295,   300,   297,   298,   299,   304,   314,
     322,   334,   290,   307,   312,   291,   313,   347,   346,   293,
     330,   317,   323,   325,   255,   326,   328,   329,   331,   332,
     292,   360,   336,   341,   343,   345,   294,   349,    26,   348,
     248,   351,   352,   327,   359,   353,   350,   355,   356,   358,
     197,   364,   365,   361,   366,   367,   370,   371,   354,   309
};

static const yytype_int16 yycheck[] =
{
      20,    36,    45,    46,   109,    19,   184,   168,    10,     3,
       4,     5,    10,    10,    13,     0,    17,    37,    23,    24,
      45,    46,     3,    13,     5,    68,    34,    70,   206,     5,
      29,    34,    40,   194,    34,    35,    41,    40,    37,    41,
       5,    40,    62,    68,    41,    70,    40,    37,    91,    92,
      93,    94,    13,    13,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      71,   232,    97,    40,    13,    37,    37,    37,    40,    40,
      40,    23,    24,     6,    98,    99,    34,    10,    11,     3,
       4,    14,     5,     7,     8,     9,    41,   111,    37,    41,
     143,   144,   145,   146,   124,    35,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,    13,    30,    31,    32,    33,     3,     4,
       5,     3,     7,     8,     9,    41,    19,    20,    42,    29,
      23,    24,   320,     5,   187,     6,   189,    37,    11,    10,
      40,    14,    27,     3,     4,     5,    13,     7,     8,     9,
       5,   181,   187,    10,   189,    40,    41,    37,   211,    39,
       3,     4,     5,   193,     7,     8,     9,    27,   192,     3,
       4,     5,    40,     7,     8,     9,   211,   207,    19,    20,
      40,    41,    23,    24,    27,    38,     3,     4,     5,    40,
       7,     8,     9,    27,    40,    10,    11,    40,    41,    14,
      41,    23,    24,     3,     4,     5,    40,    41,    36,     9,
      27,   326,    13,   328,    19,    20,   246,     5,    23,    24,
     250,    41,   267,    40,    32,    33,   271,    27,   258,   259,
       3,     4,     5,    35,     7,     8,     9,     3,   268,     5,
      40,    19,    20,    19,    20,    23,    24,    23,    24,   364,
     365,   304,    19,    20,    27,    10,    23,    24,    40,    30,
      31,    32,    33,    41,     3,    41,     5,    40,    28,   304,
      41,   301,    32,    33,    41,    28,    29,    30,    31,    32,
      33,    28,    29,    30,    31,    32,    33,     5,    41,    95,
      96,   321,   322,    36,    41,    28,    29,    30,    31,    32,
      33,    28,    29,    30,    31,    32,    33,    26,    41,    34,
       5,   356,    13,   358,    41,    35,    10,   347,    28,    29,
      30,    31,    32,    33,    28,    29,    30,    31,    32,    33,
       7,    41,    37,     5,     6,    10,     5,    41,    10,     5,
       6,    40,    40,    15,    10,    17,    18,    40,    12,    15,
      34,    17,    18,    21,    22,    23,    24,    25,    26,     5,
      28,    29,    30,    31,    32,    33,    21,    22,    23,    24,
      25,    26,    34,    28,    29,    30,    31,    32,    33,    28,
      29,    30,    31,    32,    33,    28,    29,    30,    31,    32,
      33,    30,    31,    32,    33,    29,    30,    31,     5,    34,
      38,    38,    13,     5,    34,    41,    39,    10,    39,    26,
      39,    39,    39,    39,    39,    36,     5,    13,    13,    13,
      34,    41,    34,    13,     3,    35,    35,     4,    36,     7,
      13,     5,     8,    13,     9,    41,    41,    41,    36,   130,
      41,    41,    41,    34,    41,    38,    38,    34,    34,    34,
      13,     5,   233,    41,    38,   234,    38,    13,    16,   236,
      41,    34,    34,    34,   196,    35,    35,    34,    34,    34,
     235,    16,    36,    34,    34,    34,   237,    34,    16,    41,
     188,    34,    34,   304,    34,    36,    41,    36,    35,    35,
     113,    35,    35,    41,    36,    36,    36,    36,   343,   257
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    10,    11,    14,    44,    45,    53,    54,    58,
      61,    10,     5,    40,     5,     0,    34,    34,    35,     5,
      13,    37,    40,    46,    41,    35,    44,    10,    53,     5,
       6,    10,    15,    17,    18,    56,    57,    13,    46,     3,
       4,     5,     7,     8,     9,    27,    40,    69,    70,    71,
      72,     3,    10,    41,    55,    13,    42,     6,    10,    59,
      60,     5,    13,    29,    37,    40,    10,     5,    40,    40,
      40,    36,    56,    69,    13,    70,    71,    70,    71,    21,
      22,    23,    24,    25,    26,    28,    29,    30,    31,    32,
      33,    19,    20,    23,    24,    28,    32,    33,    38,     5,
      41,    35,     5,     6,    10,    15,    17,    18,    62,    63,
      10,     5,    36,    34,    69,    26,     3,     5,     5,    41,
      67,    68,    69,     5,    13,    71,    10,    64,    71,    53,
      35,    21,    22,    23,    24,    25,    26,    28,    29,    30,
      31,    32,    33,    19,    20,    23,    24,    40,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    71,    71,    72,    72,    70,    46,    39,    46,
       3,     4,     7,     8,     9,    47,    48,    49,    50,    51,
      52,    13,    29,    37,    40,    10,     5,    40,    40,    40,
      12,    62,     5,    13,    40,    46,    34,    59,    34,     5,
      38,    38,    37,    40,    34,    41,    39,    13,    69,    41,
       5,    34,    41,    47,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    71,    71,
      70,    55,    39,    39,    39,    39,    39,    39,    36,    69,
      26,     3,     5,    41,    67,     5,    13,    71,    64,    71,
      13,    46,    69,    41,    55,    58,    34,    40,    13,    13,
       3,     5,    41,    34,    67,    69,    34,    35,    13,    65,
      71,    35,    36,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    55,
      48,    49,    52,    51,    50,    34,     5,    38,    38,    34,
      41,    13,    69,    41,    34,    41,    69,    41,    41,    68,
      69,    69,    38,    38,    34,    56,    69,    34,    56,    34,
      40,    13,    13,    34,    69,    34,    35,    65,    35,    34,
      41,    34,    34,    36,     5,    66,    36,    41,    67,    69,
      69,    34,    62,    34,    62,    34,    16,    13,    41,    34,
      41,    34,    34,    36,    66,    36,    35,    69,    35,    34,
      16,    41,    56,    56,    35,    35,    36,    36,    62,    62,
      36,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    45,    45,    46,    46,
      47,    47,    47,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    53,    54,    54,
      55,    55,    55,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    61,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    72,    72,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     5,     4,     8,     7,     4,     3,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     5,     1,     4,     5,
       4,     5,     2,     3,     2,     0,     5,     6,     4,     7,
       7,     4,     5,     5,     7,     8,     7,    11,     7,    11,
       7,     1,     3,     2,     5,     4,     2,     4,     5,     4,
       3,     6,     2,     0,     5,     6,     4,     7,     7,     4,
       5,     5,     7,     8,     7,    11,     7,    11,     4,     0,
       1,     0,     3,     0,     3,     1,     3,     4,     4,     1,
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
#line 61 "my_language.y"
                                             {
                        types_arr_size = 0;
                        if (strcmp(types_arr[0], (yyvsp[-3].str_value)) == 0) {
                            var_name[0] = '\0';
                            strcpy(scope, "global");
                            strcat(var_name, (yyvsp[-2].str_value)); 
                            sprintf(var_type, "%s %s", (yyvsp[-4].str_value), (yyvsp[-3].str_value));
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, (yyvsp[0].address));
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                   }
#line 1416 "./headers/my_language.tab.c"
    break;

  case 5: /* global_declaration: TIP ID ASSIGN exp  */
#line 75 "my_language.y"
                                       {
                        types_arr_size = 0;
                        if (strcmp(types_arr[0], (yyvsp[-3].str_value)) == 0) {
                            var_name[0] = '\0';
                            strcpy(scope, "global");
                            strcat(var_name, (yyvsp[-2].str_value)); 
                            sprintf(var_type, "%s", (yyvsp[-3].str_value));
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, (yyvsp[0].address));
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                   }
#line 1435 "./headers/my_language.tab.c"
    break;

  case 6: /* global_declaration: CONST TIP ID brackets ASSIGN '{' initialization_list '}'  */
#line 89 "my_language.y"
                                                                              {
                        init_list[0] = '\0';
                        var_name[0] = '\0';
                        if (strcmp(arr_type, (yyvsp[-6].str_value)) == 0) {
                            strcpy(scope, "global");
                            strcat(var_name, (yyvsp[-5].str_value)); 
                            sprintf(var_type, "%s %s[]", (yyvsp[-7].str_value), (yyvsp[-6].str_value));
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, (yyvsp[-1].str_value));
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipul elementelor din lista de initializare este diferit de tipul array-ului");
                        }
                   }
#line 1454 "./headers/my_language.tab.c"
    break;

  case 7: /* global_declaration: TIP ID brackets ASSIGN '{' initialization_list '}'  */
#line 103 "my_language.y"
                                                                        {
                        init_list[0] = '\0';
                        var_name[0] = '\0';
                        if (strcmp(arr_type, (yyvsp[-6].str_value)) == 0) {
                            strcpy(scope, "global");
                            strcat(var_name, (yyvsp[-5].str_value)); 
                            sprintf(var_type, "%s[]", (yyvsp[-6].str_value));
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, (yyvsp[-1].str_value));
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipul elementelor din lista de initializare este diferit de tipul array-ului");
                        }
                   }
#line 1473 "./headers/my_language.tab.c"
    break;

  case 8: /* brackets: '[' INTEGER ']' brackets  */
#line 119 "my_language.y"
                                    { 
            if ((yyvsp[-2].int_value) < 0) {
                yyerror("Dimensiune negativa a array-ului");
            } 
         }
#line 1483 "./headers/my_language.tab.c"
    break;

  case 9: /* brackets: '[' INTEGER ']'  */
#line 124 "my_language.y"
                           {
            if ((yyvsp[-1].int_value) < 0) {
                yyerror("Dimensiune negativa a array-ului");
            } 
         }
#line 1493 "./headers/my_language.tab.c"
    break;

  case 10: /* initialization_list: initialization_list_int  */
#line 131 "my_language.y"
                                              {
                        strcpy(arr_type, "int");
                        (yyval.str_value) = strrev((yyvsp[0].str_value));
                    }
#line 1502 "./headers/my_language.tab.c"
    break;

  case 11: /* initialization_list: initialization_list_float  */
#line 135 "my_language.y"
                                                {
                        strcpy(arr_type, "float");
                        (yyval.str_value) = strrev((yyvsp[0].str_value));
                    }
#line 1511 "./headers/my_language.tab.c"
    break;

  case 12: /* initialization_list: initialization_list_bool  */
#line 139 "my_language.y"
                                               {
                        strcpy(arr_type, "bool");
                        (yyval.str_value) = strrev((yyvsp[0].str_value));
                    }
#line 1520 "./headers/my_language.tab.c"
    break;

  case 13: /* initialization_list: initialization_list_char  */
#line 143 "my_language.y"
                                               {
                        strcpy(arr_type, "char");
                        (yyval.str_value) = strrev((yyvsp[0].str_value));
                    }
#line 1529 "./headers/my_language.tab.c"
    break;

  case 14: /* initialization_list: initialization_list_string  */
#line 147 "my_language.y"
                                                 {
                        strcpy(arr_type, "string");
                        (yyval.str_value) = strrev((yyvsp[0].str_value));
                    }
#line 1538 "./headers/my_language.tab.c"
    break;

  case 15: /* initialization_list_int: INTEGER ',' initialization_list_int  */
#line 153 "my_language.y"
                                                              {
                            element[0] = '\0';
                            sprintf(element, "%d", (yyvsp[-2].int_value)); 
                            strcat(init_list, element);
                            strcat(init_list, " ");
                            (yyval.str_value) = strdup(init_list);
                        }
#line 1550 "./headers/my_language.tab.c"
    break;

  case 16: /* initialization_list_int: INTEGER  */
#line 160 "my_language.y"
                                  {
                            element[0] = '\0';
                            sprintf(element, "%d", (yyvsp[0].int_value));
                            strcat(init_list, " ");
                            strcat(init_list, element); 
                            strcat(init_list, " ");
                            (yyval.str_value) = strdup(init_list);
                        }
#line 1563 "./headers/my_language.tab.c"
    break;

  case 17: /* initialization_list_float: FLOAT ',' initialization_list_float  */
#line 170 "my_language.y"
                                                                {
                            element[0] = '\0';
                            sprintf(element, "%f", (yyvsp[-2].float_value)); 
                            strcat(init_list, element);
                            strcat(init_list, " ");
                            (yyval.str_value) = strdup(init_list);
                          }
#line 1575 "./headers/my_language.tab.c"
    break;

  case 18: /* initialization_list_float: FLOAT  */
#line 177 "my_language.y"
                                  {
                            element[0] = '\0';
                            sprintf(element, "%f", (yyvsp[0].float_value));
                            strcat(init_list, " ");
                            strcat(init_list, element); 
                            strcat(init_list, " ");
                            (yyval.str_value) = strdup(init_list);
                          }
#line 1588 "./headers/my_language.tab.c"
    break;

  case 19: /* initialization_list_bool: BOOLEAN ',' initialization_list_bool  */
#line 187 "my_language.y"
                                                                {
                            element[0] = '\0';
                            sprintf(element, "%s", (yyvsp[-2].boolean_value) ? "true" : "false");
                            strcat(init_list, element); 
                            strcat(init_list, " ");
                            (yyval.str_value) = strdup(init_list);
                         }
#line 1600 "./headers/my_language.tab.c"
    break;

  case 20: /* initialization_list_bool: BOOLEAN  */
#line 194 "my_language.y"
                                  {
                            element[0] = '\0';
                            sprintf(element, "%s", (yyvsp[0].boolean_value) ? "true" : "false");
                            strcat(init_list, " ");
                            strcat(init_list, element);
                            strcat(init_list, " "); 
                            (yyval.str_value) = strdup(init_list);
                        }
#line 1613 "./headers/my_language.tab.c"
    break;

  case 21: /* initialization_list_char: CHAR ',' initialization_list_char  */
#line 204 "my_language.y"
                                                             {
                            element[0] = '\0';
                            sprintf(element, "%c", (yyvsp[-2].char_value)); 
                            strcat(init_list, element);
                            strcat(init_list, " ");
                            (yyval.str_value) = strdup(init_list);
                        }
#line 1625 "./headers/my_language.tab.c"
    break;

  case 22: /* initialization_list_char: CHAR  */
#line 211 "my_language.y"
                               {
                            element[0] = '\0';
                            sprintf(element, "%c", (yyvsp[0].char_value));
                            strcat(init_list, " ");
                            strcat(init_list, element);
                            strcat(init_list, " "); 
                            (yyval.str_value) = strdup(init_list);
                        }
#line 1638 "./headers/my_language.tab.c"
    break;

  case 23: /* initialization_list_string: STRING ',' initialization_list_string  */
#line 221 "my_language.y"
                                                                   {
                                element[0] = '\0';
                                sprintf(element, "%s", (yyvsp[-2].str_value));
                                strcat(init_list, element); 
                                strcat(init_list, " ");
                                (yyval.str_value) = strdup(init_list);
                            }
#line 1650 "./headers/my_language.tab.c"
    break;

  case 24: /* initialization_list_string: STRING  */
#line 228 "my_language.y"
                                     {
                                element[0] = '\0';
                                sprintf(element, "%s", (yyvsp[0].str_value));
                                strcat(init_list, " ");
                                strcat(init_list, element); 
                                strcat(init_list, " ");
                                (yyval.str_value) = strdup(init_list);
                            }
#line 1663 "./headers/my_language.tab.c"
    break;

  case 28: /* function_declaration: TIP ID '(' ')'  */
#line 243 "my_language.y"
                                       { 
                        strcpy(scope, (yyvsp[-2].str_value));
                        insertFunction((yyvsp[-3].str_value), (yyvsp[-2].str_value), "");
                        var_type[0] = '\0';
                     }
#line 1673 "./headers/my_language.tab.c"
    break;

  case 29: /* function_declaration: TIP ID '(' param_list ')'  */
#line 248 "my_language.y"
                                                 { 
                        strcpy(scope, (yyvsp[-3].str_value)); 
                        insertFunction((yyvsp[-4].str_value), (yyvsp[-3].str_value), strrev(var_type));
                        var_type[0] = '\0';
                     }
#line 1683 "./headers/my_language.tab.c"
    break;

  case 30: /* param_list: TIP ID ',' param_list  */
#line 255 "my_language.y"
                                   {
                strcat(var_type, (yyvsp[-3].str_value));
                strcat(var_type, " ");
           }
#line 1692 "./headers/my_language.tab.c"
    break;

  case 31: /* param_list: TIP ID brackets ',' param_list  */
#line 259 "my_language.y"
                                            {
                char tmp[50];
                sprintf(tmp, "%s[]", (yyvsp[-4].str_value));
                strcat(var_type, tmp);
                strcat(var_type, " ");
           }
#line 1703 "./headers/my_language.tab.c"
    break;

  case 32: /* param_list: TIP ID  */
#line 265 "my_language.y"
                    {
                strcat(var_type, (yyvsp[-1].str_value));
                strcat(var_type, " ");
           }
#line 1712 "./headers/my_language.tab.c"
    break;

  case 33: /* param_list: TIP ID brackets  */
#line 269 "my_language.y"
                             {
                char tmp[50];
                sprintf(tmp, "%s[]", (yyvsp[-2].str_value));
                strcat(var_type, tmp);
                strcat(var_type, " ");
           }
#line 1723 "./headers/my_language.tab.c"
    break;

  case 36: /* function_statement: TIP ID ASSIGN exp ';'  */
#line 281 "my_language.y"
                                           {
                        if (strcmp(types_arr[0], (yyvsp[-4].str_value)) == 0) {
                            var_name[0] = '\0';
                            insertVar(variables_table, &vars_size, (yyvsp[-3].str_value), (yyvsp[-4].str_value), scope, (yyvsp[-1].address));
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                        types_arr_size = 0;
                    }
#line 1738 "./headers/my_language.tab.c"
    break;

  case 37: /* function_statement: CONST TIP ID ASSIGN exp ';'  */
#line 291 "my_language.y"
                                                  {
                        if (strcmp(types_arr[0], (yyvsp[-4].str_value)) == 0) {
                            var_name[0] = '\0';
                            strcpy(var_name, (yyvsp[-3].str_value));
                            sprintf(var_type, "%s %s", (yyvsp[-5].str_value), (yyvsp[-4].str_value));
                            insertVar(variables_table, &vars_size, var_name, var_type, scope, (yyvsp[-1].address));
                            var_type[0] = '\0';
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                        types_arr_size = 0;
                    }
#line 1756 "./headers/my_language.tab.c"
    break;

  case 38: /* function_statement: ID ASSIGN exp ';'  */
#line 304 "my_language.y"
                                        {
                        if (strcmp(types_arr[0], search_var((yyvsp[-3].str_value), scope)) != 0) {
                            yyerror("Tipuri de date incompatibile");
                        }
                        types_arr_size = 0;
                    }
#line 1767 "./headers/my_language.tab.c"
    break;

  case 39: /* function_statement: ID '[' INTEGER ']' ASSIGN exp ';'  */
#line 310 "my_language.y"
                                                        {
                        if ((yyvsp[-4].int_value) < 0) {
                            yyerror("Index negativ");
                        }
                        if (strstr(search_var((yyvsp[-6].str_value), scope), types_arr[0]) == NULL) {
                            yyerror("Tipuri incompatibile");
                        }
                        types_arr_size = 0;
                    }
#line 1781 "./headers/my_language.tab.c"
    break;

  case 40: /* function_statement: ID '[' ID ']' ASSIGN exp ';'  */
#line 319 "my_language.y"
                                                   {
                        if (strstr(search_var((yyvsp[-4].str_value), scope), "int") == NULL) {
                            yyerror("Index gresit");
                        } 
                        if (strstr(search_var((yyvsp[-4].str_value), scope), "int") && *((int*)get_value((yyvsp[-4].str_value), "int", scope, variables_table, vars_size)) < 0) {
                            yyerror("Index gresit");
                        } 
                        if (strstr(search_var((yyvsp[-6].str_value), scope), types_arr[0]) == NULL) {
                            yyerror("Tipuri incompatibile");
                        }
                        types_arr_size = 0;
                    }
#line 1798 "./headers/my_language.tab.c"
    break;

  case 41: /* function_statement: ID '(' ')' ';'  */
#line 331 "my_language.y"
                                     {
                        search_function((yyvsp[-3].str_value), "");
                    }
#line 1806 "./headers/my_language.tab.c"
    break;

  case 42: /* function_statement: ID '(' params ')' ';'  */
#line 334 "my_language.y"
                                            {
                        search_function((yyvsp[-4].str_value), strrev(var_type)); 
                        var_type[0] = '\0';
                    }
#line 1815 "./headers/my_language.tab.c"
    break;

  case 50: /* classes: CLASS ID '{' class_declarations '}' ';' classes  */
#line 347 "my_language.y"
                                                          { 
            strcpy(scope, (yyvsp[-5].str_value)); 
            update_table(tmp_vars, variables_table, &tmp_size, &vars_size, scope);
            tmp_size = 0;
        }
#line 1825 "./headers/my_language.tab.c"
    break;

  case 54: /* class_declaration: CONST TIP ID ASSIGN exp  */
#line 359 "my_language.y"
                                            {
                        if (strcmp(types_arr[0], (yyvsp[-3].str_value)) == 0) {
                            var_name[0] = '\0';
                            strcat(var_name, (yyvsp[-2].str_value)); 
                            sprintf(var_type, "%s %s", (yyvsp[-4].str_value), (yyvsp[-3].str_value));
                            insertVar(tmp_vars, &tmp_size, var_name, var_type, "", (yyvsp[0].address));
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                        var_type[0] = '\0';
                        types_arr_size = 0;
                  }
#line 1843 "./headers/my_language.tab.c"
    break;

  case 55: /* class_declaration: TIP ID ASSIGN exp  */
#line 372 "my_language.y"
                                      {
                        if (strcmp(types_arr[0], (yyvsp[-3].str_value)) == 0) {
                            var_name[0] = '\0';
                            strcat(var_name, (yyvsp[-2].str_value)); 
                            sprintf(var_type, "%s", (yyvsp[-3].str_value));
                            insertVar(tmp_vars, &tmp_size, var_name, var_type, "", (yyvsp[0].address));
                        }
                        else {
                            yyerror("Tipuri de date incompatibile");
                        }
                        var_type[0] = '\0';
                        types_arr_size = 0;
                  }
#line 1861 "./headers/my_language.tab.c"
    break;

  case 56: /* class_declaration: TIP ID  */
#line 385 "my_language.y"
                           {
                        var_name[0] = '\0';
                        strcat(var_name, (yyvsp[0].str_value)); 
                        sprintf(var_type, "%s", (yyvsp[-1].str_value));
                        result = malloc(sizeof(int)); 
                        *((int*)result) = 0;
                        insertVar(tmp_vars, &tmp_size, var_name, var_type, "", result);
                        var_type[0] = '\0';
                  }
#line 1875 "./headers/my_language.tab.c"
    break;

  case 58: /* class_declaration: TIP ID '(' param_list ')'  */
#line 395 "my_language.y"
                                              {var_type[0] = '\0';}
#line 1881 "./headers/my_language.tab.c"
    break;

  case 59: /* class_declaration: CONST TIP ID brackets  */
#line 396 "my_language.y"
                                          {
                        var_name[0] = '\0';
                        strcat(var_name, (yyvsp[-1].str_value)); 
                        sprintf(var_type, "%s %s[]", (yyvsp[-3].str_value), (yyvsp[-2].str_value));
                        insertVar(tmp_vars, &tmp_size, var_name, var_type, "", "");
                        var_type[0] = '\0';
                  }
#line 1893 "./headers/my_language.tab.c"
    break;

  case 60: /* class_declaration: TIP ID brackets  */
#line 403 "my_language.y"
                                    {
                        var_name[0] = '\0';
                        strcat(var_name, (yyvsp[-1].str_value)); 
                        sprintf(var_type, "%s[]", (yyvsp[-2].str_value));
                        insertVar(tmp_vars, &tmp_size, var_name, var_type, "", "");
                        var_type[0] = '\0';
                  }
#line 1905 "./headers/my_language.tab.c"
    break;

  case 61: /* program: BGIN '(' ')' ':' local_statements END  */
#line 412 "my_language.y"
                                                {printf("Program corect sintactic.\n");}
#line 1911 "./headers/my_language.tab.c"
    break;

  case 64: /* local_statement: TIP ID ASSIGN exp ';'  */
#line 419 "my_language.y"
                                        {
                    if (strcmp(types_arr[0], (yyvsp[-4].str_value)) == 0) {
                        var_name[0] = '\0';
                        strcpy(scope, "main");
                        insertVar(variables_table, &vars_size, (yyvsp[-3].str_value), (yyvsp[-4].str_value), scope, (yyvsp[-1].address));
                    }
                    else {
                        yyerror("Tipuri de date incompatibile");
                    }
                    types_arr_size = 0;
                }
#line 1927 "./headers/my_language.tab.c"
    break;

  case 65: /* local_statement: CONST TIP ID ASSIGN exp ';'  */
#line 430 "my_language.y"
                                              {
                    if (strcmp(types_arr[0], (yyvsp[-4].str_value)) == 0) {
                        var_name[0] = '\0';
                        strcpy(scope, "main");
                        strcpy(var_name, (yyvsp[-3].str_value));
                        sprintf(var_type, "%s %s", (yyvsp[-5].str_value), (yyvsp[-4].str_value));
                        insertVar(variables_table, &vars_size, var_name, var_type, scope, (yyvsp[-1].address));
                        var_type[0] = '\0';
                    }
                    else {
                        yyerror("Tipuri de date incompatibile");
                    }
                    types_arr_size = 0;
                }
#line 1946 "./headers/my_language.tab.c"
    break;

  case 66: /* local_statement: ID ASSIGN exp ';'  */
#line 444 "my_language.y"
                                    {
                    if (strcmp(types_arr[0], search_var((yyvsp[-3].str_value), scope)) != 0) {
                        yyerror("Tipuri de date incompatibile");
                    }
                    types_arr_size = 0;
                }
#line 1957 "./headers/my_language.tab.c"
    break;

  case 67: /* local_statement: ID '[' INTEGER ']' ASSIGN exp ';'  */
#line 450 "my_language.y"
                                                    {
                    if ((yyvsp[-4].int_value) < 0) {
                        yyerror("Index negativ al array-ului");
                    }
                    if (strstr(search_var((yyvsp[-6].str_value), scope), types_arr[0]) == NULL) {
                        yyerror("Tipuri incompatibile");
                    }
                    types_arr_size = 0;
                }
#line 1971 "./headers/my_language.tab.c"
    break;

  case 68: /* local_statement: ID '[' ID ']' ASSIGN exp ';'  */
#line 459 "my_language.y"
                                               {
                    strcpy(scope, "main");
                    if (strstr(search_var((yyvsp[-4].str_value), scope), "int") == NULL) {
                        yyerror("Index gresit");
                    } 
                    if (strstr(search_var((yyvsp[-4].str_value), scope), "int") && *((int*)get_value((yyvsp[-4].str_value), "int", scope, variables_table, vars_size)) < 0) {
                        yyerror("Index gresit");
                    }
                    if (strstr(search_var((yyvsp[-6].str_value), scope), types_arr[0]) == NULL) {
                        yyerror("Tipuri incompatibile");
                    }
                    types_arr_size = 0;
                }
#line 1989 "./headers/my_language.tab.c"
    break;

  case 69: /* local_statement: ID '(' ')' ';'  */
#line 472 "my_language.y"
                                 {
                    search_function((yyvsp[-3].str_value), "");
                }
#line 1997 "./headers/my_language.tab.c"
    break;

  case 70: /* local_statement: ID '(' params ')' ';'  */
#line 475 "my_language.y"
                                        {
                    search_function((yyvsp[-4].str_value), strrev(var_type));
                    var_type[0] = '\0';
                }
#line 2006 "./headers/my_language.tab.c"
    break;

  case 78: /* init: TIP ID ASSIGN exp  */
#line 488 "my_language.y"
                         {
        if (strcmp(types_arr[0], (yyvsp[-3].str_value)) == 0) {
            var_name[0] = '\0'; 
            strcpy(var_name, (yyvsp[-2].str_value));
            sprintf(var_type, "%s", (yyvsp[-3].str_value));
            insertVar(variables_table, &vars_size, var_name, var_type, "main", (yyvsp[0].address));
            var_type[0] ='\0';
        }
        else {
            yyerror("Tipuri de date incompatibile");
        }
        types_arr_size = 0;
     }
#line 2024 "./headers/my_language.tab.c"
    break;

  case 82: /* increment: ID ASSIGN exp  */
#line 507 "my_language.y"
                          {types_arr_size = 0;}
#line 2030 "./headers/my_language.tab.c"
    break;

  case 86: /* param: ID '(' ')'  */
#line 515 "my_language.y"
                   {
        strcat(var_type, search_function((yyvsp[-2].str_value), ""));
        strcat(var_type, " ");
      }
#line 2039 "./headers/my_language.tab.c"
    break;

  case 87: /* param: ID '[' INTEGER ']'  */
#line 519 "my_language.y"
                           {
        if ((yyvsp[-1].int_value) > 0) {
            strncpy(msg, search_var((yyvsp[-3].str_value), scope), strlen(search_var((yyvsp[-3].str_value), scope)) - 2);
            strcat(msg, "\0");
            strcat(var_type, msg);
            strcat(var_type, " ");
        }
        else {
            yyerror("Index negativ");
        }
      }
#line 2055 "./headers/my_language.tab.c"
    break;

  case 88: /* param: ID '[' ID ']'  */
#line 530 "my_language.y"
                      {
         if (strstr(search_var((yyvsp[-1].str_value), scope), "int") == NULL) {
            yyerror("Index gresit");
        } 
        if (strstr(search_var((yyvsp[-1].str_value), scope), "int") && *((int*)get_value((yyvsp[-1].str_value), "int", scope, variables_table, vars_size)) < 0) {
            yyerror("Index negativ");
        }
        strncpy(msg, search_var((yyvsp[-3].str_value), scope), strlen(search_var((yyvsp[-3].str_value), scope)) - 2);
        strcat(msg, "\0");
        strcat(var_type, msg);
        strcat(var_type, " ");
      }
#line 2072 "./headers/my_language.tab.c"
    break;

  case 89: /* param: exp  */
#line 542 "my_language.y"
            {
        strcat(var_type, types_arr[0]); 
        strcat(var_type, " ");
        types_arr_size = 0;
      }
#line 2082 "./headers/my_language.tab.c"
    break;

  case 90: /* exp: aexp  */
#line 549 "my_language.y"
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
#line 2102 "./headers/my_language.tab.c"
    break;

  case 91: /* exp: bexp  */
#line 564 "my_language.y"
           {
        printf("S-a recunoscut valoarea booleana: %s.\n", (yyvsp[0].boolean_value) ? "true" : "false");
        boolean = (yyvsp[0].boolean_value); 
        result = (void*)(malloc(sizeof(bool))); 
        memcpy(result, &boolean, sizeof(bool)); 
        strcpy(types_arr[0], "bool");
        (yyval.address) = result;    
    }
#line 2115 "./headers/my_language.tab.c"
    break;

  case 92: /* exp: str  */
#line 572 "my_language.y"
          {
        printf("S-a recunoscut sirul %s.\n", (yyvsp[0].str_value));
        string = strdup((yyvsp[0].str_value)); 
        result = (void*)(malloc(strlen(string) + 1)); 
        memcpy(result, string, strlen(string));
        strcpy(types_arr[0], "string");
        (yyval.address) = result;
    }
#line 2128 "./headers/my_language.tab.c"
    break;

  case 93: /* exp: CHAR  */
#line 580 "my_language.y"
           {
        printf("S-a recunoscut caracterul %c.\n", (yyvsp[0].char_value));
        character = (yyvsp[0].char_value); 
        result = (void*)(malloc(sizeof(char))); 
        memcpy(result, &character, sizeof(char));
        strcpy(types_arr[0], "char");
        (yyval.address) = result;
    }
#line 2141 "./headers/my_language.tab.c"
    break;

  case 94: /* aexp: aexp '+' aexp  */
#line 590 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2168 "./headers/my_language.tab.c"
    break;

  case 95: /* aexp: '(' aexp '+' aexp ')'  */
#line 612 "my_language.y"
                            {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2195 "./headers/my_language.tab.c"
    break;

  case 96: /* aexp: aexp '-' aexp  */
#line 634 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2222 "./headers/my_language.tab.c"
    break;

  case 97: /* aexp: '(' aexp '-' aexp ')'  */
#line 656 "my_language.y"
                            {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2249 "./headers/my_language.tab.c"
    break;

  case 98: /* aexp: aexp '*' aexp  */
#line 678 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2277 "./headers/my_language.tab.c"
    break;

  case 99: /* aexp: '(' aexp '*' aexp ')'  */
#line 701 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2304 "./headers/my_language.tab.c"
    break;

  case 100: /* aexp: aexp '/' aexp  */
#line 723 "my_language.y"
                    {
         if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
                    yyerror("Impartire la 0");
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
                    yyerror("Impartire la 0");  
                }
            }
        }
    }
#line 2342 "./headers/my_language.tab.c"
    break;

  case 101: /* aexp: '(' aexp '/' aexp ')'  */
#line 756 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
                    yyerror("Impartire la 0"); 
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
                    yyerror("Impartire la 0");  
                }
            }
        }
    }
#line 2380 "./headers/my_language.tab.c"
    break;

  case 102: /* aexp: aexp '%' aexp  */
#line 789 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2408 "./headers/my_language.tab.c"
    break;

  case 103: /* aexp: '(' aexp '%' aexp ')'  */
#line 812 "my_language.y"
                            {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2436 "./headers/my_language.tab.c"
    break;

  case 104: /* aexp: aexp '^' aexp  */
#line 835 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2463 "./headers/my_language.tab.c"
    break;

  case 105: /* aexp: '(' aexp '^' aexp ')'  */
#line 857 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2490 "./headers/my_language.tab.c"
    break;

  case 106: /* aexp: INTEGER  */
#line 879 "my_language.y"
              {
        strcpy(types_arr[types_arr_size++], "int"); 
        inum = (yyvsp[0].int_value); 
        result = malloc(sizeof(int)); 
        memcpy(result, &inum, sizeof(int));
        (yyval.address) = result;
    }
#line 2502 "./headers/my_language.tab.c"
    break;

  case 107: /* aexp: FLOAT  */
#line 886 "my_language.y"
            {
        strcpy(types_arr[types_arr_size++], "float"); 
        fnum = (yyvsp[0].float_value); 
        result = malloc(sizeof(float)); 
        memcpy(result, &fnum, sizeof(float));
        (yyval.address) = result;
    }
#line 2514 "./headers/my_language.tab.c"
    break;

  case 108: /* aexp: ID  */
#line 893 "my_language.y"
         {
        if (strcmp(search_var((yyvsp[0].str_value), scope), "undefined") == 0) {
            sprintf(msg, "%s %s %s", "Variabila", (yyvsp[0].str_value), "nu este declarata");
            yyerror(msg); 
        }
        else {
            strcpy(types_arr[types_arr_size++], search_var((yyvsp[0].str_value), scope));
            if (strcmp(search_var((yyvsp[0].str_value), scope), "int") == 0) {
                result = malloc(sizeof(int));
                memcpy(result, get_value((yyvsp[0].str_value), search_var((yyvsp[0].str_value), scope), scope, variables_table, vars_size), sizeof(int));
            }
            else {
                result = malloc(sizeof(float)); 
                memcpy(result, get_value((yyvsp[0].str_value), search_var((yyvsp[0].str_value), scope), scope, variables_table, vars_size), sizeof(float)); 
            }
            (yyval.address) = result;
        }
    }
#line 2537 "./headers/my_language.tab.c"
    break;

  case 109: /* bexp: aexp '<' aexp  */
#line 913 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2559 "./headers/my_language.tab.c"
    break;

  case 110: /* bexp: '(' aexp '<' aexp ')'  */
#line 930 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2581 "./headers/my_language.tab.c"
    break;

  case 111: /* bexp: aexp '>' aexp  */
#line 947 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2603 "./headers/my_language.tab.c"
    break;

  case 112: /* bexp: '(' aexp '>' aexp ')'  */
#line 964 "my_language.y"
                           {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2625 "./headers/my_language.tab.c"
    break;

  case 113: /* bexp: aexp LTE aexp  */
#line 981 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2647 "./headers/my_language.tab.c"
    break;

  case 114: /* bexp: '(' aexp LTE aexp ')'  */
#line 998 "my_language.y"
                             {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2669 "./headers/my_language.tab.c"
    break;

  case 115: /* bexp: aexp GTE aexp  */
#line 1015 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2691 "./headers/my_language.tab.c"
    break;

  case 116: /* bexp: '(' aexp GTE aexp ')'  */
#line 1032 "my_language.y"
                             {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2713 "./headers/my_language.tab.c"
    break;

  case 117: /* bexp: aexp EQ aexp  */
#line 1049 "my_language.y"
                    {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2735 "./headers/my_language.tab.c"
    break;

  case 118: /* bexp: '(' aexp EQ aexp ')'  */
#line 1066 "my_language.y"
                            {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2757 "./headers/my_language.tab.c"
    break;

  case 119: /* bexp: aexp NEQ aexp  */
#line 1083 "my_language.y"
                     {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2779 "./headers/my_language.tab.c"
    break;

  case 120: /* bexp: '(' aexp NEQ aexp ')'  */
#line 1100 "my_language.y"
                             {
        if (!checkTypes()) {
            yyerror("Operanzii din expresie nu au acelasi tip");
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
#line 2801 "./headers/my_language.tab.c"
    break;

  case 121: /* bexp: bexp AND bexp  */
#line 1117 "my_language.y"
                     {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) && (yyvsp[0].boolean_value));}
#line 2807 "./headers/my_language.tab.c"
    break;

  case 122: /* bexp: '(' bexp AND bexp ')'  */
#line 1118 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) && (yyvsp[-1].boolean_value));}
#line 2813 "./headers/my_language.tab.c"
    break;

  case 123: /* bexp: bexp OR bexp  */
#line 1119 "my_language.y"
                    {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) || (yyvsp[0].boolean_value));}
#line 2819 "./headers/my_language.tab.c"
    break;

  case 124: /* bexp: '(' bexp OR bexp ')'  */
#line 1120 "my_language.y"
                            {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) || (yyvsp[-1].boolean_value));}
#line 2825 "./headers/my_language.tab.c"
    break;

  case 125: /* bexp: bexp EQ bexp  */
#line 1121 "my_language.y"
                    {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) == (yyvsp[0].boolean_value));}
#line 2831 "./headers/my_language.tab.c"
    break;

  case 126: /* bexp: '(' bexp EQ bexp ')'  */
#line 1122 "my_language.y"
                            {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) == (yyvsp[-1].boolean_value));}
#line 2837 "./headers/my_language.tab.c"
    break;

  case 127: /* bexp: bexp NEQ bexp  */
#line 1123 "my_language.y"
                     {(yyval.boolean_value) = ((yyvsp[-2].boolean_value) != (yyvsp[0].boolean_value));}
#line 2843 "./headers/my_language.tab.c"
    break;

  case 128: /* bexp: '(' bexp NEQ bexp ')'  */
#line 1124 "my_language.y"
                             {(yyval.boolean_value) = ((yyvsp[-3].boolean_value) != (yyvsp[-1].boolean_value));}
#line 2849 "./headers/my_language.tab.c"
    break;

  case 129: /* bexp: '!' bexp  */
#line 1125 "my_language.y"
                {(yyval.boolean_value) = (!(yyvsp[0].boolean_value));}
#line 2855 "./headers/my_language.tab.c"
    break;

  case 130: /* bexp: BOOLEAN  */
#line 1126 "my_language.y"
               {(yyval.boolean_value) = (yyvsp[0].boolean_value);}
#line 2861 "./headers/my_language.tab.c"
    break;

  case 131: /* str: str '+' str  */
#line 1129 "my_language.y"
                  {
        char *s = strdup((yyvsp[-2].str_value)); 
        strcat(s, (yyvsp[0].str_value)); 
        (yyval.str_value) = s;        
    }
#line 2871 "./headers/my_language.tab.c"
    break;

  case 132: /* str: str '^' aexp  */
#line 1134 "my_language.y"
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
        else {
            yyerror("Exponentul nu este de tip intreg");
        }

    }
#line 2894 "./headers/my_language.tab.c"
    break;

  case 133: /* str: str '%' str  */
#line 1152 "my_language.y"
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
#line 2912 "./headers/my_language.tab.c"
    break;

  case 134: /* str: STRING  */
#line 1165 "my_language.y"
              {(yyval.str_value) = strdup((yyvsp[0].str_value));}
#line 2918 "./headers/my_language.tab.c"
    break;


#line 2922 "./headers/my_language.tab.c"

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

#line 1167 "my_language.y"


int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* fptr_vars = fopen(argv[2], "w");
    FILE* fptr_fct = fopen(argv[3], "w");
    yyparse();

    print_symbol_table(fptr_vars);

    print_functions_table(fptr_fct);

    fclose(fptr_vars);

    fclose(fptr_fct);

    int x, y, z;

    printf("Enter the value for x: "); 
    scanf("%d", &x);
    printf("Enter the value for y: "); 
    scanf("%d", &y);
    printf("Enter the value for z: "); 
    scanf("%d", &z);

    AstNode* node1 = new_ast_node(AST_VAR, x, NULL, NULL); 
    AstNode* node2 = new_ast_node(AST_INTEGER, 5, NULL, NULL);
    AstNode* node3 = new_ast_node(AST_VAR, y, NULL, NULL);
    AstNode* node4 = new_ast_node(AST_VAR, z, NULL, NULL);
    AstNode* node5 = new_ast_node(AST_MULTIPLY, 0, node2, node3);
    AstNode* node6 = new_ast_node(AST_PLUS, 0, node1, node5);
    AstNode* root = new_ast_node(AST_DIVIDE, 0, node6, node4);

    /* (x + 5 * y) / z */

    int result = eval_ast(root);
    printf("Rezultat evaluare AST: %d\n", result);  
    
    free_ast(root);

    TypeNode* a = new_node(PINT, NULL, NULL);
    TypeNode* b = new_node(PCHAR, NULL, NULL);
    TypeNode* c = new_node(PINT, NULL, NULL);
    TypeNode* plus = new_node(PLUS, a, b); 
    TypeNode* type = new_node(MULTIPLY, c, plus);

    ValueType result_type = TypeOf(type);
    print_type(result_type);

    return 0;
} 
