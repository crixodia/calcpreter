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

    //Tablas de símbolo
    real * t;
    vector * v;

    //Prototipos
    int yylex(void);
    int yyerror();

#line 85 "y.tab.c"

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
    asg = 262,
    print = 263,
    printd = 264,
    info = 265,
    infod = 266,
    list = 267,
    listd = 268,
    canoni = 269,
    canonj = 270,
    canonk = 271,
    consts = 272,
    del = 273,
    leave = 274,
    clc = 275,
    dot = 276,
    all = 277,
    pi = 278,
    euler = 279,
    gravi = 280,
    coulomb = 281,
    electron = 282,
    proton = 283,
    neutron = 284,
    vlight = 285,
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
    GCD = 304,
    EXP = 305,
    LOG = 306,
    LCM = 307,
    ROUND = 308,
    FIX = 309,
    MOD = 310,
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
#define asg 262
#define print 263
#define printd 264
#define info 265
#define infod 266
#define list 267
#define listd 268
#define canoni 269
#define canonj 270
#define canonk 271
#define consts 272
#define del 273
#define leave 274
#define clc 275
#define dot 276
#define all 277
#define pi 278
#define euler 279
#define gravi 280
#define coulomb 281
#define electron 282
#define proton 283
#define neutron 284
#define vlight 285
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
#define GCD 304
#define EXP 305
#define LOG 306
#define LCM 307
#define ROUND 308
#define FIX 309
#define MOD 310
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
#line 16 "a.y"

    double real_s;
    real * pReal;

    double vector_s[3];
    vector * pVector;

#line 266 "y.tab.c"

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
#define YYLAST   832

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

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
       0,    52,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    66,    70,    71,    74,    75,    76,    80,
      84,    85,    89,    93,    97,    98,    99,   103,   104,   105,
     106,   117,   118,   119,   120,   121,   124,   125,   126,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     155,   156,   157,   158,   159,   160,   161,   164,   165,   166,
     167,   168,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   184,   185,   186,   187,   188,   189,   190,   192,
     193,   194,   195,   197,   198
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "id", "VECTOR", "id_vector",
  "asg", "print", "printd", "info", "infod", "list", "listd", "canoni",
  "canonj", "canonk", "consts", "del", "leave", "clc", "dot", "all", "pi",
  "euler", "gravi", "coulomb", "electron", "proton", "neutron", "vlight",
  "COS", "SIN", "TAN", "ACOS", "ASIN", "ATAN", "COSH", "SINH", "TANH",
  "ACOSH", "ASINH", "ATANH", "ABS", "LN", "SQRT", "CEIL", "FLOOR", "RND",
  "GCD", "EXP", "LOG", "LCM", "ROUND", "FIX", "MOD", "distance", "nthpri",
  "nthfib", "pcrux", "unit", "proy", "norm", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "'!'", "';'", "'('", "')'", "'|'", "','", "'['", "']'",
  "$accept", "stmt", "assign", "v_assign", "expr", "v_expr", YY_NULLPTR
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

#define YYPACT_NINF (-70)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -70,   295,   -70,   -69,   -70,   141,   -70,   362,   -63,   -50,
     -48,   -38,   -36,   -34,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -21,   -11,    35,    44,    47,    49,    50,    64,
      66,    67,    69,    78,    84,    85,   100,   103,   104,   106,
     107,   140,   150,   155,   158,   162,   172,   174,   183,   193,
     203,   213,   216,   218,   357,   357,   357,   357,    -9,    46,
       0,    -6,   -70,   419,    80,   142,   481,   195,   205,   129,
     237,   278,   -70,   -70,   -70,   188,   -70,   -70,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     -70,   -10,   -20,   225,   184,   -46,   173,   159,   -53,   -70,
     -70,   222,   227,   357,   357,   357,   357,   357,   357,   -70,
     235,   236,   357,   357,   357,   302,   -70,     7,   -70,   -70,
     166,   -70,     7,   -46,   -70,   -70,   357,   357,   357,   238,
     194,   204,   214,   494,   504,   514,   524,   534,   544,   554,
     564,   574,   584,   239,   594,   604,   614,   624,    45,    65,
     634,    98,   127,   644,   654,   139,   151,    79,   664,   674,
     105,   483,   123,   135,   -70,   -70,   -70,   -70,   -70,   -70,
     357,   -70,   -70,   -70,   -20,   -20,   -37,   -70,   -37,   -37,
     -37,   -70,   -70,   225,   225,   -70,     7,     7,     7,   246,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   357,   357,
     -70,   357,   357,   -70,   -70,   357,   357,   357,   -70,   -70,
     357,   -70,   357,   357,   -39,   -70,   684,   694,   704,   714,
     724,   734,   744,   747,   750,   760,   357,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -25,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      19,     0,     1,     0,    81,    80,    94,    93,     0,     0,
       0,     0,     0,     0,    72,    79,    73,    74,    76,    77,
      78,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    36,
      37,    38,    12,    13,    14,     0,    17,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    93,    33,    88,     0,     0,     0,     0,     0,     2,
       7,     0,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,    80,    21,    20,     3,     4,
      93,    23,     0,    22,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    37,    38,    31,    52,    69,
       0,    84,     5,     6,    27,    28,    29,    87,    30,    34,
      32,    10,    11,    85,    86,    67,    24,    25,    26,     0,
      39,    43,    47,    40,    44,    48,    41,    45,    49,    42,
      46,    50,    51,    68,    54,    56,    57,    58,     0,     0,
      53,     0,     0,    62,    60,     0,     0,     0,    65,    66,
       0,    92,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    59,    63,
      55,    64,    61,    71,    70,    89,    90,    91,     0,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   254,   292,    -1,    51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    58,    59,   142,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    62,   130,   131,   184,   185,   186,    72,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   132,   133,   134,
      73,   190,    74,   191,   123,   124,   125,   126,   127,   128,
     129,   128,   129,    75,    76,   256,    77,   257,   123,   124,
     125,   126,   127,   128,   129,   125,   126,   127,   128,   129,
      78,   269,    61,   112,   114,   116,   118,   132,   133,   134,
      79,   119,   137,   123,   124,   125,   126,   127,   128,   129,
     123,   124,   125,   126,   127,   128,   129,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   178,   179,   113,    80,   117,   123,   124,
     125,   126,   127,   128,   129,    81,   120,   143,    82,   228,
      83,    84,   194,   195,   196,   198,   199,   200,   123,   124,
     125,   126,   127,   128,   129,    85,   146,    86,    87,   229,
      88,   163,   132,   133,   134,   206,   207,   208,    63,    89,
     138,    64,    65,   237,   177,    90,    91,   180,   181,   182,
     183,   123,   124,   125,   126,   127,   128,   129,   132,   133,
     134,    92,   231,    66,    93,    94,   197,    95,    96,   240,
      69,    70,    71,   203,   204,   205,   132,   133,   134,   244,
     123,   124,   125,   126,   127,   128,   129,   242,   132,   133,
     134,   232,   123,   124,   125,   126,   127,   128,   129,   243,
     149,    97,   139,   235,   123,   124,   125,   126,   127,   128,
     129,    98,   132,   133,   134,   236,    99,   246,   247,   100,
     248,   249,   189,   101,   250,   251,   123,   124,   125,   126,
     127,   128,   129,   102,   147,   103,   188,   123,   124,   125,
     126,   127,   128,   129,   104,   268,   187,   123,   124,   125,
     126,   127,   128,   129,   105,   144,   210,   123,   124,   125,
     126,   127,   128,   129,   106,   145,   211,   123,   124,   125,
     126,   127,   128,   129,   107,   148,   212,   108,   252,   109,
     134,   253,   192,   254,   255,     2,     3,   193,     4,     5,
       6,     7,   132,   133,   134,   201,   202,     8,     9,    63,
     209,   223,    10,    11,    12,    13,   245,   136,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   141,    54,
       4,   110,     6,   111,     0,     0,    55,     0,    56,    66,
      57,     0,    67,    68,     0,     0,    69,    70,    71,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,    54,     4,   135,     6,   111,     0,     0,    55,     0,
      56,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,    54,     4,   110,     6,   140,     0,     0,
      55,     0,    56,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,    54,   132,   133,   134,     0,
       0,     0,    55,     0,    56,   241,    57,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   213,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   214,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   215,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   216,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   217,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   218,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   219,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   220,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   221,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   222,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   224,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   225,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   226,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   227,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   230,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   233,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   234,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   238,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   239,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   258,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   259,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   260,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   261,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   262,   123,   124,   125,
     126,   127,   128,   129,     0,     0,   263,   132,   133,   134,
     132,   133,   134,   132,   133,   134,   264,     0,     0,   265,
       0,     0,   266,   132,   133,   134,     0,     0,     0,     0,
       0,     0,   267
};

static const yytype_int16 yycheck[] =
{
       1,    70,     8,     9,    14,    15,    16,    70,     8,     9,
      63,    64,    65,    66,    67,    68,    69,    63,    64,    65,
      70,    74,    70,    76,    63,    64,    65,    66,    67,    68,
      69,    68,    69,    71,    70,    74,    70,    76,    63,    64,
      65,    66,    67,    68,    69,    65,    66,    67,    68,    69,
      71,    76,     1,    54,    55,    56,    57,    63,    64,    65,
      71,    70,    63,    63,    64,    65,    66,    67,    68,    69,
      63,    64,    65,    66,    67,    68,    69,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    54,    71,    56,    63,    64,
      65,    66,    67,    68,    69,    71,    70,    66,    71,    74,
      71,    71,   123,   124,   125,   126,   127,   128,    63,    64,
      65,    66,    67,    68,    69,    71,     7,    71,    71,    74,
      71,    90,    63,    64,    65,   146,   147,   148,     7,    71,
      70,    10,    11,    74,   103,    71,    71,   106,   107,   108,
     109,    63,    64,    65,    66,    67,    68,    69,    63,    64,
      65,    71,    74,     7,    71,    71,   125,    71,    71,    74,
      14,    15,    16,   132,   133,   134,    63,    64,    65,   190,
      63,    64,    65,    66,    67,    68,    69,    74,    63,    64,
      65,    74,    63,    64,    65,    66,    67,    68,    69,    74,
      22,    71,    70,    74,    63,    64,    65,    66,    67,    68,
      69,    71,    63,    64,    65,    74,    71,   228,   229,    71,
     231,   232,    73,    71,   235,   236,    63,    64,    65,    66,
      67,    68,    69,    71,     7,    71,    73,    63,    64,    65,
      66,    67,    68,    69,    71,   256,    72,    63,    64,    65,
      66,    67,    68,    69,    71,    70,    72,    63,    64,    65,
      66,    67,    68,    69,    71,    70,    72,    63,    64,    65,
      66,    67,    68,    69,    71,     7,    72,    71,   237,    71,
      65,   240,    70,   242,   243,     0,     1,    70,     3,     4,
       5,     6,    63,    64,    65,    70,    70,    12,    13,     7,
      72,    72,    17,    18,    19,    20,    70,    63,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    66,    64,
       3,     4,     5,     6,    -1,    -1,    71,    -1,    73,     7,
      75,    -1,    10,    11,    -1,    -1,    14,    15,    16,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,     3,     4,     5,     6,    -1,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,     3,     4,     5,     6,    -1,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    63,    64,    65,    -1,
      -1,    -1,    71,    -1,    73,    72,    75,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    63,    64,    65,
      63,    64,    65,    63,    64,    65,    72,    -1,    -1,    72,
      -1,    -1,    72,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    78,     0,     1,     3,     4,     5,     6,    12,    13,
      17,    18,    19,    20,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    64,    71,    73,    75,    79,    80,
      81,    82,    70,     7,    10,    11,     7,    10,    11,    14,
      15,    16,    70,    70,    70,    71,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
       4,     6,    81,    82,    81,    82,    81,    82,    81,    70,
      70,     8,     9,    63,    64,    65,    66,    67,    68,    69,
       8,     9,    63,    64,    65,     4,    79,    81,    70,    70,
       6,    80,    81,    82,    70,    70,     7,     7,     7,    22,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    81,    81,
      82,    82,    82,    82,    14,    15,    16,    72,    73,    73,
      74,    76,    70,    70,    81,    81,    81,    82,    81,    81,
      81,    70,    70,    82,    82,    82,    81,    81,    81,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    74,    74,
      72,    74,    74,    72,    72,    74,    74,    74,    72,    72,
      74,    72,    74,    74,    81,    70,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    74,    76,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    81,    76
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
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82
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
       4,     6,     4,     6,     6,     4,     4,     3,     4,     3,
       6,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     5,     3,     3,     3,     3,     2,     6,
       6,     6,     4,     1,     1
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
#line 52 "a.y"
                                        { ; }
#line 1720 "y.tab.c"
    break;

  case 3:
#line 53 "a.y"
                                        { printf(">> %s = %g\n",(yyvsp[-2].pReal)->name, (yyvsp[-2].pReal)->value); }
#line 1726 "y.tab.c"
    break;

  case 4:
#line 54 "a.y"
                                        { printf(">> %s = %f\n",(yyvsp[-2].pReal)->name, (yyvsp[-2].pReal)->value); }
#line 1732 "y.tab.c"
    break;

  case 5:
#line 55 "a.y"
                                        { printf(">> %g\n", (yyvsp[-2].real_s)); }
#line 1738 "y.tab.c"
    break;

  case 6:
#line 56 "a.y"
                                        { printf(">> %f\n", (yyvsp[-2].real_s)); }
#line 1744 "y.tab.c"
    break;

  case 7:
#line 57 "a.y"
                                        { ; }
#line 1750 "y.tab.c"
    break;

  case 8:
#line 58 "a.y"
                                        { printf(">> %s = [%g, %g, %g]\n",(yyvsp[-2].pVector)->name, (yyvsp[-2].pVector)->value[0], (yyvsp[-2].pVector)->value[1], (yyvsp[-2].pVector)->value[2]); }
#line 1756 "y.tab.c"
    break;

  case 9:
#line 59 "a.y"
                                        { printf(">> %s = [%f, %f, %f]\n",(yyvsp[-2].pVector)->name, (yyvsp[-2].pVector)->value[0], (yyvsp[-2].pVector)->value[1], (yyvsp[-2].pVector)->value[2]); }
#line 1762 "y.tab.c"
    break;

  case 10:
#line 60 "a.y"
                                        { printf(">> %g, %g, %g\n", (yyvsp[-2].vector_s)[0], (yyvsp[-2].vector_s)[1], (yyvsp[-2].vector_s)[2]); }
#line 1768 "y.tab.c"
    break;

  case 11:
#line 61 "a.y"
                                        { printf(">> %f, %f, %f\n", (yyvsp[-2].vector_s)[0], (yyvsp[-2].vector_s)[1], (yyvsp[-2].vector_s)[2]); }
#line 1774 "y.tab.c"
    break;

  case 12:
#line 62 "a.y"
                                        { 
                                            printReal(t,0);
                                            printVector(v,0); 
                                        }
#line 1783 "y.tab.c"
    break;

  case 13:
#line 66 "a.y"
                                        { 
                                            printReal(t,1); 
                                            printVector(v,1);
                                        }
#line 1792 "y.tab.c"
    break;

  case 14:
#line 70 "a.y"
                                        { printConsts(); }
#line 1798 "y.tab.c"
    break;

  case 15:
#line 71 "a.y"
                                        { 
                                                v = NULL; t = NULL; 
                                        }
#line 1806 "y.tab.c"
    break;

  case 16:
#line 74 "a.y"
                                        { ClearScreen(); }
#line 1812 "y.tab.c"
    break;

  case 17:
#line 75 "a.y"
                                        { exit (EXIT_SUCCESS); }
#line 1818 "y.tab.c"
    break;

  case 18:
#line 76 "a.y"
                                        { 
                                            printf("E: Something is missing. Maybe ';' [error code: s-001] or check your data types [error code: l-001]\n");
                                            yyerrok; 
                                        }
#line 1827 "y.tab.c"
    break;

  case 20:
#line 84 "a.y"
                                        { (yyval.real_s) = (yyvsp[0].real_s); (yyvsp[-2].pReal)->value = (yyvsp[0].real_s); }
#line 1833 "y.tab.c"
    break;

  case 21:
#line 85 "a.y"
                                        { (yyval.real_s) = (yyvsp[0].real_s); (yyvsp[-2].pReal)->value = (yyvsp[0].real_s); }
#line 1839 "y.tab.c"
    break;

  case 22:
#line 89 "a.y"
                                        {
                                            memcpy((yyval.vector_s), (yyvsp[0].vector_s), 3*sizeof(double));
                                            memcpy((yyvsp[-2].pVector)->value, (yyvsp[0].vector_s), 3*sizeof(double));
                                        }
#line 1848 "y.tab.c"
    break;

  case 23:
#line 93 "a.y"
                                        {
                                            memcpy((yyval.vector_s), (yyvsp[0].vector_s), 3*sizeof(double));
                                            memcpy((yyvsp[-2].pVector)->value, (yyvsp[0].vector_s), 3*sizeof(double));
                                        }
#line 1857 "y.tab.c"
    break;

  case 24:
#line 97 "a.y"
                                        { (yyvsp[-3].pVector)->value[0] = (yyvsp[0].real_s); }
#line 1863 "y.tab.c"
    break;

  case 25:
#line 98 "a.y"
                                        { (yyvsp[-3].pVector)->value[1] = (yyvsp[0].real_s); }
#line 1869 "y.tab.c"
    break;

  case 26:
#line 99 "a.y"
                                        { (yyvsp[-3].pVector)->value[2] = (yyvsp[0].real_s); }
#line 1875 "y.tab.c"
    break;

  case 27:
#line 103 "a.y"
                                                { (yyval.real_s) = (yyvsp[-2].real_s) + (yyvsp[0].real_s); }
#line 1881 "y.tab.c"
    break;

  case 28:
#line 104 "a.y"
                                                { (yyval.real_s) = (yyvsp[-2].real_s) - (yyvsp[0].real_s); }
#line 1887 "y.tab.c"
    break;

  case 29:
#line 105 "a.y"
                                                { (yyval.real_s) = (yyvsp[-2].real_s) * (yyvsp[0].real_s); }
#line 1893 "y.tab.c"
    break;

  case 30:
#line 106 "a.y"
                                                {
                                            if ((yyvsp[0].real_s) == 0)
                                            {
                                                printf("E: Division by zero [error code: m-001]\n");
                                                (yyval.real_s) = 0;
                                            }
                                            else
                                            {
                                                (yyval.real_s) = (yyvsp[-2].real_s) / (yyvsp[0].real_s);
                                            }
                                        }
#line 1909 "y.tab.c"
    break;

  case 31:
#line 117 "a.y"
                                                { (yyval.real_s) = (yyvsp[-1].real_s); }
#line 1915 "y.tab.c"
    break;

  case 32:
#line 118 "a.y"
                                                { (yyval.real_s) = pow((yyvsp[-2].real_s),(yyvsp[0].real_s)); }
#line 1921 "y.tab.c"
    break;

  case 33:
#line 119 "a.y"
                                                    { (yyval.real_s) = -(yyvsp[0].real_s); }
#line 1927 "y.tab.c"
    break;

  case 34:
#line 120 "a.y"
                                                { (yyval.real_s) = (int)(yyvsp[-2].real_s) % (int)(yyvsp[0].real_s); }
#line 1933 "y.tab.c"
    break;

  case 35:
#line 121 "a.y"
                                                    { (yyval.real_s) = factorial((yyvsp[-1].real_s)); }
#line 1939 "y.tab.c"
    break;

  case 36:
#line 124 "a.y"
                                        { (yyval.real_s) = (yyvsp[-1].pVector)->value[0]; }
#line 1945 "y.tab.c"
    break;

  case 37:
#line 125 "a.y"
                                        { (yyval.real_s) = (yyvsp[-1].pVector)->value[1]; }
#line 1951 "y.tab.c"
    break;

  case 38:
#line 126 "a.y"
                                        { (yyval.real_s) = (yyvsp[-1].pVector)->value[2]; }
#line 1957 "y.tab.c"
    break;

  case 39:
#line 129 "a.y"
                                        { (yyval.real_s) = cos((yyvsp[-1].real_s)); }
#line 1963 "y.tab.c"
    break;

  case 40:
#line 130 "a.y"
                                        { (yyval.real_s) = acos((yyvsp[-1].real_s)); }
#line 1969 "y.tab.c"
    break;

  case 41:
#line 131 "a.y"
                                        { (yyval.real_s) = cosh((yyvsp[-1].real_s)); }
#line 1975 "y.tab.c"
    break;

  case 42:
#line 132 "a.y"
                                        { (yyval.real_s) = acosh((yyvsp[-1].real_s)); }
#line 1981 "y.tab.c"
    break;

  case 43:
#line 133 "a.y"
                                        { (yyval.real_s) = sin((yyvsp[-1].real_s)); }
#line 1987 "y.tab.c"
    break;

  case 44:
#line 134 "a.y"
                                        { (yyval.real_s) = asin((yyvsp[-1].real_s)); }
#line 1993 "y.tab.c"
    break;

  case 45:
#line 135 "a.y"
                                        { (yyval.real_s) = sinh((yyvsp[-1].real_s)); }
#line 1999 "y.tab.c"
    break;

  case 46:
#line 136 "a.y"
                                        { (yyval.real_s) = asinh((yyvsp[-1].real_s)); }
#line 2005 "y.tab.c"
    break;

  case 47:
#line 137 "a.y"
                                        { (yyval.real_s) = tan((yyvsp[-1].real_s)); }
#line 2011 "y.tab.c"
    break;

  case 48:
#line 138 "a.y"
                                        { (yyval.real_s) = atan((yyvsp[-1].real_s)); }
#line 2017 "y.tab.c"
    break;

  case 49:
#line 139 "a.y"
                                        { (yyval.real_s) = tanh((yyvsp[-1].real_s)); }
#line 2023 "y.tab.c"
    break;

  case 50:
#line 140 "a.y"
                                        { (yyval.real_s) = atanh((yyvsp[-1].real_s)); }
#line 2029 "y.tab.c"
    break;

  case 51:
#line 143 "a.y"
                                        { (yyval.real_s) = fabs((yyvsp[-1].real_s)); }
#line 2035 "y.tab.c"
    break;

  case 52:
#line 144 "a.y"
                                            { (yyval.real_s) = fabs((yyvsp[-1].real_s)); }
#line 2041 "y.tab.c"
    break;

  case 53:
#line 145 "a.y"
                                        { (yyval.real_s) = exp((yyvsp[-1].real_s)); }
#line 2047 "y.tab.c"
    break;

  case 54:
#line 146 "a.y"
                                                { (yyval.real_s) = log((yyvsp[-1].real_s)); }
#line 2053 "y.tab.c"
    break;

  case 55:
#line 147 "a.y"
                                        { (yyval.real_s) = log((yyvsp[-3].real_s))/log((yyvsp[-1].real_s)); }
#line 2059 "y.tab.c"
    break;

  case 56:
#line 148 "a.y"
                                                { (yyval.real_s) = sqrt((yyvsp[-1].real_s)); }
#line 2065 "y.tab.c"
    break;

  case 57:
#line 149 "a.y"
                                                { (yyval.real_s) = ceil((yyvsp[-1].real_s)); }
#line 2071 "y.tab.c"
    break;

  case 58:
#line 150 "a.y"
                                            { (yyval.real_s) = floor((yyvsp[-1].real_s)); }
#line 2077 "y.tab.c"
    break;

  case 59:
#line 151 "a.y"
                                        {
                                            srand(time(NULL));
                                            (yyval.real_s)=rand()%(int)(((yyvsp[-1].real_s)-(yyvsp[-3].real_s)+1)+(yyvsp[-3].real_s));
                                        }
#line 2086 "y.tab.c"
    break;

  case 60:
#line 155 "a.y"
                                        { (yyval.real_s) = (int)(yyvsp[-1].real_s); }
#line 2092 "y.tab.c"
    break;

  case 61:
#line 156 "a.y"
                                        { (yyval.real_s) = (int)(yyvsp[-3].real_s) % (int)(yyvsp[-1].real_s); }
#line 2098 "y.tab.c"
    break;

  case 62:
#line 157 "a.y"
                                        { (yyval.real_s) = round((yyvsp[-1].real_s)); }
#line 2104 "y.tab.c"
    break;

  case 63:
#line 158 "a.y"
                                        { (yyval.real_s) = gcd((yyvsp[-3].real_s),(yyvsp[-1].real_s)); }
#line 2110 "y.tab.c"
    break;

  case 64:
#line 159 "a.y"
                                        { (yyval.real_s) = lcm((yyvsp[-3].real_s),(yyvsp[-1].real_s)); }
#line 2116 "y.tab.c"
    break;

  case 65:
#line 160 "a.y"
                                        { (yyval.real_s) = nthPrime((int)(yyvsp[-1].real_s)); }
#line 2122 "y.tab.c"
    break;

  case 66:
#line 161 "a.y"
                                        { (yyval.real_s) = nthFibonacci((int)(yyvsp[-1].real_s)); }
#line 2128 "y.tab.c"
    break;

  case 67:
#line 164 "a.y"
                                        { (yyval.real_s) = dotProduct((yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2134 "y.tab.c"
    break;

  case 68:
#line 165 "a.y"
                                        { (yyval.real_s) = magnitude((yyvsp[-1].vector_s)); }
#line 2140 "y.tab.c"
    break;

  case 69:
#line 166 "a.y"
                                        { (yyval.real_s) = magnitude((yyvsp[-1].vector_s)); }
#line 2146 "y.tab.c"
    break;

  case 70:
#line 167 "a.y"
                                        { (yyval.real_s) = distanceVector((yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2152 "y.tab.c"
    break;

  case 71:
#line 168 "a.y"
                                        { (yyval.real_s) = fabs((yyvsp[-1].real_s) - (yyvsp[-3].real_s)); }
#line 2158 "y.tab.c"
    break;

  case 72:
#line 171 "a.y"
                                        { (yyval.real_s) = M_PI; }
#line 2164 "y.tab.c"
    break;

  case 73:
#line 172 "a.y"
                                        { (yyval.real_s) = M_G; }
#line 2170 "y.tab.c"
    break;

  case 74:
#line 173 "a.y"
                                        { (yyval.real_s) = M_K; }
#line 2176 "y.tab.c"
    break;

  case 75:
#line 174 "a.y"
                                        { (yyval.real_s) = M_VLIGHT; }
#line 2182 "y.tab.c"
    break;

  case 76:
#line 175 "a.y"
                                        { (yyval.real_s) = M_ELECTRON; }
#line 2188 "y.tab.c"
    break;

  case 77:
#line 176 "a.y"
                                        { (yyval.real_s) = -M_ELECTRON; }
#line 2194 "y.tab.c"
    break;

  case 78:
#line 177 "a.y"
                                        { (yyval.real_s) = 0; }
#line 2200 "y.tab.c"
    break;

  case 79:
#line 178 "a.y"
                                        { (yyval.real_s) = M_EULER; }
#line 2206 "y.tab.c"
    break;

  case 80:
#line 179 "a.y"
                                        { (yyval.real_s) = (yyvsp[0].pReal)->value; }
#line 2212 "y.tab.c"
    break;

  case 81:
#line 180 "a.y"
                                        { (yyval.real_s) = (yyvsp[0].real_s); }
#line 2218 "y.tab.c"
    break;

  case 82:
#line 184 "a.y"
                                        { (yyval.vector_s)[0] = (yyvsp[-5].real_s); (yyval.vector_s)[1] = (yyvsp[-3].real_s); (yyval.vector_s)[2] = (yyvsp[-1].real_s); }
#line 2224 "y.tab.c"
    break;

  case 83:
#line 185 "a.y"
                                        { (yyval.vector_s)[0] = (yyvsp[-3].real_s); (yyval.vector_s)[1] = (yyvsp[-1].real_s); }
#line 2230 "y.tab.c"
    break;

  case 84:
#line 186 "a.y"
                                        { (yyval.vector_s)[0] = (yyvsp[-1].real_s); }
#line 2236 "y.tab.c"
    break;

  case 85:
#line 187 "a.y"
                                        { addVector((yyval.vector_s), (yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2242 "y.tab.c"
    break;

  case 86:
#line 188 "a.y"
                                        { minusVector((yyval.vector_s), (yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2248 "y.tab.c"
    break;

  case 87:
#line 189 "a.y"
                                        { escalarVector((yyval.vector_s), (yyvsp[0].vector_s), (yyvsp[-2].real_s));}
#line 2254 "y.tab.c"
    break;

  case 88:
#line 190 "a.y"
                                        { escalarVector((yyval.vector_s), (yyvsp[0].vector_s), -1.0); }
#line 2260 "y.tab.c"
    break;

  case 89:
#line 192 "a.y"
                                        { crossProduct((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2266 "y.tab.c"
    break;

  case 90:
#line 193 "a.y"
                                        { projectionVector((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2272 "y.tab.c"
    break;

  case 91:
#line 194 "a.y"
                                        { normalVector((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2278 "y.tab.c"
    break;

  case 92:
#line 195 "a.y"
                                        { unitVector((yyval.vector_s), (yyvsp[-1].vector_s)); }
#line 2284 "y.tab.c"
    break;

  case 93:
#line 197 "a.y"
                                        { memcpy((yyval.vector_s), (yyvsp[0].pVector)->value, VECTOR_SZ); }
#line 2290 "y.tab.c"
    break;

  case 94:
#line 198 "a.y"
                                        { memcpy((yyval.vector_s), (yyvsp[0].vector_s), VECTOR_SZ); }
#line 2296 "y.tab.c"
    break;


#line 2300 "y.tab.c"

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
