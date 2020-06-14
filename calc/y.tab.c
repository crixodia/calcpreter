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
    #include "Clc.c"
    #include "Real.c"
    #include "Vector.c"
    #include "Line.c"
    #include "Plane.c"

    //Tablas de símbolo
    real * t;
    vector * v;
    line * r;
    plane * p;

    //Prototipos
    int yylex(void);
    int yyerror();

#line 89 "y.tab.c"

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
    REAL = 258,
    id = 259,
    VECTOR = 260,
    id_vector = 261,
    LINE = 262,
    ID_RECTA = 263,
    PLANE = 264,
    ID_PLANO = 265,
    asg = 266,
    print = 267,
    printd = 268,
    info = 269,
    infod = 270,
    list = 271,
    listd = 272,
    canoni = 273,
    canonj = 274,
    canonk = 275,
    consts = 276,
    del = 277,
    leave = 278,
    clc = 279,
    all = 280,
    pi = 281,
    euler = 282,
    gravi = 283,
    coulomb = 284,
    electron = 285,
    proton = 286,
    neutron = 287,
    vlight = 288,
    COS = 289,
    SIN = 290,
    TAN = 291,
    ACOS = 292,
    ASIN = 293,
    ATAN = 294,
    COSH = 295,
    SINH = 296,
    TANH = 297,
    ACOSH = 298,
    ASINH = 299,
    ATANH = 300,
    ABS = 301,
    LN = 302,
    SQRT = 303,
    CEIL = 304,
    FLOOR = 305,
    RND = 306,
    GCD = 307,
    EXP = 308,
    LOG = 309,
    LCM = 310,
    distance = 311,
    nthpri = 312,
    nthfib = 313,
    pcrux = 314,
    unit = 315,
    proy = 316,
    norm = 317
  };
#endif
/* Tokens.  */
#define REAL 258
#define id 259
#define VECTOR 260
#define id_vector 261
#define LINE 262
#define ID_RECTA 263
#define PLANE 264
#define ID_PLANO 265
#define asg 266
#define print 267
#define printd 268
#define info 269
#define infod 270
#define list 271
#define listd 272
#define canoni 273
#define canonj 274
#define canonk 275
#define consts 276
#define del 277
#define leave 278
#define clc 279
#define all 280
#define pi 281
#define euler 282
#define gravi 283
#define coulomb 284
#define electron 285
#define proton 286
#define neutron 287
#define vlight 288
#define COS 289
#define SIN 290
#define TAN 291
#define ACOS 292
#define ASIN 293
#define ATAN 294
#define COSH 295
#define SINH 296
#define TANH 297
#define ACOSH 298
#define ASINH 299
#define ATANH 300
#define ABS 301
#define LN 302
#define SQRT 303
#define CEIL 304
#define FLOOR 305
#define RND 306
#define GCD 307
#define EXP 308
#define LOG 309
#define LCM 310
#define distance 311
#define nthpri 312
#define nthfib 313
#define pcrux 314
#define unit 315
#define proy 316
#define norm 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "a.y"

    double real_s;
    real * pReal;

    double vector_s[3];
    vector * pVector;

    double line_s[6];
    line * pLine;

    double plane_s[9];
    plane * pPlane;

#line 276 "y.tab.c"

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
#define YYLAST   771

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  256

#define YYUNDEFTOK  2
#define YYMAXUTOK   317


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
       2,     2,     2,    69,     2,     2,     2,    67,     2,     2,
      71,    72,    65,    63,    74,    64,     2,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    70,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    73,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    90,
      94,    98,   105,   111,   117,   118,   119,   140,   141,   142,
     143,   151,   152,   153,   154,   155,   158,   159,   160,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     189,   190,   191,   192,   195,   196,   197,   198,   199,   202,
     203,   204,   205,   206,   207,   208,   209,   211,   212,   216,
     217,   218,   219,   220,   221,   222,   224,   225,   226,   227,
     229,   230
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "id", "VECTOR", "id_vector",
  "LINE", "ID_RECTA", "PLANE", "ID_PLANO", "asg", "print", "printd",
  "info", "infod", "list", "listd", "canoni", "canonj", "canonk", "consts",
  "del", "leave", "clc", "all", "pi", "euler", "gravi", "coulomb",
  "electron", "proton", "neutron", "vlight", "COS", "SIN", "TAN", "ACOS",
  "ASIN", "ATAN", "COSH", "SINH", "TANH", "ACOSH", "ASINH", "ATANH", "ABS",
  "LN", "SQRT", "CEIL", "FLOOR", "RND", "GCD", "EXP", "LOG", "LCM",
  "distance", "nthpri", "nthfib", "pcrux", "unit", "proy", "norm", "'+'",
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
     315,   316,   317,    43,    45,    42,    47,    37,    94,    33,
      59,    40,    41,   124,    44,    91,    93
};
# endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -68,   264,   -68,   -62,   -68,    26,   -68,   722,   -49,   -47,
     -35,   -32,   -28,   -26,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,    29,    38,    41,    42,    43,    58,    60,    61,
      63,    71,    72,    75,    91,    94,    95,    97,    98,   106,
     107,   108,   117,   119,   120,   129,   131,   132,   141,   143,
     144,   326,   326,   326,   326,   -25,   -12,    -3,    -9,   -68,
     388,    40,    74,   450,   147,   150,   178,   202,   229,   -68,
     -68,   -68,   105,   -68,   -68,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   -68,   -13,   170,   136,   180,   -45,
     161,   168,   -52,   -68,   -68,   181,   191,   326,   326,   326,
     326,   326,   326,   -68,   193,   196,   326,   326,   326,   239,
     -68,     4,   -68,   -68,   153,   -68,     4,   -45,   -68,   -68,
     326,   326,   326,   188,   190,   277,   339,   401,   463,   473,
     483,   493,   503,   513,   523,   533,   543,   452,   553,   563,
     573,   583,    59,    89,   593,   118,   130,   142,   -31,   603,
     613,   -17,   680,    73,    96,   -68,   -68,   -68,   -68,   -68,
     -68,   326,   -68,   -68,   -68,   170,   170,   -67,   -68,   -67,
     -67,   -67,   -68,   -68,   136,   136,   -68,     4,     4,     4,
     201,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   326,
     326,   -68,   326,   326,   326,   326,   -68,   -68,   326,   -68,
     326,   326,   -38,   -68,   623,   633,   643,   653,   663,   683,
     686,   696,   699,   326,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,    39,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      19,     0,     1,     0,    78,    77,    91,    90,     0,     0,
       0,     0,     0,     0,    69,    76,    70,    71,    73,    74,
      75,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,     0,     0,    36,    37,    38,    12,
      13,    14,     0,    17,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    90,    33,    85,     0,     0,
       0,     0,     0,     2,     7,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,    77,
      21,    20,     3,     4,    90,    23,     0,    22,     8,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    37,    38,    31,    52,
      66,     0,    81,     5,     6,    27,    28,    29,    84,    30,
      34,    32,    10,    11,    82,    83,    64,    24,    25,    26,
       0,    39,    43,    47,    40,    44,    48,    41,    45,    49,
      42,    46,    50,    51,    65,    54,    56,    57,    58,     0,
       0,    53,     0,     0,     0,     0,    62,    63,     0,    89,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    59,    60,    55,    61,    68,
      67,    86,    87,    88,     0,    79
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   212,   211,    -1,    48
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    55,    56,   136,   109
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,   122,   123,   124,   125,   175,   176,   177,    59,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   126,   127,
     128,    69,   181,    70,   182,   117,   118,   119,   120,   121,
     122,   123,   126,   127,   128,    71,   243,    60,   244,    72,
      61,    62,    73,   225,    74,   113,   126,   127,   128,    58,
     106,   108,   110,   112,   126,   127,   128,   228,   114,   131,
     117,   118,   119,   120,   121,   122,   123,   117,   118,   119,
     120,   121,   122,   123,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   169,   170,   107,
      75,   111,   117,   118,   119,   120,   121,   122,   123,    76,
     132,   137,    77,    78,    79,   255,   185,   186,   187,   189,
     190,   191,   117,   118,   119,   120,   121,   122,   123,    80,
     143,    81,    82,   219,    83,   157,   126,   127,   128,   197,
     198,   199,    84,    85,   133,   168,    86,   230,   171,   172,
     173,   174,   117,   118,   119,   120,   121,   122,   123,   126,
     127,   128,    87,   220,    63,    88,    89,   188,    90,    91,
     231,    66,    67,    68,   194,   195,   196,    92,    93,    94,
     232,   117,   118,   119,   120,   121,   122,   123,    95,   140,
      96,    97,   222,   117,   118,   119,   120,   121,   122,   123,
      98,   128,    99,   100,   223,   117,   118,   119,   120,   121,
     122,   123,   101,   141,   102,   103,   224,   138,   234,   235,
     139,   236,   237,   238,   117,   118,   119,   120,   121,   122,
     123,   126,   127,   128,   179,   119,   120,   121,   122,   123,
     142,   180,   254,   117,   118,   119,   120,   121,   122,   123,
      60,   183,   178,   117,   118,   119,   120,   121,   122,   123,
     200,   184,   201,   192,     2,     3,   193,     4,     5,     6,
       7,   233,   130,   239,   135,     0,   240,     0,   241,   242,
       8,     9,     0,     0,     0,    10,    11,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    51,     4,
     104,     6,   105,     0,     0,    52,     0,    53,     0,    54,
     117,   118,   119,   120,   121,   122,   123,     0,     0,   202,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     0,
      51,     4,   129,     6,   105,     0,     0,    52,     0,    53,
       0,    54,   117,   118,   119,   120,   121,   122,   123,     0,
       0,   203,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     0,    51,     4,   104,     6,   134,     0,     0,    52,
       0,    53,     0,    54,   117,   118,   119,   120,   121,   122,
     123,     0,     0,   204,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     0,    51,   126,   127,   128,     0,     0,
       0,    52,     0,    53,   214,    54,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   205,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   206,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   207,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   208,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   209,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   210,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   211,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   212,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   213,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   215,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   216,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   217,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   218,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   221,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   226,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   227,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   245,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   246,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   247,   117,   118,   119,   120,
     121,   122,   123,     0,     0,   248,   117,   118,   119,   120,
     121,   122,   123,    63,     0,   249,    64,    65,     0,     0,
      66,    67,    68,   126,   127,   128,   126,   127,   128,   126,
     127,   128,   229,     0,     0,   250,     0,     0,   251,   126,
     127,   128,   126,   127,   128,     0,     0,     0,   252,     0,
       0,   253
};

static const yytype_int16 yycheck[] =
{
       1,    68,    69,    12,    13,    18,    19,    20,    70,    12,
      13,    63,    64,    65,    66,    67,    68,    69,    63,    64,
      65,    70,    74,    70,    76,    63,    64,    65,    66,    67,
      68,    69,    63,    64,    65,    70,    74,    11,    76,    71,
      14,    15,    70,    74,    70,    70,    63,    64,    65,     1,
      51,    52,    53,    54,    63,    64,    65,    74,    70,    60,
      63,    64,    65,    66,    67,    68,    69,    63,    64,    65,
      66,    67,    68,    69,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    51,
      71,    53,    63,    64,    65,    66,    67,    68,    69,    71,
      70,    63,    71,    71,    71,    76,   117,   118,   119,   120,
     121,   122,    63,    64,    65,    66,    67,    68,    69,    71,
      25,    71,    71,    74,    71,    87,    63,    64,    65,   140,
     141,   142,    71,    71,    70,    97,    71,    74,   100,   101,
     102,   103,    63,    64,    65,    66,    67,    68,    69,    63,
      64,    65,    71,    74,    11,    71,    71,   119,    71,    71,
      74,    18,    19,    20,   126,   127,   128,    71,    71,    71,
     181,    63,    64,    65,    66,    67,    68,    69,    71,    11,
      71,    71,    74,    63,    64,    65,    66,    67,    68,    69,
      71,    65,    71,    71,    74,    63,    64,    65,    66,    67,
      68,    69,    71,    11,    71,    71,    74,    70,   219,   220,
      70,   222,   223,   224,    63,    64,    65,    66,    67,    68,
      69,    63,    64,    65,    73,    65,    66,    67,    68,    69,
      11,    73,   243,    63,    64,    65,    66,    67,    68,    69,
      11,    70,    72,    63,    64,    65,    66,    67,    68,    69,
      72,    70,    72,    70,     0,     1,    70,     3,     4,     5,
       6,    70,    60,   225,    63,    -1,   228,    -1,   230,   231,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,     3,
       4,     5,     6,    -1,    -1,    71,    -1,    73,    -1,    75,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,     3,     4,     5,     6,    -1,    -1,    71,    -1,    73,
      -1,    75,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    64,     3,     4,     5,     6,    -1,    -1,    71,
      -1,    73,    -1,    75,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    63,    64,    65,    -1,    -1,
      -1,    71,    -1,    73,    72,    75,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    63,    64,    65,    66,
      67,    68,    69,    11,    -1,    72,    14,    15,    -1,    -1,
      18,    19,    20,    63,    64,    65,    63,    64,    65,    63,
      64,    65,    72,    -1,    -1,    72,    -1,    -1,    72,    63,
      64,    65,    63,    64,    65,    -1,    -1,    -1,    72,    -1,
      -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    78,     0,     1,     3,     4,     5,     6,    16,    17,
      21,    22,    23,    24,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    64,    71,    73,    75,    79,    80,    81,    82,    70,
      11,    14,    15,    11,    14,    15,    18,    19,    20,    70,
      70,    70,    71,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,     4,     6,    81,    82,    81,    82,
      81,    82,    81,    70,    70,    12,    13,    63,    64,    65,
      66,    67,    68,    69,    12,    13,    63,    64,    65,     4,
      79,    81,    70,    70,     6,    80,    81,    82,    70,    70,
      11,    11,    11,    25,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    81,
      81,    82,    82,    82,    82,    18,    19,    20,    72,    73,
      73,    74,    76,    70,    70,    81,    81,    81,    82,    81,
      81,    81,    70,    70,    82,    82,    82,    81,    81,    81,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    74,
      74,    72,    74,    74,    74,    74,    72,    72,    74,    72,
      74,    74,    81,    70,    81,    81,    81,    81,    81,    82,
      82,    82,    82,    74,    76,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    81,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    77,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     4,     4,     4,     4,     3,     4,     4,
       4,     4,     3,     3,     3,     6,     3,     3,     3,     0,
       3,     3,     3,     3,     4,     4,     4,     3,     3,     3,
       3,     3,     3,     2,     3,     2,     2,     2,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     3,     4,     4,     6,     4,     4,     4,     6,
       6,     6,     4,     4,     3,     4,     3,     6,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       5,     3,     3,     3,     3,     2,     6,     6,     6,     4,
       1,     1
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
#line 70 "a.y"
                            { ; }
#line 1715 "y.tab.c"
    break;

  case 3:
#line 71 "a.y"
                            { printf(">> %s = %g\n",(yyvsp[-2].pReal)->name, (yyvsp[-2].pReal)->value); }
#line 1721 "y.tab.c"
    break;

  case 4:
#line 72 "a.y"
                            { printf(">> %s = %f\n",(yyvsp[-2].pReal)->name, (yyvsp[-2].pReal)->value); }
#line 1727 "y.tab.c"
    break;

  case 5:
#line 73 "a.y"
                            { printf(">> %g\n", (yyvsp[-2].real_s)); }
#line 1733 "y.tab.c"
    break;

  case 6:
#line 74 "a.y"
                            { printf(">> %f\n", (yyvsp[-2].real_s)); }
#line 1739 "y.tab.c"
    break;

  case 7:
#line 75 "a.y"
                            { ; }
#line 1745 "y.tab.c"
    break;

  case 8:
#line 76 "a.y"
                            { printf(">> %s = [%g, %g, %g]\n",(yyvsp[-2].pVector)->name, (yyvsp[-2].pVector)->value[0], (yyvsp[-2].pVector)->value[1], (yyvsp[-2].pVector)->value[2]); }
#line 1751 "y.tab.c"
    break;

  case 9:
#line 77 "a.y"
                            { printf(">> %s = [%f, %f, %f]\n",(yyvsp[-2].pVector)->name, (yyvsp[-2].pVector)->value[0], (yyvsp[-2].pVector)->value[1], (yyvsp[-2].pVector)->value[2]); }
#line 1757 "y.tab.c"
    break;

  case 10:
#line 78 "a.y"
                            { printf(">> %g, %g, %g\n", (yyvsp[-2].vector_s)[0], (yyvsp[-2].vector_s)[1], (yyvsp[-2].vector_s)[2]); }
#line 1763 "y.tab.c"
    break;

  case 11:
#line 79 "a.y"
                            { printf(">> %f, %f, %f\n", (yyvsp[-2].vector_s)[0], (yyvsp[-2].vector_s)[1], (yyvsp[-2].vector_s)[2]); }
#line 1769 "y.tab.c"
    break;

  case 12:
#line 80 "a.y"
                            { printReal(t,0); printVector(v,0); }
#line 1775 "y.tab.c"
    break;

  case 13:
#line 81 "a.y"
                            { printReal(t,1); printVector(v,1); }
#line 1781 "y.tab.c"
    break;

  case 14:
#line 82 "a.y"
                            { printConsts(); }
#line 1787 "y.tab.c"
    break;

  case 15:
#line 83 "a.y"
                            { v = NULL; t = NULL; }
#line 1793 "y.tab.c"
    break;

  case 16:
#line 84 "a.y"
                            { ClearScreen(); }
#line 1799 "y.tab.c"
    break;

  case 17:
#line 85 "a.y"
                            { exit (EXIT_SUCCESS); }
#line 1805 "y.tab.c"
    break;

  case 18:
#line 86 "a.y"
                            { 
                              printf("E: Something is missing (';')\n");
                              yyerrok; 
                            }
#line 1814 "y.tab.c"
    break;

  case 20:
#line 94 "a.y"
                            {
                                (yyval.real_s) = (yyvsp[0].real_s);
                                (yyvsp[-2].pReal)->value = (yyvsp[0].real_s);
                            }
#line 1823 "y.tab.c"
    break;

  case 21:
#line 98 "a.y"
                            {
                                (yyval.real_s) = (yyvsp[0].real_s);
                                (yyvsp[-2].pReal)->value = (yyvsp[0].real_s);
                            }
#line 1832 "y.tab.c"
    break;

  case 22:
#line 105 "a.y"
                            {
                                memcpy((yyval.vector_s), (yyvsp[0].vector_s), 3*sizeof(double));
                                (yyvsp[-2].pVector)->value[0] = (yyvsp[0].vector_s)[0];
                                (yyvsp[-2].pVector)->value[1] = (yyvsp[0].vector_s)[1];
                                (yyvsp[-2].pVector)->value[2] = (yyvsp[0].vector_s)[2];
                            }
#line 1843 "y.tab.c"
    break;

  case 23:
#line 111 "a.y"
                            {
                                memcpy((yyval.vector_s), (yyvsp[0].vector_s), 3*sizeof(double));
                                (yyvsp[-2].pVector)->value[0] = (yyvsp[0].vector_s)[0];
                                (yyvsp[-2].pVector)->value[1] = (yyvsp[0].vector_s)[1];
                                (yyvsp[-2].pVector)->value[2] = (yyvsp[0].vector_s)[2];
                            }
#line 1854 "y.tab.c"
    break;

  case 24:
#line 117 "a.y"
                               { (yyvsp[-3].pVector)->value[0] = (yyvsp[0].real_s); }
#line 1860 "y.tab.c"
    break;

  case 25:
#line 118 "a.y"
                               { (yyvsp[-3].pVector)->value[1] = (yyvsp[0].real_s); }
#line 1866 "y.tab.c"
    break;

  case 26:
#line 119 "a.y"
                               { (yyvsp[-3].pVector)->value[2] = (yyvsp[0].real_s); }
#line 1872 "y.tab.c"
    break;

  case 27:
#line 140 "a.y"
                                    { (yyval.real_s) = (yyvsp[-2].real_s) + (yyvsp[0].real_s); }
#line 1878 "y.tab.c"
    break;

  case 28:
#line 141 "a.y"
                                        { (yyval.real_s) = (yyvsp[-2].real_s) - (yyvsp[0].real_s); }
#line 1884 "y.tab.c"
    break;

  case 29:
#line 142 "a.y"
                                        { (yyval.real_s) = (yyvsp[-2].real_s) * (yyvsp[0].real_s); }
#line 1890 "y.tab.c"
    break;

  case 30:
#line 143 "a.y"
                                        {
                                if((yyvsp[0].real_s) == 0){
                                    printf("E: Division by zero\n");
                                    (yyval.real_s) = 0;
                                }else{
                                    (yyval.real_s) = (yyvsp[-2].real_s) / (yyvsp[0].real_s);
                                }
                            }
#line 1903 "y.tab.c"
    break;

  case 31:
#line 151 "a.y"
                                        { (yyval.real_s) = (yyvsp[-1].real_s); }
#line 1909 "y.tab.c"
    break;

  case 32:
#line 152 "a.y"
                                        { (yyval.real_s) = pow((yyvsp[-2].real_s),(yyvsp[0].real_s)); }
#line 1915 "y.tab.c"
    break;

  case 33:
#line 153 "a.y"
                                    { (yyval.real_s) = -(yyvsp[0].real_s); }
#line 1921 "y.tab.c"
    break;

  case 34:
#line 154 "a.y"
                                        { (yyval.real_s) = (int)(yyvsp[-2].real_s) % (int)(yyvsp[0].real_s); }
#line 1927 "y.tab.c"
    break;

  case 35:
#line 155 "a.y"
                                    { (yyval.real_s) = factorial((yyvsp[-1].real_s)); }
#line 1933 "y.tab.c"
    break;

  case 36:
#line 158 "a.y"
                            { (yyval.real_s) = (yyvsp[-1].pVector)->value[0]; }
#line 1939 "y.tab.c"
    break;

  case 37:
#line 159 "a.y"
                            { (yyval.real_s) = (yyvsp[-1].pVector)->value[1]; }
#line 1945 "y.tab.c"
    break;

  case 38:
#line 160 "a.y"
                            { (yyval.real_s) = (yyvsp[-1].pVector)->value[2]; }
#line 1951 "y.tab.c"
    break;

  case 39:
#line 163 "a.y"
                                { (yyval.real_s) = cos((yyvsp[-1].real_s)); }
#line 1957 "y.tab.c"
    break;

  case 40:
#line 164 "a.y"
                            { (yyval.real_s) = acos((yyvsp[-1].real_s)); }
#line 1963 "y.tab.c"
    break;

  case 41:
#line 165 "a.y"
                            { (yyval.real_s) = cosh((yyvsp[-1].real_s)); }
#line 1969 "y.tab.c"
    break;

  case 42:
#line 166 "a.y"
                            { (yyval.real_s) = acosh((yyvsp[-1].real_s)); }
#line 1975 "y.tab.c"
    break;

  case 43:
#line 167 "a.y"
                                { (yyval.real_s) = sin((yyvsp[-1].real_s)); }
#line 1981 "y.tab.c"
    break;

  case 44:
#line 168 "a.y"
                            { (yyval.real_s) = asin((yyvsp[-1].real_s)); }
#line 1987 "y.tab.c"
    break;

  case 45:
#line 169 "a.y"
                            { (yyval.real_s) = sinh((yyvsp[-1].real_s)); }
#line 1993 "y.tab.c"
    break;

  case 46:
#line 170 "a.y"
                            { (yyval.real_s) = asinh((yyvsp[-1].real_s)); }
#line 1999 "y.tab.c"
    break;

  case 47:
#line 171 "a.y"
                                { (yyval.real_s) = tan((yyvsp[-1].real_s)); }
#line 2005 "y.tab.c"
    break;

  case 48:
#line 172 "a.y"
                            { (yyval.real_s) = atan((yyvsp[-1].real_s)); }
#line 2011 "y.tab.c"
    break;

  case 49:
#line 173 "a.y"
                            { (yyval.real_s) = tanh((yyvsp[-1].real_s)); }
#line 2017 "y.tab.c"
    break;

  case 50:
#line 174 "a.y"
                            { (yyval.real_s) = atanh((yyvsp[-1].real_s)); }
#line 2023 "y.tab.c"
    break;

  case 51:
#line 177 "a.y"
                                { (yyval.real_s) = fabs((yyvsp[-1].real_s)); }
#line 2029 "y.tab.c"
    break;

  case 52:
#line 178 "a.y"
                            { (yyval.real_s) = fabs((yyvsp[-1].real_s)); }
#line 2035 "y.tab.c"
    break;

  case 53:
#line 179 "a.y"
                                { (yyval.real_s) = exp((yyvsp[-1].real_s)); }
#line 2041 "y.tab.c"
    break;

  case 54:
#line 180 "a.y"
                                { (yyval.real_s) = log((yyvsp[-1].real_s)); }
#line 2047 "y.tab.c"
    break;

  case 55:
#line 181 "a.y"
                            { (yyval.real_s) = log((yyvsp[-3].real_s))/log((yyvsp[-1].real_s)); }
#line 2053 "y.tab.c"
    break;

  case 56:
#line 182 "a.y"
                                { (yyval.real_s) = sqrt((yyvsp[-1].real_s)); }
#line 2059 "y.tab.c"
    break;

  case 57:
#line 183 "a.y"
                                { (yyval.real_s) = ceil((yyvsp[-1].real_s)); }
#line 2065 "y.tab.c"
    break;

  case 58:
#line 184 "a.y"
                                { (yyval.real_s) = floor((yyvsp[-1].real_s)); }
#line 2071 "y.tab.c"
    break;

  case 59:
#line 185 "a.y"
                            {
                                srand(time(NULL));
                                (yyval.real_s)=rand()%(int)(((yyvsp[-1].real_s)-(yyvsp[-3].real_s)+1)+(yyvsp[-3].real_s));
                            }
#line 2080 "y.tab.c"
    break;

  case 60:
#line 189 "a.y"
                            { (yyval.real_s) = gcd((yyvsp[-3].real_s),(yyvsp[-1].real_s)); }
#line 2086 "y.tab.c"
    break;

  case 61:
#line 190 "a.y"
                            { (yyval.real_s) = lcm((yyvsp[-3].real_s),(yyvsp[-1].real_s)); }
#line 2092 "y.tab.c"
    break;

  case 62:
#line 191 "a.y"
                            { (yyval.real_s) = nthPrime((int)(yyvsp[-1].real_s)); }
#line 2098 "y.tab.c"
    break;

  case 63:
#line 192 "a.y"
                            { (yyval.real_s) = nthFibonacci((int)(yyvsp[-1].real_s)); }
#line 2104 "y.tab.c"
    break;

  case 64:
#line 195 "a.y"
                            { (yyval.real_s) = dotProduct((yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2110 "y.tab.c"
    break;

  case 65:
#line 196 "a.y"
                            { (yyval.real_s) = magnitude((yyvsp[-1].vector_s)); }
#line 2116 "y.tab.c"
    break;

  case 66:
#line 197 "a.y"
                            { (yyval.real_s) = magnitude((yyvsp[-1].vector_s)); }
#line 2122 "y.tab.c"
    break;

  case 67:
#line 198 "a.y"
                            { (yyval.real_s) = distanceVector((yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2128 "y.tab.c"
    break;

  case 68:
#line 199 "a.y"
                            { (yyval.real_s) = fabs((yyvsp[-1].real_s) - (yyvsp[-3].real_s)); }
#line 2134 "y.tab.c"
    break;

  case 69:
#line 202 "a.y"
                            { (yyval.real_s) = M_PI; }
#line 2140 "y.tab.c"
    break;

  case 70:
#line 203 "a.y"
                            { (yyval.real_s) = M_G; }
#line 2146 "y.tab.c"
    break;

  case 71:
#line 204 "a.y"
                            { (yyval.real_s) = M_K; }
#line 2152 "y.tab.c"
    break;

  case 72:
#line 205 "a.y"
                            { (yyval.real_s) = M_VLIGHT; }
#line 2158 "y.tab.c"
    break;

  case 73:
#line 206 "a.y"
                            { (yyval.real_s) = M_ELECTRON; }
#line 2164 "y.tab.c"
    break;

  case 74:
#line 207 "a.y"
                            { (yyval.real_s) = -M_ELECTRON; }
#line 2170 "y.tab.c"
    break;

  case 75:
#line 208 "a.y"
                            { (yyval.real_s) = 0; }
#line 2176 "y.tab.c"
    break;

  case 76:
#line 209 "a.y"
                            { (yyval.real_s) = M_EULER; }
#line 2182 "y.tab.c"
    break;

  case 77:
#line 211 "a.y"
                            { (yyval.real_s) = (yyvsp[0].pReal)->value; }
#line 2188 "y.tab.c"
    break;

  case 78:
#line 212 "a.y"
                            { (yyval.real_s) = (yyvsp[0].real_s); }
#line 2194 "y.tab.c"
    break;

  case 79:
#line 216 "a.y"
                            { (yyval.vector_s)[0] = (yyvsp[-5].real_s); (yyval.vector_s)[1] = (yyvsp[-3].real_s); (yyval.vector_s)[2] = (yyvsp[-1].real_s); }
#line 2200 "y.tab.c"
    break;

  case 80:
#line 217 "a.y"
                            { (yyval.vector_s)[0] = (yyvsp[-3].real_s); (yyval.vector_s)[1] = (yyvsp[-1].real_s); }
#line 2206 "y.tab.c"
    break;

  case 81:
#line 218 "a.y"
                            { (yyval.vector_s)[0] = (yyvsp[-1].real_s); }
#line 2212 "y.tab.c"
    break;

  case 82:
#line 219 "a.y"
                            { addVector((yyval.vector_s), (yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2218 "y.tab.c"
    break;

  case 83:
#line 220 "a.y"
                            { minusVector((yyval.vector_s), (yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2224 "y.tab.c"
    break;

  case 84:
#line 221 "a.y"
                            { escalarVector((yyval.vector_s), (yyvsp[0].vector_s), (yyvsp[-2].real_s));}
#line 2230 "y.tab.c"
    break;

  case 85:
#line 222 "a.y"
                            { escalarVector((yyval.vector_s), (yyvsp[0].vector_s), -1.0); }
#line 2236 "y.tab.c"
    break;

  case 86:
#line 224 "a.y"
                            { crossProduct((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2242 "y.tab.c"
    break;

  case 87:
#line 225 "a.y"
                            { projectionVector((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2248 "y.tab.c"
    break;

  case 88:
#line 226 "a.y"
                            { normalVector((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2254 "y.tab.c"
    break;

  case 89:
#line 227 "a.y"
                            { unitVector((yyval.vector_s), (yyvsp[-1].vector_s)); }
#line 2260 "y.tab.c"
    break;

  case 90:
#line 229 "a.y"
                            { memcpy((yyval.vector_s), (yyvsp[0].pVector)->value, VECTOR_SZ); }
#line 2266 "y.tab.c"
    break;

  case 91:
#line 230 "a.y"
                            { memcpy((yyval.vector_s), (yyvsp[0].vector_s), VECTOR_SZ); }
#line 2272 "y.tab.c"
    break;


#line 2276 "y.tab.c"

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
#line 241 "a.y"

#include "lex.yy.c"
//#include "errorlib.c"

int main()
{
    t = create();
    v = createVector();
    //Input feedback
    printf("Calcpreter 0.0.1\n<< ");
    yyparse();
    return 0;
}

int yyerror(){
	return 0;
}
