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

    //Tipos de dato
    #include "TabSim.c"
    #include "Vector.c"
    #include "Recta.c"
    #include "Plano.c"

    //Tablas de símbolo
    simbolo * t;
    simboloVector * v;
    simboloRecta * r;
    simboloPlano * p;

    //Prototipos
    int yylex(void);
    int yyerror();

#line 88 "y.tab.c"

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
    RECTA = 262,
    ID_RECTA = 263,
    PLANO = 264,
    ID_PLANO = 265,
    asig = 266,
    print = 267,
    printd = 268,
    info = 269,
    infod = 270,
    list = 271,
    listd = 272,
    canoni = 273,
    canonj = 274,
    canonk = 275,
    constantes = 276,
    clear = 277,
    pi = 278,
    euler = 279,
    gravitacional = 280,
    coulomb = 281,
    electron = 282,
    proton = 283,
    neutron = 284,
    vluz = 285,
    COS = 286,
    SIN = 287,
    TAN = 288,
    ACOS = 289,
    ASIN = 290,
    ATAN = 291,
    COSH = 292,
    SINH = 293,
    TANH = 294,
    ACOSH = 295,
    ASINH = 296,
    ATANH = 297,
    ABS = 298,
    LN = 299,
    SQRT = 300,
    CEIL = 301,
    FLOOR = 302,
    RND = 303,
    MCD = 304,
    EXP = 305,
    LOG = 306,
    MCM = 307,
    distancia = 308,
    nthpri = 309,
    nthfib = 310,
    pcruz = 311,
    unit = 312,
    proy = 313,
    norm = 314
  };
#endif
/* Tokens.  */
#define NUMERO 258
#define ID 259
#define VECT 260
#define VECTOR 261
#define RECTA 262
#define ID_RECTA 263
#define PLANO 264
#define ID_PLANO 265
#define asig 266
#define print 267
#define printd 268
#define info 269
#define infod 270
#define list 271
#define listd 272
#define canoni 273
#define canonj 274
#define canonk 275
#define constantes 276
#define clear 277
#define pi 278
#define euler 279
#define gravitacional 280
#define coulomb 281
#define electron 282
#define proton 283
#define neutron 284
#define vluz 285
#define COS 286
#define SIN 287
#define TAN 288
#define ACOS 289
#define ASIN 290
#define ATAN 291
#define COSH 292
#define SINH 293
#define TANH 294
#define ACOSH 295
#define ASINH 296
#define ATANH 297
#define ABS 298
#define LN 299
#define SQRT 300
#define CEIL 301
#define FLOOR 302
#define RND 303
#define MCD 304
#define EXP 305
#define LOG 306
#define MCM 307
#define distancia 308
#define nthpri 309
#define nthfib 310
#define pcruz 311
#define unit 312
#define proy 313
#define norm 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "a.y"

    double numero;
    simbolo * ptrSimbolo;

    double vector[3];
    simboloVector * ptrSimboloVector;

    double recta[2][3];
    simboloRecta * ptrSimboloRecta;

    double plano[3][3];
    simboloPlano * ptrSimboloPlano;

#line 269 "y.tab.c"

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
#define YYLAST   761

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

#define YYUNDEFTOK  2
#define YYMAXUTOK   314


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
       2,     2,     2,    66,     2,     2,     2,    64,     2,     2,
      68,    69,    62,    60,    71,    61,     2,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    67,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    70,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    85,    89,    93,
     100,   106,   112,   113,   114,   135,   136,   137,   138,   146,
     147,   148,   149,   150,   153,   154,   155,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   184,   185,
     186,   187,   190,   191,   192,   193,   194,   197,   198,   199,
     200,   201,   202,   203,   204,   206,   207,   211,   212,   213,
     214,   215,   216,   217,   219,   220,   221,   222,   224,   225
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERO", "ID", "VECT", "VECTOR",
  "RECTA", "ID_RECTA", "PLANO", "ID_PLANO", "asig", "print", "printd",
  "info", "infod", "list", "listd", "canoni", "canonj", "canonk",
  "constantes", "clear", "pi", "euler", "gravitacional", "coulomb",
  "electron", "proton", "neutron", "vluz", "COS", "SIN", "TAN", "ACOS",
  "ASIN", "ATAN", "COSH", "SINH", "TANH", "ACOSH", "ASINH", "ATANH", "ABS",
  "LN", "SQRT", "CEIL", "FLOOR", "RND", "MCD", "EXP", "LOG", "MCM",
  "distancia", "nthpri", "nthfib", "pcruz", "unit", "proy", "norm", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "'!'", "';'", "'('", "')'", "'|'",
  "','", "'['", "']'", "$accept", "S", "A", "AV", "E", "V", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      43,    45,    42,    47,    37,    94,    33,    59,    40,    41,
     124,    44,    91,    93
};
# endif

#define YYPACT_NINF (-59)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -59,   256,   -59,   -58,   -59,    27,   -59,   316,   -45,   -43,
     -31,   -24,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -47,   -28,   -23,   -22,   -13,   -12,    28,    37,    58,    60,
      66,    70,    73,    88,    91,    92,    94,    95,   103,   129,
     130,   139,   141,   142,   146,   161,   162,   163,   164,   315,
     315,   315,   315,    39,   166,    -2,    -8,   -59,   374,   177,
     187,   433,   191,   196,   185,   197,   232,   -59,   -59,   -59,
     -59,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     -59,   -17,     3,    65,   176,   -54,   158,    48,   -48,   -59,
     -59,   199,   200,   315,   315,   315,   315,   315,   315,   -59,
     202,   207,   315,   315,   315,   242,   -59,   328,   -59,   -59,
     147,   -59,   328,   -54,   -59,   -59,   315,   315,   315,   186,
     446,   456,   466,   476,   486,   496,   506,   516,   526,   536,
     546,   556,    71,   566,   576,   586,   596,    59,    86,   606,
     116,   128,   140,   -27,   616,   626,    93,   165,   112,   124,
     -59,   -59,   -59,   -59,   -59,   -59,   315,   -59,   -59,   -59,
       3,     3,   -46,   -59,   -46,   -46,   -46,   -59,   -59,    65,
      65,   -59,   328,   328,   328,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   315,   315,   -59,   315,   315,   315,   315,
     -59,   -59,   315,   -59,   315,   315,   -34,   636,   646,   656,
     666,   676,   435,   686,   689,   692,   315,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,    38,   -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      17,     0,     1,     0,    76,    75,    89,    88,     0,     0,
       0,     0,    67,    74,    68,    69,    71,    72,    73,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    12,    13,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    88,    31,    83,     0,     0,     0,     0,     0,     2,
       7,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,    75,    19,    18,     3,     4,
      88,    21,     0,    20,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,    36,    29,    50,    64,     0,    79,     5,     6,
      25,    26,    27,    82,    28,    32,    30,    10,    11,    80,
      81,    62,    22,    23,    24,    37,    41,    45,    38,    42,
      46,    39,    43,    47,    40,    44,    48,    49,    63,    52,
      54,    55,    56,     0,     0,    51,     0,     0,     0,     0,
      60,    61,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    57,    58,
      53,    59,    66,    65,    84,    85,    86,     0,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,   206,   214,    -1,    46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    53,    54,   132,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,   170,   171,   172,   120,   121,   122,   123,   124,    57,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   118,
     119,    71,    67,   176,    68,   177,   113,   114,   115,   116,
     117,   118,   119,   122,   123,   124,    69,   236,    58,   237,
      72,    59,    60,    70,   219,    73,    74,    56,   102,   104,
     106,   108,   122,   123,   124,    75,    76,   127,   113,   114,
     115,   116,   117,   118,   119,   115,   116,   117,   118,   119,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   164,   165,   103,    77,   107,   113,   114,
     115,   116,   117,   118,   119,    78,   109,   133,   122,   123,
     124,   248,   180,   181,   182,   184,   185,   186,   175,   113,
     114,   115,   116,   117,   118,   119,    79,   124,    80,   152,
     213,   122,   123,   124,    81,   192,   193,   194,    82,   163,
     208,    83,   166,   167,   168,   169,   113,   114,   115,   116,
     117,   118,   119,   122,   123,   124,    84,   214,    61,    85,
      86,   183,    87,    88,   222,    64,    65,    66,   189,   190,
     191,    89,   122,   123,   124,   226,   113,   114,   115,   116,
     117,   118,   119,   224,   122,   123,   124,   216,   113,   114,
     115,   116,   117,   118,   119,   225,   136,    90,    91,   217,
     113,   114,   115,   116,   117,   118,   119,    92,   137,    93,
      94,   218,   227,   228,    95,   229,   230,   231,   113,   114,
     115,   116,   117,   118,   119,   122,   123,   124,   174,    96,
      97,    98,    99,   110,   223,   247,   113,   114,   115,   116,
     117,   118,   119,   138,   128,   173,   113,   114,   115,   116,
     117,   118,   119,    58,   129,   195,     2,     3,   134,     4,
       5,     6,     7,   135,   126,   232,   178,   179,   233,   187,
     234,   235,     8,     9,   188,   131,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,     4,   100,
       6,   101,     0,     0,    50,     0,    51,    61,    52,     0,
      62,    63,     0,     0,    64,    65,    66,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,     4,   125,     6,
     101,     0,     0,    50,     0,    51,     0,    52,   113,   114,
     115,   116,   117,   118,   119,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,     4,   100,     6,   130,
       0,     0,    50,     0,    51,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,   122,   123,   124,     0,     0,
       0,    50,     0,    51,   243,    52,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   196,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   197,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   198,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   199,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   200,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   201,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   202,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   203,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   204,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   205,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   206,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   207,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   209,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   210,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   211,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   212,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   215,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   220,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   221,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   238,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   239,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   240,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   241,   113,   114,   115,   116,
     117,   118,   119,     0,     0,   242,   122,   123,   124,   122,
     123,   124,   122,   123,   124,   244,     0,     0,   245,     0,
       0,   246
};

static const yytype_int16 yycheck[] =
{
       1,    18,    19,    20,    12,    13,    60,    61,    62,    67,
      12,    13,    60,    61,    62,    63,    64,    65,    66,    65,
      66,    68,    67,    71,    67,    73,    60,    61,    62,    63,
      64,    65,    66,    60,    61,    62,    67,    71,    11,    73,
      68,    14,    15,    67,    71,    68,    68,     1,    49,    50,
      51,    52,    60,    61,    62,    68,    68,    58,    60,    61,
      62,    63,    64,    65,    66,    62,    63,    64,    65,    66,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    49,    68,    51,    60,    61,
      62,    63,    64,    65,    66,    68,    67,    61,    60,    61,
      62,    73,   113,   114,   115,   116,   117,   118,    70,    60,
      61,    62,    63,    64,    65,    66,    68,    62,    68,    83,
      71,    60,    61,    62,    68,   136,   137,   138,    68,    93,
      69,    68,    96,    97,    98,    99,    60,    61,    62,    63,
      64,    65,    66,    60,    61,    62,    68,    71,    11,    68,
      68,   115,    68,    68,    71,    18,    19,    20,   122,   123,
     124,    68,    60,    61,    62,   176,    60,    61,    62,    63,
      64,    65,    66,    71,    60,    61,    62,    71,    60,    61,
      62,    63,    64,    65,    66,    71,    11,    68,    68,    71,
      60,    61,    62,    63,    64,    65,    66,    68,    11,    68,
      68,    71,   213,   214,    68,   216,   217,   218,    60,    61,
      62,    63,    64,    65,    66,    60,    61,    62,    70,    68,
      68,    68,    68,    67,    69,   236,    60,    61,    62,    63,
      64,    65,    66,    11,    67,    69,    60,    61,    62,    63,
      64,    65,    66,    11,    67,    69,     0,     1,    67,     3,
       4,     5,     6,    67,    58,   219,    67,    67,   222,    67,
     224,   225,    16,    17,    67,    61,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,     3,     4,
       5,     6,    -1,    -1,    68,    -1,    70,    11,    72,    -1,
      14,    15,    -1,    -1,    18,    19,    20,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    -1,    61,     3,     4,     5,
       6,    -1,    -1,    68,    -1,    70,    -1,    72,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    61,     3,     4,     5,     6,
      -1,    -1,    68,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    60,    61,    62,    -1,    -1,
      -1,    68,    -1,    70,    69,    72,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    60,    61,    62,    60,
      61,    62,    60,    61,    62,    69,    -1,    -1,    69,    -1,
      -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    75,     0,     1,     3,     4,     5,     6,    16,    17,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    61,
      68,    70,    72,    76,    77,    78,    79,    67,    11,    14,
      15,    11,    14,    15,    18,    19,    20,    67,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
       4,     6,    78,    79,    78,    79,    78,    79,    78,    67,
      67,    12,    13,    60,    61,    62,    63,    64,    65,    66,
      12,    13,    60,    61,    62,     4,    76,    78,    67,    67,
       6,    77,    78,    79,    67,    67,    11,    11,    11,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    79,    78,    78,    79,    79,    79,    79,
      18,    19,    20,    69,    70,    70,    71,    73,    67,    67,
      78,    78,    78,    79,    78,    78,    78,    67,    67,    79,
      79,    79,    78,    78,    78,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    71,    71,    69,    71,    71,    71,    71,
      69,    69,    71,    69,    71,    71,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    71,    73,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    78,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79
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
       4,     4,     3,     4,     3,     6,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     5,     3,
       3,     3,     3,     2,     6,     6,     6,     4,     1,     1
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
#line 1700 "y.tab.c"
    break;

  case 3:
#line 68 "a.y"
                            { printf("%s = %g\n",(yyvsp[-2].ptrSimbolo)->nombre, (yyvsp[-2].ptrSimbolo)->valor); }
#line 1706 "y.tab.c"
    break;

  case 4:
#line 69 "a.y"
                            { printf("%s = %f\n",(yyvsp[-2].ptrSimbolo)->nombre, (yyvsp[-2].ptrSimbolo)->valor); }
#line 1712 "y.tab.c"
    break;

  case 5:
#line 70 "a.y"
                            { printf("%g\n", (yyvsp[-2].numero)); }
#line 1718 "y.tab.c"
    break;

  case 6:
#line 71 "a.y"
                            { printf("%f\n", (yyvsp[-2].numero)); }
#line 1724 "y.tab.c"
    break;

  case 7:
#line 72 "a.y"
                            { ; }
#line 1730 "y.tab.c"
    break;

  case 8:
#line 73 "a.y"
                            { printf("%s = [%g, %g, %g]\n",(yyvsp[-2].ptrSimboloVector)->nombre, (yyvsp[-2].ptrSimboloVector)->valor[0], (yyvsp[-2].ptrSimboloVector)->valor[1], (yyvsp[-2].ptrSimboloVector)->valor[2]); }
#line 1736 "y.tab.c"
    break;

  case 9:
#line 74 "a.y"
                            { printf("%s = [%f, %f, %f]\n",(yyvsp[-2].ptrSimboloVector)->nombre, (yyvsp[-2].ptrSimboloVector)->valor[0], (yyvsp[-2].ptrSimboloVector)->valor[1], (yyvsp[-2].ptrSimboloVector)->valor[2]); }
#line 1742 "y.tab.c"
    break;

  case 10:
#line 75 "a.y"
                            { printf("%g, %g, %g\n", (yyvsp[-2].vector)[0], (yyvsp[-2].vector)[1], (yyvsp[-2].vector)[2]); }
#line 1748 "y.tab.c"
    break;

  case 11:
#line 76 "a.y"
                            { printf("%f, %f, %f\n", (yyvsp[-2].vector)[0], (yyvsp[-2].vector)[1], (yyvsp[-2].vector)[2]); }
#line 1754 "y.tab.c"
    break;

  case 12:
#line 77 "a.y"
                            { imprimir(t,0); imprimirVector(v,0); }
#line 1760 "y.tab.c"
    break;

  case 13:
#line 78 "a.y"
                            { imprimir(t,1); imprimirVector(v,1); }
#line 1766 "y.tab.c"
    break;

  case 14:
#line 79 "a.y"
                            { imprimirConstantes(); }
#line 1772 "y.tab.c"
    break;

  case 15:
#line 80 "a.y"
                            { v = NULL; t = NULL; }
#line 1778 "y.tab.c"
    break;

  case 16:
#line 81 "a.y"
                            { 
                              printf("Error: Verifica tu entrada o tipo entre las operaciones\n");
                              yyerrok; 
                            }
#line 1787 "y.tab.c"
    break;

  case 18:
#line 89 "a.y"
                            {
                                (yyval.numero) = (yyvsp[0].numero);
                                (yyvsp[-2].ptrSimbolo)->valor = (yyvsp[0].numero);
                            }
#line 1796 "y.tab.c"
    break;

  case 19:
#line 93 "a.y"
                            {
                                (yyval.numero) = (yyvsp[0].numero);
                                (yyvsp[-2].ptrSimbolo)->valor = (yyvsp[0].numero);
                            }
#line 1805 "y.tab.c"
    break;

  case 20:
#line 100 "a.y"
                            {
                                memcpy((yyval.vector), (yyvsp[0].vector), 3*sizeof(double));
                                (yyvsp[-2].ptrSimboloVector)->valor[0] = (yyvsp[0].vector)[0];
                                (yyvsp[-2].ptrSimboloVector)->valor[1] = (yyvsp[0].vector)[1];
                                (yyvsp[-2].ptrSimboloVector)->valor[2] = (yyvsp[0].vector)[2];
                            }
#line 1816 "y.tab.c"
    break;

  case 21:
#line 106 "a.y"
                            {
                                memcpy((yyval.vector), (yyvsp[0].vector), 3*sizeof(double));
                                (yyvsp[-2].ptrSimboloVector)->valor[0] = (yyvsp[0].vector)[0];
                                (yyvsp[-2].ptrSimboloVector)->valor[1] = (yyvsp[0].vector)[1];
                                (yyvsp[-2].ptrSimboloVector)->valor[2] = (yyvsp[0].vector)[2];
                            }
#line 1827 "y.tab.c"
    break;

  case 22:
#line 112 "a.y"
                            { (yyvsp[-3].ptrSimboloVector)->valor[0] = (yyvsp[0].numero); }
#line 1833 "y.tab.c"
    break;

  case 23:
#line 113 "a.y"
                            { (yyvsp[-3].ptrSimboloVector)->valor[1] = (yyvsp[0].numero); }
#line 1839 "y.tab.c"
    break;

  case 24:
#line 114 "a.y"
                            { (yyvsp[-3].ptrSimboloVector)->valor[2] = (yyvsp[0].numero); }
#line 1845 "y.tab.c"
    break;

  case 25:
#line 135 "a.y"
                                    { (yyval.numero) = (yyvsp[-2].numero) + (yyvsp[0].numero); }
#line 1851 "y.tab.c"
    break;

  case 26:
#line 136 "a.y"
                                        { (yyval.numero) = (yyvsp[-2].numero) - (yyvsp[0].numero); }
#line 1857 "y.tab.c"
    break;

  case 27:
#line 137 "a.y"
                                        { (yyval.numero) = (yyvsp[-2].numero) * (yyvsp[0].numero); }
#line 1863 "y.tab.c"
    break;

  case 28:
#line 138 "a.y"
                                        {
                                if((yyvsp[0].numero) == 0){
                                    printf("Error: división por cero\n");
                                    (yyval.numero) = 0;
                                }else{
                                    (yyval.numero) = (yyvsp[-2].numero) / (yyvsp[0].numero);
                                }
                            }
#line 1876 "y.tab.c"
    break;

  case 29:
#line 146 "a.y"
                                        { (yyval.numero) = (yyvsp[-1].numero); }
#line 1882 "y.tab.c"
    break;

  case 30:
#line 147 "a.y"
                                        { (yyval.numero) = pow((yyvsp[-2].numero),(yyvsp[0].numero)); }
#line 1888 "y.tab.c"
    break;

  case 31:
#line 148 "a.y"
                                    { (yyval.numero) = -(yyvsp[0].numero); }
#line 1894 "y.tab.c"
    break;

  case 32:
#line 149 "a.y"
                                        { (yyval.numero) = (int)(yyvsp[-2].numero) % (int)(yyvsp[0].numero); }
#line 1900 "y.tab.c"
    break;

  case 33:
#line 150 "a.y"
                                    { (yyval.numero) = factorial((yyvsp[-1].numero)); }
#line 1906 "y.tab.c"
    break;

  case 34:
#line 153 "a.y"
                            { (yyval.numero) = (yyvsp[-1].ptrSimboloVector)->valor[0]; }
#line 1912 "y.tab.c"
    break;

  case 35:
#line 154 "a.y"
                            { (yyval.numero) = (yyvsp[-1].ptrSimboloVector)->valor[1]; }
#line 1918 "y.tab.c"
    break;

  case 36:
#line 155 "a.y"
                            { (yyval.numero) = (yyvsp[-1].ptrSimboloVector)->valor[2]; }
#line 1924 "y.tab.c"
    break;

  case 37:
#line 158 "a.y"
                                { (yyval.numero) = cos((yyvsp[-1].numero)); }
#line 1930 "y.tab.c"
    break;

  case 38:
#line 159 "a.y"
                            { (yyval.numero) = acos((yyvsp[-1].numero)); }
#line 1936 "y.tab.c"
    break;

  case 39:
#line 160 "a.y"
                            { (yyval.numero) = cosh((yyvsp[-1].numero)); }
#line 1942 "y.tab.c"
    break;

  case 40:
#line 161 "a.y"
                            { (yyval.numero) = acosh((yyvsp[-1].numero)); }
#line 1948 "y.tab.c"
    break;

  case 41:
#line 162 "a.y"
                                { (yyval.numero) = sin((yyvsp[-1].numero)); }
#line 1954 "y.tab.c"
    break;

  case 42:
#line 163 "a.y"
                            { (yyval.numero) = asin((yyvsp[-1].numero)); }
#line 1960 "y.tab.c"
    break;

  case 43:
#line 164 "a.y"
                            { (yyval.numero) = sinh((yyvsp[-1].numero)); }
#line 1966 "y.tab.c"
    break;

  case 44:
#line 165 "a.y"
                            { (yyval.numero) = asinh((yyvsp[-1].numero)); }
#line 1972 "y.tab.c"
    break;

  case 45:
#line 166 "a.y"
                                { (yyval.numero) = tan((yyvsp[-1].numero)); }
#line 1978 "y.tab.c"
    break;

  case 46:
#line 167 "a.y"
                            { (yyval.numero) = atan((yyvsp[-1].numero)); }
#line 1984 "y.tab.c"
    break;

  case 47:
#line 168 "a.y"
                            { (yyval.numero) = tanh((yyvsp[-1].numero)); }
#line 1990 "y.tab.c"
    break;

  case 48:
#line 169 "a.y"
                            { (yyval.numero) = atanh((yyvsp[-1].numero)); }
#line 1996 "y.tab.c"
    break;

  case 49:
#line 172 "a.y"
                                { (yyval.numero) = fabs((yyvsp[-1].numero)); }
#line 2002 "y.tab.c"
    break;

  case 50:
#line 173 "a.y"
                            { (yyval.numero) = fabs((yyvsp[-1].numero)); }
#line 2008 "y.tab.c"
    break;

  case 51:
#line 174 "a.y"
                                { (yyval.numero) = exp((yyvsp[-1].numero)); }
#line 2014 "y.tab.c"
    break;

  case 52:
#line 175 "a.y"
                                { (yyval.numero) = log((yyvsp[-1].numero)); }
#line 2020 "y.tab.c"
    break;

  case 53:
#line 176 "a.y"
                            { (yyval.numero) = log((yyvsp[-3].numero))/log((yyvsp[-1].numero)); }
#line 2026 "y.tab.c"
    break;

  case 54:
#line 177 "a.y"
                                { (yyval.numero) = sqrt((yyvsp[-1].numero)); }
#line 2032 "y.tab.c"
    break;

  case 55:
#line 178 "a.y"
                                { (yyval.numero) = ceil((yyvsp[-1].numero)); }
#line 2038 "y.tab.c"
    break;

  case 56:
#line 179 "a.y"
                                { (yyval.numero) = floor((yyvsp[-1].numero)); }
#line 2044 "y.tab.c"
    break;

  case 57:
#line 180 "a.y"
                            {
                                srand(time(NULL));
                                (yyval.numero)=rand()%(int)(((yyvsp[-1].numero)-(yyvsp[-3].numero)+1)+(yyvsp[-3].numero));
                            }
#line 2053 "y.tab.c"
    break;

  case 58:
#line 184 "a.y"
                            { (yyval.numero) = mcd((yyvsp[-3].numero),(yyvsp[-1].numero)); }
#line 2059 "y.tab.c"
    break;

  case 59:
#line 185 "a.y"
                            { (yyval.numero) = mcm((yyvsp[-3].numero),(yyvsp[-1].numero)); }
#line 2065 "y.tab.c"
    break;

  case 60:
#line 186 "a.y"
                            { (yyval.numero) = nthPrimo((int)(yyvsp[-1].numero)); }
#line 2071 "y.tab.c"
    break;

  case 61:
#line 187 "a.y"
                            { (yyval.numero) = nthFibonacci((int)(yyvsp[-1].numero)); }
#line 2077 "y.tab.c"
    break;

  case 62:
#line 190 "a.y"
                            { (yyval.numero) = productoInterno((yyvsp[-2].vector), (yyvsp[0].vector)); }
#line 2083 "y.tab.c"
    break;

  case 63:
#line 191 "a.y"
                            { (yyval.numero) = norma((yyvsp[-1].vector)); }
#line 2089 "y.tab.c"
    break;

  case 64:
#line 192 "a.y"
                            { (yyval.numero) = norma((yyvsp[-1].vector)); }
#line 2095 "y.tab.c"
    break;

  case 65:
#line 193 "a.y"
                            { (yyval.numero) = distanciaVector((yyvsp[-3].vector), (yyvsp[-1].vector)); }
#line 2101 "y.tab.c"
    break;

  case 66:
#line 194 "a.y"
                            { (yyval.numero) = fabs((yyvsp[-1].numero) - (yyvsp[-3].numero)); }
#line 2107 "y.tab.c"
    break;

  case 67:
#line 197 "a.y"
                            { (yyval.numero) = M_PI; }
#line 2113 "y.tab.c"
    break;

  case 68:
#line 198 "a.y"
                            { (yyval.numero) = M_G; }
#line 2119 "y.tab.c"
    break;

  case 69:
#line 199 "a.y"
                            { (yyval.numero) = M_K; }
#line 2125 "y.tab.c"
    break;

  case 70:
#line 200 "a.y"
                            { (yyval.numero) = M_VLUZ; }
#line 2131 "y.tab.c"
    break;

  case 71:
#line 201 "a.y"
                            { (yyval.numero) = M_ELECTRON; }
#line 2137 "y.tab.c"
    break;

  case 72:
#line 202 "a.y"
                            { (yyval.numero) = -M_ELECTRON; }
#line 2143 "y.tab.c"
    break;

  case 73:
#line 203 "a.y"
                            { (yyval.numero) = 0; }
#line 2149 "y.tab.c"
    break;

  case 74:
#line 204 "a.y"
                            { (yyval.numero) = M_EULER; }
#line 2155 "y.tab.c"
    break;

  case 75:
#line 206 "a.y"
                            { (yyval.numero) = (yyvsp[0].ptrSimbolo)->valor; }
#line 2161 "y.tab.c"
    break;

  case 76:
#line 207 "a.y"
                            { (yyval.numero) = (yyvsp[0].numero); }
#line 2167 "y.tab.c"
    break;

  case 77:
#line 211 "a.y"
                            { (yyval.vector)[0] = (yyvsp[-5].numero); (yyval.vector)[1] = (yyvsp[-3].numero); (yyval.vector)[2] = (yyvsp[-1].numero); }
#line 2173 "y.tab.c"
    break;

  case 78:
#line 212 "a.y"
                            { (yyval.vector)[0] = (yyvsp[-3].numero); (yyval.vector)[1] = (yyvsp[-1].numero); }
#line 2179 "y.tab.c"
    break;

  case 79:
#line 213 "a.y"
                            { (yyval.vector)[0] = (yyvsp[-1].numero); }
#line 2185 "y.tab.c"
    break;

  case 80:
#line 214 "a.y"
                            { sumaVector((yyval.vector), (yyvsp[-2].vector), (yyvsp[0].vector)); }
#line 2191 "y.tab.c"
    break;

  case 81:
#line 215 "a.y"
                            { restaVector((yyval.vector), (yyvsp[-2].vector), (yyvsp[0].vector)); }
#line 2197 "y.tab.c"
    break;

  case 82:
#line 216 "a.y"
                            { escalarVector((yyval.vector), (yyvsp[0].vector), (yyvsp[-2].numero));}
#line 2203 "y.tab.c"
    break;

  case 83:
#line 217 "a.y"
                            { escalarVector((yyval.vector), (yyvsp[0].vector), -1.0); }
#line 2209 "y.tab.c"
    break;

  case 84:
#line 219 "a.y"
                            { productoVectorial((yyval.vector), (yyvsp[-3].vector), (yyvsp[-1].vector)); }
#line 2215 "y.tab.c"
    break;

  case 85:
#line 220 "a.y"
                            { proyeccionVector((yyval.vector), (yyvsp[-3].vector), (yyvsp[-1].vector)); }
#line 2221 "y.tab.c"
    break;

  case 86:
#line 221 "a.y"
                            { normalVector((yyval.vector), (yyvsp[-3].vector), (yyvsp[-1].vector)); }
#line 2227 "y.tab.c"
    break;

  case 87:
#line 222 "a.y"
                            { unitarioVector((yyval.vector), (yyvsp[-1].vector)); }
#line 2233 "y.tab.c"
    break;

  case 88:
#line 224 "a.y"
                            { memcpy((yyval.vector), (yyvsp[0].ptrSimboloVector)->valor, VECTOR_SZ); }
#line 2239 "y.tab.c"
    break;

  case 89:
#line 225 "a.y"
                            { memcpy((yyval.vector), (yyvsp[0].vector), VECTOR_SZ); }
#line 2245 "y.tab.c"
    break;


#line 2249 "y.tab.c"

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
#line 236 "a.y"

#include "lex.yy.c"
//#include "errorlib.c"

int main()
{
    t = crear();
    yyparse();
    return 0;
}

int yyerror(){
	return 0;
}
