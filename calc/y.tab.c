/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "a.y"

    #include "TabSim.c"
    #include "Vector.c"
    
    #define M_PI 3.14159265358979323846
    #define M_EULER 2.71828182845904523536
    #define M_G 6.67430E-11
    #define M_K 8.9875517923E9
    #define M_ELECTRON -1.60218E-19
    #define M_VLUZ 3E8

    simbolo * t;
    simboloVector * v;

    int yylex(void);
    int yyerror();

    int factorial(int);
    int mcd(int, int);
    int mcm(int, int);
    
    void sumaVector(double * target, double * a, double * b);
    void escalarVector(double * target, double * a, double esc);
    double productoInterno(double * a, double * b);
    int nthPrimo(int n);
    int nthFibonacci(int n);
    void productoVectorial(double * target, double * a, double * b);
    void imprimirConstantes();

#line 100 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    NUMERO = 258,
    ID = 259,
    VECT = 260,
    VECTOR = 261,
    ASIG = 262,
    PRINT = 263,
    PRINTD = 264,
    INFO = 265,
    INFOD = 266,
    LIST = 267,
    LISTD = 268,
    CANONI = 269,
    CANONJ = 270,
    CANONK = 271,
    CONSTANTES = 272,
    CLEAR = 273,
    TO = 274,
    PI = 275,
    EULER = 276,
    GRAVITACIONAL = 277,
    COULOMB = 278,
    ELECTRON = 279,
    PROTON = 280,
    NEUTRON = 281,
    VLUZ = 282,
    KILO = 283,
    METRO = 284,
    COS = 285,
    SIN = 286,
    TAN = 287,
    ACOS = 288,
    ASIN = 289,
    ATAN = 290,
    COSH = 291,
    SINH = 292,
    TANH = 293,
    ACOSH = 294,
    ASINH = 295,
    ATANH = 296,
    ABS = 297,
    LN = 298,
    SQRT = 299,
    CEIL = 300,
    FLOOR = 301,
    RND = 302,
    MCD = 303,
    EXP = 304,
    LOG = 305,
    MCM = 306,
    DISTANCE = 307,
    NTHPRI = 308,
    NTHFIB = 309,
    VPROD = 310
  };
#endif
/* Tokens.  */
#define NUMERO 258
#define ID 259
#define VECT 260
#define VECTOR 261
#define ASIG 262
#define PRINT 263
#define PRINTD 264
#define INFO 265
#define INFOD 266
#define LIST 267
#define LISTD 268
#define CANONI 269
#define CANONJ 270
#define CANONK 271
#define CONSTANTES 272
#define CLEAR 273
#define TO 274
#define PI 275
#define EULER 276
#define GRAVITACIONAL 277
#define COULOMB 278
#define ELECTRON 279
#define PROTON 280
#define NEUTRON 281
#define VLUZ 282
#define KILO 283
#define METRO 284
#define COS 285
#define SIN 286
#define TAN 287
#define ACOS 288
#define ASIN 289
#define ATAN 290
#define COSH 291
#define SINH 292
#define TANH 293
#define ACOSH 294
#define ASINH 295
#define ATANH 296
#define ABS 297
#define LN 298
#define SQRT 299
#define CEIL 300
#define FLOOR 301
#define RND 302
#define MCD 303
#define EXP 304
#define LOG 305
#define MCM 306
#define DISTANCE 307
#define NTHPRI 308
#define NTHFIB 309
#define VPROD 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "a.y"

    double numero;
    simbolo * ptrSimbolo;

    double vector[3];
    simboloVector * ptrSimboloVector;

#line 267 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
typedef yytype_uint8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  239

#define YYUNDEFTOK  2
#define YYMAXUTOK   310


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    60,     2,     2,
      64,    65,    58,    56,    67,    57,     2,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    63,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    66,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    84,    88,
      93,    99,   105,   106,   107,   109,   110,   111,   112,   120,
     121,   122,   123,   124,   126,   127,   128,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   155,   156,
     157,   158,   159,   160,   167,   168,   169,   171,   172,   174,
     175,   176,   177,   178,   179,   180,   181,   183,   184,   186,
     187,   188,   189,   190,   195,   196,   197,   198,   199
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERO", "ID", "VECT", "VECTOR", "ASIG",
  "PRINT", "PRINTD", "INFO", "INFOD", "LIST", "LISTD", "CANONI", "CANONJ",
  "CANONK", "CONSTANTES", "CLEAR", "TO", "PI", "EULER", "GRAVITACIONAL",
  "COULOMB", "ELECTRON", "PROTON", "NEUTRON", "VLUZ", "KILO", "METRO",
  "COS", "SIN", "TAN", "ACOS", "ASIN", "ATAN", "COSH", "SINH", "TANH",
  "ACOSH", "ASINH", "ATANH", "ABS", "LN", "SQRT", "CEIL", "FLOOR", "RND",
  "MCD", "EXP", "LOG", "MCM", "DISTANCE", "NTHPRI", "NTHFIB", "VPROD",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'!'", "';'", "'('", "')'",
  "'|'", "','", "'['", "']'", "$accept", "S", "A", "AV", "E", "V", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    43,    45,    42,    47,
      37,    94,    33,    59,    40,    41,   124,    44,    91,    93
};
# endif

#define YYPACT_NINF (-56)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -56,   248,   -56,   -43,   -56,    29,   -56,   712,   -41,   -29,
     -22,    38,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -26,     2,    35,    39,    40,    56,    61,    62,    63,    64,
      69,    78,    81,    94,   100,   103,   116,   118,   119,   133,
     134,   141,   152,   154,   156,   157,   303,   303,   303,   303,
      80,   105,     0,    -7,   -56,   358,   159,   160,   413,   161,
     171,   174,   210,   226,   -56,   -56,   -56,   -56,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   -56,     3,   -55,   186,   170,     7,
     153,    99,   -46,   -56,   -56,   183,   184,   303,   303,   303,
     303,   303,   303,   -56,   187,   192,   303,   303,   303,   236,
     -56,   673,   -56,   -56,   185,   -56,   673,     7,   -56,   -56,
     303,   303,   303,   180,   426,   436,   446,   456,   466,   476,
     486,   496,   506,   516,   526,   536,   104,   546,   556,   566,
     576,    57,    79,   586,    92,   117,   129,   -25,   596,   606,
      65,   -56,   -56,   -56,    15,   -56,   -56,   303,   -56,   -56,
     -56,   -55,   -55,    -9,   -56,    -9,    -9,    -9,   -56,   -56,
     186,   186,   -56,   673,   673,   673,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   303,   303,   -56,   303,   303,   303,
     303,   -56,   -56,   303,   237,   238,   -32,   616,   626,   636,
     646,   656,   137,   415,   229,   231,   303,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,    36,   -56
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      17,     0,     1,     0,    78,    77,    88,    87,     0,     0,
       0,     0,    69,    76,    70,    71,    73,    74,    75,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    12,    13,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    87,    31,    85,     0,     0,
       0,     0,     0,     2,     7,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,    77,
      19,    18,     3,     4,    87,    21,     0,    20,     8,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    29,    50,    62,     0,    81,     5,
       6,    25,    26,    27,    84,    28,    32,    30,    10,    11,
      82,    83,    60,    22,    23,    24,    37,    41,    45,    38,
      42,    46,    39,    43,    47,    40,    44,    48,    49,    61,
      52,    54,    55,    56,     0,     0,    51,     0,     0,     0,
       0,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    57,    58,
      53,    59,    64,    63,    86,    67,    68,     0,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,   207,   205,    -1,    54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    50,    51,   126,    99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,   114,   115,   109,   110,   111,   112,   113,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   161,   162,   163,
      54,   167,    64,   168,   107,   108,   109,   110,   111,   112,
     113,   116,   117,   118,    65,   226,    55,   227,    68,    56,
      57,    66,   210,   214,   215,    96,    98,   100,   102,   116,
     117,   118,   112,   113,   121,    53,   107,   108,   109,   110,
     111,   112,   113,   116,   117,   118,    69,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     158,   159,   107,   108,   109,   110,   111,   112,   113,    70,
      97,    67,   101,    71,    72,   238,   171,   172,   173,   175,
     176,   177,   127,   107,   108,   109,   110,   111,   112,   113,
      73,   116,   117,   118,   204,    74,    75,    76,    77,   183,
     184,   185,   213,    78,   146,   107,   108,   109,   110,   111,
     112,   113,    79,   103,   157,    80,   205,   160,   107,   108,
     109,   110,   111,   112,   113,   116,   117,   118,    81,   207,
     116,   117,   118,   174,    82,   166,   216,    83,   104,   199,
     180,   181,   182,   107,   108,   109,   110,   111,   112,   113,
      84,   130,    85,    86,   208,   107,   108,   109,   110,   111,
     112,   113,    58,   116,   117,   118,   209,    87,    88,    61,
      62,    63,   233,   217,   218,    89,   219,   220,   221,   107,
     108,   109,   110,   111,   112,   113,    90,   131,    91,   165,
      92,    93,   122,   123,   128,   237,   107,   108,   109,   110,
     111,   112,   113,   132,   129,   164,   107,   108,   109,   110,
     111,   112,   113,    55,   118,   186,   169,   170,     2,     3,
     178,     4,     5,     6,     7,   179,   224,   225,   235,   236,
       8,     9,   120,   125,   222,    10,    11,   223,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,    46,     4,    94,     6,    95,
       0,     0,    47,     0,    48,     0,    49,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
      46,     4,   119,     6,    95,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     0,    46,     4,    94,     6,   124,
       0,     0,    47,     0,    48,     0,    49,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     0,
      46,   116,   117,   118,     0,     0,     0,    47,     0,    48,
     234,    49,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   187,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   188,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   189,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   190,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   191,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   192,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   193,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   194,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   195,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   196,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   197,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   198,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   200,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   201,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   202,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   203,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   206,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   211,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   212,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   228,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   229,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   230,   107,   108,   109,   110,   111,   112,   113,     0,
       0,   231,   107,   108,   109,   110,   111,   112,   113,    58,
       0,   232,    59,    60,     0,     0,    61,    62,    63,   107,
     108,   109,   110,   111,   112,   113
};

static const yytype_int16 yycheck[] =
{
       1,     8,     9,    58,    59,    60,    61,    62,     8,     9,
      56,    57,    58,    59,    60,    61,    62,    14,    15,    16,
      63,    67,    63,    69,    56,    57,    58,    59,    60,    61,
      62,    56,    57,    58,    63,    67,     7,    69,    64,    10,
      11,    63,    67,    28,    29,    46,    47,    48,    49,    56,
      57,    58,    61,    62,    55,     1,    56,    57,    58,    59,
      60,    61,    62,    56,    57,    58,    64,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    56,    57,    58,    59,    60,    61,    62,    64,
      46,    63,    48,    64,    64,    69,   107,   108,   109,   110,
     111,   112,    58,    56,    57,    58,    59,    60,    61,    62,
      64,    56,    57,    58,    67,    64,    64,    64,    64,   130,
     131,   132,    67,    64,    80,    56,    57,    58,    59,    60,
      61,    62,    64,    63,    90,    64,    67,    93,    56,    57,
      58,    59,    60,    61,    62,    56,    57,    58,    64,    67,
      56,    57,    58,   109,    64,    66,   167,    64,    63,    65,
     116,   117,   118,    56,    57,    58,    59,    60,    61,    62,
      64,     7,    64,    64,    67,    56,    57,    58,    59,    60,
      61,    62,     7,    56,    57,    58,    67,    64,    64,    14,
      15,    16,    65,   204,   205,    64,   207,   208,   209,    56,
      57,    58,    59,    60,    61,    62,    64,     7,    64,    66,
      64,    64,    63,    63,    63,   226,    56,    57,    58,    59,
      60,    61,    62,     7,    63,    65,    56,    57,    58,    59,
      60,    61,    62,     7,    58,    65,    63,    63,     0,     1,
      63,     3,     4,     5,     6,    63,    19,    19,    29,    28,
      12,    13,    55,    58,   210,    17,    18,   213,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,     3,     4,     5,     6,
      -1,    -1,    64,    -1,    66,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,     3,     4,     5,     6,    -1,    -1,    64,    -1,    66,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,     3,     4,     5,     6,
      -1,    -1,    64,    -1,    66,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    56,    57,    58,    -1,    -1,    -1,    64,    -1,    66,
      65,    68,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    56,    57,    58,    59,    60,    61,    62,     7,
      -1,    65,    10,    11,    -1,    -1,    14,    15,    16,    56,
      57,    58,    59,    60,    61,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    71,     0,     1,     3,     4,     5,     6,    12,    13,
      17,    18,    20,    21,    22,    23,    24,    25,    26,    27,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    57,    64,    66,    68,
      72,    73,    74,    75,    63,     7,    10,    11,     7,    10,
      11,    14,    15,    16,    63,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,     4,     6,    74,    75,    74,    75,
      74,    75,    74,    63,    63,     8,     9,    56,    57,    58,
      59,    60,    61,    62,     8,     9,    56,    57,    58,     4,
      72,    74,    63,    63,     6,    73,    74,    75,    63,    63,
       7,     7,     7,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    74,    74,
      75,    14,    15,    16,    65,    66,    66,    67,    69,    63,
      63,    74,    74,    74,    75,    74,    74,    74,    63,    63,
      75,    75,    75,    74,    74,    74,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    67,    67,    65,    67,    67,    67,
      67,    65,    65,    67,    28,    29,    74,    74,    74,    74,
      74,    74,    75,    75,    19,    19,    67,    69,    65,    65,
      65,    65,    65,    65,    65,    29,    28,    74,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      73,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     4,     4,     4,     4,     3,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     0,     3,     3,
       3,     3,     4,     4,     4,     3,     3,     3,     3,     3,
       3,     2,     3,     2,     2,     2,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     4,     4,     6,     4,     4,     4,     6,     6,     6,
       3,     4,     3,     6,     6,     4,     4,     6,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       5,     3,     3,     3,     3,     2,     6,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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
  case 2:
#line 67 "a.y"
                                { ; }
#line 1687 "y.tab.c"
    break;

  case 3:
#line 68 "a.y"
                                { printf("%s = %g\n",(yyvsp[-2].ptrSimbolo)->nombre, (yyvsp[-2].ptrSimbolo)->valor); }
#line 1693 "y.tab.c"
    break;

  case 4:
#line 69 "a.y"
                                { printf("%s = %f\n",(yyvsp[-2].ptrSimbolo)->nombre, (yyvsp[-2].ptrSimbolo)->valor); }
#line 1699 "y.tab.c"
    break;

  case 5:
#line 70 "a.y"
                                { printf("%g\n", (yyvsp[-2].numero)); }
#line 1705 "y.tab.c"
    break;

  case 6:
#line 71 "a.y"
                                { printf("%f\n", (yyvsp[-2].numero)); }
#line 1711 "y.tab.c"
    break;

  case 7:
#line 72 "a.y"
                                { ; }
#line 1717 "y.tab.c"
    break;

  case 8:
#line 73 "a.y"
                                { printf("%s = [%g, %g, %g]\n",(yyvsp[-2].ptrSimboloVector)->nombre, (yyvsp[-2].ptrSimboloVector)->valor[0], (yyvsp[-2].ptrSimboloVector)->valor[1], (yyvsp[-2].ptrSimboloVector)->valor[2]); }
#line 1723 "y.tab.c"
    break;

  case 9:
#line 74 "a.y"
                                { printf("%s = [%f, %f, %f]\n",(yyvsp[-2].ptrSimboloVector)->nombre, (yyvsp[-2].ptrSimboloVector)->valor[0], (yyvsp[-2].ptrSimboloVector)->valor[1], (yyvsp[-2].ptrSimboloVector)->valor[2]); }
#line 1729 "y.tab.c"
    break;

  case 10:
#line 75 "a.y"
                                { printf("%g, %g, %g\n", (yyvsp[-2].vector)[0], (yyvsp[-2].vector)[1], (yyvsp[-2].vector)[2]); }
#line 1735 "y.tab.c"
    break;

  case 11:
#line 76 "a.y"
                                { printf("%f, %f, %f\n", (yyvsp[-2].vector)[0], (yyvsp[-2].vector)[1], (yyvsp[-2].vector)[2]); }
#line 1741 "y.tab.c"
    break;

  case 12:
#line 77 "a.y"
                                { imprimir(t); imprimirVector(v); }
#line 1747 "y.tab.c"
    break;

  case 13:
#line 78 "a.y"
                                { imprimirD(t); imprimirVectorD(v); }
#line 1753 "y.tab.c"
    break;

  case 14:
#line 79 "a.y"
                                { imprimirConstantes(); }
#line 1759 "y.tab.c"
    break;

  case 15:
#line 80 "a.y"
                                { v = NULL; t = NULL; }
#line 1765 "y.tab.c"
    break;

  case 16:
#line 81 "a.y"
                                { yyerrok; }
#line 1771 "y.tab.c"
    break;

  case 18:
#line 84 "a.y"
                                {
                                    (yyval.numero) = (yyvsp[0].numero);
                                    (yyvsp[-2].ptrSimbolo)->valor = (yyvsp[0].numero);
                                }
#line 1780 "y.tab.c"
    break;

  case 19:
#line 88 "a.y"
                                {
                                    (yyval.numero) = (yyvsp[0].numero);
                                    (yyvsp[-2].ptrSimbolo)->valor = (yyvsp[0].numero);
                                }
#line 1789 "y.tab.c"
    break;

  case 20:
#line 93 "a.y"
                                {
                                    memcpy((yyval.vector), (yyvsp[0].vector), 3*sizeof(double));
                                    (yyvsp[-2].ptrSimboloVector)->valor[0] = (yyvsp[0].vector)[0];
                                    (yyvsp[-2].ptrSimboloVector)->valor[1] = (yyvsp[0].vector)[1];
                                    (yyvsp[-2].ptrSimboloVector)->valor[2] = (yyvsp[0].vector)[2];
                                }
#line 1800 "y.tab.c"
    break;

  case 21:
#line 99 "a.y"
                                {
                                    memcpy((yyval.vector), (yyvsp[0].vector), 3*sizeof(double));
                                    (yyvsp[-2].ptrSimboloVector)->valor[0] = (yyvsp[0].vector)[0];
                                    (yyvsp[-2].ptrSimboloVector)->valor[1] = (yyvsp[0].vector)[1];
                                    (yyvsp[-2].ptrSimboloVector)->valor[2] = (yyvsp[0].vector)[2];
                                }
#line 1811 "y.tab.c"
    break;

  case 22:
#line 105 "a.y"
                                { (yyvsp[-3].ptrSimboloVector)->valor[0] = (yyvsp[0].numero); }
#line 1817 "y.tab.c"
    break;

  case 23:
#line 106 "a.y"
                                { (yyvsp[-3].ptrSimboloVector)->valor[1] = (yyvsp[0].numero); }
#line 1823 "y.tab.c"
    break;

  case 24:
#line 107 "a.y"
                                { (yyvsp[-3].ptrSimboloVector)->valor[2] = (yyvsp[0].numero); }
#line 1829 "y.tab.c"
    break;

  case 25:
#line 109 "a.y"
                                        { (yyval.numero) = (yyvsp[-2].numero) + (yyvsp[0].numero); }
#line 1835 "y.tab.c"
    break;

  case 26:
#line 110 "a.y"
                                        { (yyval.numero) = (yyvsp[-2].numero) - (yyvsp[0].numero); }
#line 1841 "y.tab.c"
    break;

  case 27:
#line 111 "a.y"
                                        { (yyval.numero) = (yyvsp[-2].numero) * (yyvsp[0].numero); }
#line 1847 "y.tab.c"
    break;

  case 28:
#line 112 "a.y"
                                        {
                                    if((yyvsp[0].numero) == 0){
                                        printf("Division by zero\n");
                                        (yyval.numero) = 0;
                                    }else{
                                        (yyval.numero) = (yyvsp[-2].numero) / (yyvsp[0].numero);
                                    }
                  	            }
#line 1860 "y.tab.c"
    break;

  case 29:
#line 120 "a.y"
                                        { (yyval.numero) = (yyvsp[-1].numero); }
#line 1866 "y.tab.c"
    break;

  case 30:
#line 121 "a.y"
                                        { (yyval.numero) = pow((yyvsp[-2].numero),(yyvsp[0].numero)); }
#line 1872 "y.tab.c"
    break;

  case 31:
#line 122 "a.y"
                                            { (yyval.numero) = -(yyvsp[0].numero); }
#line 1878 "y.tab.c"
    break;

  case 32:
#line 123 "a.y"
                                        { (yyval.numero) = (int)(yyvsp[-2].numero) % (int)(yyvsp[0].numero); }
#line 1884 "y.tab.c"
    break;

  case 33:
#line 124 "a.y"
                                            { (yyval.numero) = factorial((yyvsp[-1].numero)); }
#line 1890 "y.tab.c"
    break;

  case 34:
#line 126 "a.y"
                                { (yyval.numero) = (yyvsp[-1].ptrSimboloVector)->valor[0]; }
#line 1896 "y.tab.c"
    break;

  case 35:
#line 127 "a.y"
                                { (yyval.numero) = (yyvsp[-1].ptrSimboloVector)->valor[1]; }
#line 1902 "y.tab.c"
    break;

  case 36:
#line 128 "a.y"
                                { (yyval.numero) = (yyvsp[-1].ptrSimboloVector)->valor[2]; }
#line 1908 "y.tab.c"
    break;

  case 37:
#line 130 "a.y"
                                { (yyval.numero) = cos((yyvsp[-1].numero)); }
#line 1914 "y.tab.c"
    break;

  case 38:
#line 131 "a.y"
                                { (yyval.numero) = acos((yyvsp[-1].numero)); }
#line 1920 "y.tab.c"
    break;

  case 39:
#line 132 "a.y"
                                { (yyval.numero) = cosh((yyvsp[-1].numero)); }
#line 1926 "y.tab.c"
    break;

  case 40:
#line 133 "a.y"
                                { (yyval.numero) = acosh((yyvsp[-1].numero)); }
#line 1932 "y.tab.c"
    break;

  case 41:
#line 134 "a.y"
                                { (yyval.numero) = sin((yyvsp[-1].numero)); }
#line 1938 "y.tab.c"
    break;

  case 42:
#line 135 "a.y"
                                { (yyval.numero) = asin((yyvsp[-1].numero)); }
#line 1944 "y.tab.c"
    break;

  case 43:
#line 136 "a.y"
                                { (yyval.numero) = sinh((yyvsp[-1].numero)); }
#line 1950 "y.tab.c"
    break;

  case 44:
#line 137 "a.y"
                                { (yyval.numero) = asinh((yyvsp[-1].numero)); }
#line 1956 "y.tab.c"
    break;

  case 45:
#line 138 "a.y"
                                { (yyval.numero) = tan((yyvsp[-1].numero)); }
#line 1962 "y.tab.c"
    break;

  case 46:
#line 139 "a.y"
                                { (yyval.numero) = atan((yyvsp[-1].numero)); }
#line 1968 "y.tab.c"
    break;

  case 47:
#line 140 "a.y"
                                { (yyval.numero) = tanh((yyvsp[-1].numero)); }
#line 1974 "y.tab.c"
    break;

  case 48:
#line 141 "a.y"
                                { (yyval.numero) = atanh((yyvsp[-1].numero)); }
#line 1980 "y.tab.c"
    break;

  case 49:
#line 143 "a.y"
                                { (yyval.numero) = fabs((yyvsp[-1].numero)); }
#line 1986 "y.tab.c"
    break;

  case 50:
#line 144 "a.y"
                                    { (yyval.numero) = fabs((yyvsp[-1].numero)); }
#line 1992 "y.tab.c"
    break;

  case 51:
#line 145 "a.y"
                                { (yyval.numero) = exp((yyvsp[-1].numero)); }
#line 1998 "y.tab.c"
    break;

  case 52:
#line 146 "a.y"
                                        { (yyval.numero) = log((yyvsp[-1].numero)); }
#line 2004 "y.tab.c"
    break;

  case 53:
#line 147 "a.y"
                                { (yyval.numero) = log((yyvsp[-3].numero))/log((yyvsp[-1].numero)); }
#line 2010 "y.tab.c"
    break;

  case 54:
#line 148 "a.y"
                                        { (yyval.numero) = sqrt((yyvsp[-1].numero)); }
#line 2016 "y.tab.c"
    break;

  case 55:
#line 149 "a.y"
                                        { (yyval.numero) = ceil((yyvsp[-1].numero)); }
#line 2022 "y.tab.c"
    break;

  case 56:
#line 150 "a.y"
                                { (yyval.numero) = floor((yyvsp[-1].numero)); }
#line 2028 "y.tab.c"
    break;

  case 57:
#line 151 "a.y"
                                {
                                    srand(time(NULL));
                                    (yyval.numero)=rand()%(int)(((yyvsp[-1].numero)-(yyvsp[-3].numero)+1)+(yyvsp[-3].numero));
		                        }
#line 2037 "y.tab.c"
    break;

  case 58:
#line 155 "a.y"
                                { (yyval.numero) = mcd((yyvsp[-3].numero),(yyvsp[-1].numero)); }
#line 2043 "y.tab.c"
    break;

  case 59:
#line 156 "a.y"
                                { (yyval.numero) = mcm((yyvsp[-3].numero),(yyvsp[-1].numero)); }
#line 2049 "y.tab.c"
    break;

  case 60:
#line 157 "a.y"
                                { (yyval.numero) = productoInterno((yyvsp[-2].vector), (yyvsp[0].vector)); }
#line 2055 "y.tab.c"
    break;

  case 61:
#line 158 "a.y"
                                { (yyval.numero) = sqrt(productoInterno((yyvsp[-1].vector), (yyvsp[-1].vector))); }
#line 2061 "y.tab.c"
    break;

  case 62:
#line 159 "a.y"
                                { (yyval.numero) = sqrt(productoInterno((yyvsp[-1].vector), (yyvsp[-1].vector))); }
#line 2067 "y.tab.c"
    break;

  case 63:
#line 160 "a.y"
                                {
                                    double temp[3];
                                    memcpy(temp, (yyvsp[-1].vector), 3*sizeof(double));
                                    escalarVector(temp, temp, -1.0);
                                    sumaVector( temp, temp, (yyvsp[-3].vector));
                                    (yyval.numero) = sqrt(productoInterno(temp, temp));
                                }
#line 2079 "y.tab.c"
    break;

  case 64:
#line 167 "a.y"
                                { (yyval.numero) = fabs((yyvsp[-1].numero) - (yyvsp[-3].numero)); }
#line 2085 "y.tab.c"
    break;

  case 65:
#line 168 "a.y"
                                { (yyval.numero) = nthPrimo((int)(yyvsp[-1].numero)); }
#line 2091 "y.tab.c"
    break;

  case 66:
#line 169 "a.y"
                                { (yyval.numero) = nthFibonacci((int)(yyvsp[-1].numero)); }
#line 2097 "y.tab.c"
    break;

  case 67:
#line 171 "a.y"
                                { printf("cnv\n"); }
#line 2103 "y.tab.c"
    break;

  case 68:
#line 172 "a.y"
                                { printf("cnv\n"); }
#line 2109 "y.tab.c"
    break;

  case 69:
#line 174 "a.y"
                                { (yyval.numero) = M_PI; }
#line 2115 "y.tab.c"
    break;

  case 70:
#line 175 "a.y"
                                { (yyval.numero) = M_G; }
#line 2121 "y.tab.c"
    break;

  case 71:
#line 176 "a.y"
                                { (yyval.numero) = M_K; }
#line 2127 "y.tab.c"
    break;

  case 72:
#line 177 "a.y"
                                { (yyval.numero) = M_VLUZ; }
#line 2133 "y.tab.c"
    break;

  case 73:
#line 178 "a.y"
                                { (yyval.numero) = M_ELECTRON; }
#line 2139 "y.tab.c"
    break;

  case 74:
#line 179 "a.y"
                                { (yyval.numero) = -M_ELECTRON; }
#line 2145 "y.tab.c"
    break;

  case 75:
#line 180 "a.y"
                                { (yyval.numero) = 0; }
#line 2151 "y.tab.c"
    break;

  case 76:
#line 181 "a.y"
                                { (yyval.numero) = M_EULER; }
#line 2157 "y.tab.c"
    break;

  case 77:
#line 183 "a.y"
                                { (yyval.numero) = (yyvsp[0].ptrSimbolo)->valor; }
#line 2163 "y.tab.c"
    break;

  case 78:
#line 184 "a.y"
                                { (yyval.numero) = (yyvsp[0].numero); }
#line 2169 "y.tab.c"
    break;

  case 79:
#line 186 "a.y"
                                { (yyval.vector)[0] = (yyvsp[-5].numero); (yyval.vector)[1] = (yyvsp[-3].numero); (yyval.vector)[2] = (yyvsp[-1].numero); }
#line 2175 "y.tab.c"
    break;

  case 80:
#line 187 "a.y"
                                { (yyval.vector)[0] = (yyvsp[-3].numero); (yyval.vector)[1] = (yyvsp[-1].numero); }
#line 2181 "y.tab.c"
    break;

  case 81:
#line 188 "a.y"
                                { (yyval.vector)[0] = (yyvsp[-1].numero); }
#line 2187 "y.tab.c"
    break;

  case 82:
#line 189 "a.y"
                                { sumaVector((yyval.vector), (yyvsp[-2].vector), (yyvsp[0].vector)); }
#line 2193 "y.tab.c"
    break;

  case 83:
#line 190 "a.y"
                                { 
                                    double temp[3];
                                    escalarVector(temp, (yyvsp[0].vector), -1.0);
                                    sumaVector((yyval.vector), (yyvsp[-2].vector), temp); 
                                }
#line 2203 "y.tab.c"
    break;

  case 84:
#line 195 "a.y"
                                { escalarVector((yyval.vector), (yyvsp[0].vector), (yyvsp[-2].numero));}
#line 2209 "y.tab.c"
    break;

  case 85:
#line 196 "a.y"
                                { escalarVector((yyval.vector), (yyvsp[0].vector), -1.0); }
#line 2215 "y.tab.c"
    break;

  case 86:
#line 197 "a.y"
                                { productoVectorial((yyval.vector), (yyvsp[-3].vector), (yyvsp[-1].vector)); }
#line 2221 "y.tab.c"
    break;

  case 87:
#line 198 "a.y"
                                { memcpy((yyval.vector), (yyvsp[0].ptrSimboloVector)->valor, 3*sizeof(double)); }
#line 2227 "y.tab.c"
    break;

  case 88:
#line 199 "a.y"
                                { memcpy((yyval.vector), (yyvsp[0].vector), 3*sizeof(double)); }
#line 2233 "y.tab.c"
    break;


#line 2237 "y.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
#line 201 "a.y"

#include "lex.yy.c"
//#include "errorlib.c"

int main()
{
    t = crear();
    yyparse ();
    return 0;
}

//Maximo comun divisor
int mcd(int a, int b){
	return b == 0 ? a : mcd(b, a % b);
}

//Minimo comun multiplo
int mcm(int a, int b){
    return (a*b)/mcd(a,b);
}

int factorial (int n){
	return n == 0 ? 1 : factorial(n - 1) * n;
}

void escalarVector(double * target, double * a, double esc){
    for(int i = 0; i<3; i++){
        target[i] = esc *a[i];
    }
}

void sumaVector(double * target, double * a, double *b){
    for(int i = 0; i<3; i++){
        target[i] = a[i] + b[i];
    }
}

double productoInterno(double * a, double * b){
    double r = 0;
    for(int i = 0; i< 3; i++){
        r += a[i] * b[i];
    }
    return r;
}

//Enésimo número primo
int nthPrimo(int n){
	int i, k = 1, f = 2, counter = 0, primo = -1;
	while(f<=n || k<= n){
		counter=0;
		for(i=1; i<=f; i++){
			if(f%i==0){
				counter++;
			}
		}
		if(counter<=2){
			primo = f;
			k++;
		}
		f++;
	}
	return primo;
}

//Enésimo de la sucesión de Fibonacci
int nthFibonacci(int n){
    return n < 2 ? n : nthFibonacci(n-1) + nthFibonacci(n-2);
}

//Producto cruz o vectorial
void productoVectorial(double * target, double * a, double * b){
    target[0]=a[1]*b[2] - a[2]*b[1];
    target[1]=a[2]*b[0] - a[0]*b[2];
    target[2]=a[0]*b[1] - a[1]*b[0];
}

void imprimirConstantes(){
    printf("Command\t\t\tValue\t\tDescription\n\n");
    printf("#pi\t#PI\t\t%g\t\tPi number\n", M_PI);
    printf("#e\t#euler\t#napier\t%g\t\te number\n", M_EULER);
    printf("#G\t\t\t%g\tGravitational constant\n", M_G);
    printf("#k\t\t\t%g\tCoulomb constant\n", M_K);
    printf("#c\t\t\t%g\t\tLight speed constant\n", M_VLUZ);
    printf("#elect\t\t\t%g\tElectron charge\n", M_ELECTRON);
    printf("#prot\t\t\t%g\tProton charge\n", -M_ELECTRON);
    printf("#neut\t\t\t%g\t\tNeutron charge\n", 0.0);
    printf("*Using International System of Units (SI)\n");
}

int yyerror(){
	return 0;
}
