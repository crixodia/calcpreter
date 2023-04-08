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
#line 1 "a.y"

    // Data types
    #include "Clc.c"
    #include "Real.c"
    #include "Vector.c"

    // Symbol tables
    real * t;
    vector * v;

    // Prototypes
    int yylex(void);
    int yyerror();

#line 86 "y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    REAL = 258,                    /* REAL  */
    id = 259,                      /* id  */
    VECTOR = 260,                  /* VECTOR  */
    id_vector = 261,               /* id_vector  */
    asg = 262,                     /* asg  */
    print = 263,                   /* print  */
    printd = 264,                  /* printd  */
    info = 265,                    /* info  */
    infod = 266,                   /* infod  */
    list = 267,                    /* list  */
    listd = 268,                   /* listd  */
    canoni = 269,                  /* canoni  */
    canonj = 270,                  /* canonj  */
    canonk = 271,                  /* canonk  */
    consts = 272,                  /* consts  */
    del = 273,                     /* del  */
    leave = 274,                   /* leave  */
    clc = 275,                     /* clc  */
    all = 276,                     /* all  */
    pi = 277,                      /* pi  */
    euler = 278,                   /* euler  */
    gravi = 279,                   /* gravi  */
    coulomb = 280,                 /* coulomb  */
    electron = 281,                /* electron  */
    proton = 282,                  /* proton  */
    neutron = 283,                 /* neutron  */
    vlight = 284,                  /* vlight  */
    COS = 285,                     /* COS  */
    SIN = 286,                     /* SIN  */
    TAN = 287,                     /* TAN  */
    ACOS = 288,                    /* ACOS  */
    ASIN = 289,                    /* ASIN  */
    ATAN = 290,                    /* ATAN  */
    COSH = 291,                    /* COSH  */
    SINH = 292,                    /* SINH  */
    TANH = 293,                    /* TANH  */
    ACOSH = 294,                   /* ACOSH  */
    ASINH = 295,                   /* ASINH  */
    ATANH = 296,                   /* ATANH  */
    ABS = 297,                     /* ABS  */
    LN = 298,                      /* LN  */
    SQRT = 299,                    /* SQRT  */
    CEIL = 300,                    /* CEIL  */
    FLOOR = 301,                   /* FLOOR  */
    RND = 302,                     /* RND  */
    GCD = 303,                     /* GCD  */
    EXP = 304,                     /* EXP  */
    LOG = 305,                     /* LOG  */
    LCM = 306,                     /* LCM  */
    ROUND = 307,                   /* ROUND  */
    FIX = 308,                     /* FIX  */
    MOD = 309,                     /* MOD  */
    distance = 310,                /* distance  */
    nthpri = 311,                  /* nthpri  */
    nthfib = 312,                  /* nthfib  */
    pcrux = 313,                   /* pcrux  */
    unit = 314,                    /* unit  */
    proy = 315,                    /* proy  */
    norm = 316,                    /* norm  */
    permut = 317,                  /* permut  */
    binomcoef = 318                /* binomcoef  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#define all 276
#define pi 277
#define euler 278
#define gravi 279
#define coulomb 280
#define electron 281
#define proton 282
#define neutron 283
#define vlight 284
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
#define GCD 303
#define EXP 304
#define LOG 305
#define LCM 306
#define ROUND 307
#define FIX 308
#define MOD 309
#define distance 310
#define nthpri 311
#define nthfib 312
#define pcrux 313
#define unit 314
#define proy 315
#define norm 316
#define permut 317
#define binomcoef 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "a.y"

    double real_s;
    real * pReal;

    double vector_s[3];
    vector * pVector;

#line 270 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_REAL = 3,                       /* REAL  */
  YYSYMBOL_id = 4,                         /* id  */
  YYSYMBOL_VECTOR = 5,                     /* VECTOR  */
  YYSYMBOL_id_vector = 6,                  /* id_vector  */
  YYSYMBOL_asg = 7,                        /* asg  */
  YYSYMBOL_print = 8,                      /* print  */
  YYSYMBOL_printd = 9,                     /* printd  */
  YYSYMBOL_info = 10,                      /* info  */
  YYSYMBOL_infod = 11,                     /* infod  */
  YYSYMBOL_list = 12,                      /* list  */
  YYSYMBOL_listd = 13,                     /* listd  */
  YYSYMBOL_canoni = 14,                    /* canoni  */
  YYSYMBOL_canonj = 15,                    /* canonj  */
  YYSYMBOL_canonk = 16,                    /* canonk  */
  YYSYMBOL_consts = 17,                    /* consts  */
  YYSYMBOL_del = 18,                       /* del  */
  YYSYMBOL_leave = 19,                     /* leave  */
  YYSYMBOL_clc = 20,                       /* clc  */
  YYSYMBOL_all = 21,                       /* all  */
  YYSYMBOL_pi = 22,                        /* pi  */
  YYSYMBOL_euler = 23,                     /* euler  */
  YYSYMBOL_gravi = 24,                     /* gravi  */
  YYSYMBOL_coulomb = 25,                   /* coulomb  */
  YYSYMBOL_electron = 26,                  /* electron  */
  YYSYMBOL_proton = 27,                    /* proton  */
  YYSYMBOL_neutron = 28,                   /* neutron  */
  YYSYMBOL_vlight = 29,                    /* vlight  */
  YYSYMBOL_COS = 30,                       /* COS  */
  YYSYMBOL_SIN = 31,                       /* SIN  */
  YYSYMBOL_TAN = 32,                       /* TAN  */
  YYSYMBOL_ACOS = 33,                      /* ACOS  */
  YYSYMBOL_ASIN = 34,                      /* ASIN  */
  YYSYMBOL_ATAN = 35,                      /* ATAN  */
  YYSYMBOL_COSH = 36,                      /* COSH  */
  YYSYMBOL_SINH = 37,                      /* SINH  */
  YYSYMBOL_TANH = 38,                      /* TANH  */
  YYSYMBOL_ACOSH = 39,                     /* ACOSH  */
  YYSYMBOL_ASINH = 40,                     /* ASINH  */
  YYSYMBOL_ATANH = 41,                     /* ATANH  */
  YYSYMBOL_ABS = 42,                       /* ABS  */
  YYSYMBOL_LN = 43,                        /* LN  */
  YYSYMBOL_SQRT = 44,                      /* SQRT  */
  YYSYMBOL_CEIL = 45,                      /* CEIL  */
  YYSYMBOL_FLOOR = 46,                     /* FLOOR  */
  YYSYMBOL_RND = 47,                       /* RND  */
  YYSYMBOL_GCD = 48,                       /* GCD  */
  YYSYMBOL_EXP = 49,                       /* EXP  */
  YYSYMBOL_LOG = 50,                       /* LOG  */
  YYSYMBOL_LCM = 51,                       /* LCM  */
  YYSYMBOL_ROUND = 52,                     /* ROUND  */
  YYSYMBOL_FIX = 53,                       /* FIX  */
  YYSYMBOL_MOD = 54,                       /* MOD  */
  YYSYMBOL_distance = 55,                  /* distance  */
  YYSYMBOL_nthpri = 56,                    /* nthpri  */
  YYSYMBOL_nthfib = 57,                    /* nthfib  */
  YYSYMBOL_pcrux = 58,                     /* pcrux  */
  YYSYMBOL_unit = 59,                      /* unit  */
  YYSYMBOL_proy = 60,                      /* proy  */
  YYSYMBOL_norm = 61,                      /* norm  */
  YYSYMBOL_permut = 62,                    /* permut  */
  YYSYMBOL_binomcoef = 63,                 /* binomcoef  */
  YYSYMBOL_64_ = 64,                       /* '+'  */
  YYSYMBOL_65_ = 65,                       /* '-'  */
  YYSYMBOL_66_ = 66,                       /* '*'  */
  YYSYMBOL_67_ = 67,                       /* '/'  */
  YYSYMBOL_68_ = 68,                       /* '%'  */
  YYSYMBOL_69_ = 69,                       /* '^'  */
  YYSYMBOL_70_ = 70,                       /* '!'  */
  YYSYMBOL_71_ = 71,                       /* ';'  */
  YYSYMBOL_72_ = 72,                       /* '('  */
  YYSYMBOL_73_ = 73,                       /* ')'  */
  YYSYMBOL_74_ = 74,                       /* ','  */
  YYSYMBOL_75_ = 75,                       /* '|'  */
  YYSYMBOL_76_ = 76,                       /* '['  */
  YYSYMBOL_77_ = 77,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 78,                  /* $accept  */
  YYSYMBOL_stmt = 79,                      /* stmt  */
  YYSYMBOL_assign = 80,                    /* assign  */
  YYSYMBOL_v_assign = 81,                  /* v_assign  */
  YYSYMBOL_expr = 82,                      /* expr  */
  YYSYMBOL_v_expr = 83                     /* v_expr  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   886

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  282

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


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
       2,     2,     2,    70,     2,     2,     2,    68,     2,     2,
      72,    73,    66,    64,    74,    65,     2,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    71,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    75,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    66,    70,    71,    74,    75,    76,    80,
      84,    85,    89,    93,    97,    98,    99,   103,   104,   105,
     106,   117,   118,   119,   120,   121,   122,   123,   126,   127,
     128,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   157,   158,   159,   160,   161,   162,   163,   166,
     167,   168,   169,   170,   173,   174,   175,   176,   177,   178,
     179,   180,   182,   183,   187,   188,   189,   190,   191,   192,
     193,   195,   196,   197,   198,   200,   201
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
  "\"end of file\"", "error", "\"invalid token\"", "REAL", "id", "VECTOR",
  "id_vector", "asg", "print", "printd", "info", "infod", "list", "listd",
  "canoni", "canonj", "canonk", "consts", "del", "leave", "clc", "all",
  "pi", "euler", "gravi", "coulomb", "electron", "proton", "neutron",
  "vlight", "COS", "SIN", "TAN", "ACOS", "ASIN", "ATAN", "COSH", "SINH",
  "TANH", "ACOSH", "ASINH", "ATANH", "ABS", "LN", "SQRT", "CEIL", "FLOOR",
  "RND", "GCD", "EXP", "LOG", "LCM", "ROUND", "FIX", "MOD", "distance",
  "nthpri", "nthfib", "pcrux", "unit", "proy", "norm", "permut",
  "binomcoef", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'!'", "';'",
  "'('", "')'", "','", "'|'", "'['", "']'", "$accept", "stmt", "assign",
  "v_assign", "expr", "v_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -69,   301,   -69,   -63,   -69,    12,   -69,   368,   -51,   -35,
     -34,   -54,   -17,    -8,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -33,   -10,    36,    38,    48,    50,    60,    68,
      70,    76,    80,    82,    85,    86,   100,   113,   114,   118,
     120,   121,   122,   131,   133,   142,   144,   160,   167,   179,
     188,   190,   192,   201,   203,   216,   364,   364,   364,   364,
     221,   224,     1,    -5,   -69,   427,   232,   240,   490,   241,
     245,   116,   134,   146,   -69,   -69,   -69,   150,   -69,   -69,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   -69,    -9,   -19,    55,   503,   -32,
      69,    49,   -53,   -69,   -69,   251,   294,   364,   364,   364,
     364,   364,   364,   -69,   300,   303,   364,   364,   364,   197,
     -69,     8,   -69,   -69,   163,   -69,     8,   -32,   -69,   -69,
     364,   364,   364,   223,   513,   523,   533,   543,   553,   563,
     573,   583,   593,   603,   613,   623,   633,    52,   643,   653,
     663,   673,    99,   132,   683,   143,   154,   693,   703,   178,
     189,    81,   713,   723,   110,   165,   117,   161,   202,   213,
     -69,   -69,   -69,   -69,   -69,   -69,   364,   -69,   -69,   -69,
     -19,   -19,   -68,   -69,   -68,   -68,   -68,   -69,   -69,    55,
      55,   -69,     8,     8,     8,   309,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   364,   364,   -69,   364,   364,   -69,
     -69,   364,   364,   364,   -69,   -69,   364,   -69,   364,   364,
     364,   364,   -39,   -69,   733,   743,   753,   763,   773,   783,
     220,   225,   244,   813,   793,   803,   364,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -24,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      19,     0,     1,     0,    83,    82,    96,    95,     0,     0,
       0,     0,     0,     0,    74,    81,    75,    76,    78,    79,
      80,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
       0,    38,    39,    40,    12,    13,    14,     0,    17,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    95,    33,    90,     0,     0,
       0,     0,     0,     2,     7,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,    82,
      21,    20,     3,     4,    95,    23,     0,    22,     8,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    39,    40,    31,    54,    71,     0,    86,     5,     6,
      27,    28,    29,    89,    30,    34,    32,    10,    11,    87,
      88,    69,    24,    25,    26,     0,    41,    45,    49,    42,
      46,    50,    43,    47,    51,    44,    48,    52,    53,    70,
      56,    58,    59,    60,     0,     0,    55,     0,     0,    64,
      62,     0,     0,     0,    67,    68,     0,    94,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    61,    65,
      57,    66,    63,    73,    72,    91,    92,    93,    37,    36,
       0,    84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   196,   147,    -1,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    60,    61,   146,   119
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   132,   133,   134,   135,   190,   191,   192,    64,   125,
     126,   127,   128,   129,   130,   131,   132,   133,    77,    65,
      74,   196,    66,    67,   197,   127,   128,   129,   130,   131,
     132,   133,   136,   137,   138,   266,    75,    76,   267,    80,
     127,   128,   129,   130,   131,   132,   133,   129,   130,   131,
     132,   133,    63,   281,    78,   116,   118,   120,   122,   136,
     137,   138,    81,    79,   141,   127,   128,   129,   130,   131,
     132,   133,   127,   128,   129,   130,   131,   132,   133,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   182,   183,   117,    82,   121,
      83,   188,   189,   136,   137,   138,   136,   137,   138,   147,
      84,   138,    85,   150,   195,   229,   200,   201,   202,   204,
     205,   206,    86,   127,   128,   129,   130,   131,   132,   133,
      87,   151,    88,   167,   194,   136,   137,   138,    89,   212,
     213,   214,    90,   152,    91,   243,   181,    92,    93,   184,
     185,   186,   187,   127,   128,   129,   130,   131,   132,   133,
      68,   153,    94,   234,   136,   137,   138,    71,    72,    73,
     203,   136,   137,   138,   246,    95,    96,   209,   210,   211,
      97,   248,    98,    99,   100,   252,   127,   128,   129,   130,
     131,   132,   133,   101,    65,   102,   235,   127,   128,   129,
     130,   131,   132,   133,   103,   145,   104,   237,   127,   128,
     129,   130,   131,   132,   133,   136,   137,   138,   238,   136,
     137,   138,   105,   254,   255,   249,   256,   257,   247,   106,
     258,   259,   127,   128,   129,   130,   131,   132,   133,   264,
     265,   107,   241,   127,   128,   129,   130,   131,   132,   133,
     108,   140,   109,   242,   110,   280,   127,   128,   129,   130,
     131,   132,   133,   111,     0,   112,   250,   127,   128,   129,
     130,   131,   132,   133,   136,   137,   138,   251,   113,   136,
     137,   138,   123,   274,   260,   124,   215,   261,   275,   262,
     263,     2,     3,   142,     4,     5,     6,     7,   136,   137,
     138,   143,   148,     8,     9,     0,   149,   276,    10,    11,
      12,    13,   198,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   199,    56,     4,   114,     6,
     115,   207,     0,    57,   208,    68,    58,    59,    69,    70,
     253,     0,    71,    72,    73,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,    56,
       4,   139,     6,   115,     0,     0,    57,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     0,    56,     4,   114,     6,   144,     0,     0,    57,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,    56,     0,     0,     0,     0,
       0,     0,    57,     0,     0,    58,    59,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   193,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   216,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   217,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   218,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   219,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   220,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   221,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   222,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   223,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   224,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   225,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   226,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   227,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   228,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   230,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   231,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   232,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   233,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   236,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   239,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   240,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   244,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   245,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   268,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   269,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   270,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   271,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   272,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   273,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   278,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   279,   136,   137,   138,
       0,     0,     0,     0,     0,     0,   277
};

static const yytype_int16 yycheck[] =
{
       1,    69,    70,     8,     9,    14,    15,    16,    71,     8,
       9,    64,    65,    66,    67,    68,    69,    70,    72,     7,
      71,    74,    10,    11,    77,    64,    65,    66,    67,    68,
      69,    70,    64,    65,    66,    74,    71,    71,    77,    72,
      64,    65,    66,    67,    68,    69,    70,    66,    67,    68,
      69,    70,     1,    77,    71,    56,    57,    58,    59,    64,
      65,    66,    72,    71,    65,    64,    65,    66,    67,    68,
      69,    70,    64,    65,    66,    67,    68,    69,    70,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    56,    72,    58,
      72,   112,   113,    64,    65,    66,    64,    65,    66,    68,
      72,    66,    72,     7,    75,    73,   127,   128,   129,   130,
     131,   132,    72,    64,    65,    66,    67,    68,    69,    70,
      72,     7,    72,    92,    75,    64,    65,    66,    72,   150,
     151,   152,    72,     7,    72,    74,   105,    72,    72,   108,
     109,   110,   111,    64,    65,    66,    67,    68,    69,    70,
       7,    21,    72,    74,    64,    65,    66,    14,    15,    16,
     129,    64,    65,    66,    74,    72,    72,   136,   137,   138,
      72,    74,    72,    72,    72,   196,    64,    65,    66,    67,
      68,    69,    70,    72,     7,    72,    74,    64,    65,    66,
      67,    68,    69,    70,    72,    68,    72,    74,    64,    65,
      66,    67,    68,    69,    70,    64,    65,    66,    74,    64,
      65,    66,    72,   234,   235,    74,   237,   238,    73,    72,
     241,   242,    64,    65,    66,    67,    68,    69,    70,   250,
     251,    72,    74,    64,    65,    66,    67,    68,    69,    70,
      72,    65,    72,    74,    72,   266,    64,    65,    66,    67,
      68,    69,    70,    72,    -1,    72,    74,    64,    65,    66,
      67,    68,    69,    70,    64,    65,    66,    74,    72,    64,
      65,    66,    71,    73,   243,    71,    73,   246,    73,   248,
     249,     0,     1,    71,     3,     4,     5,     6,    64,    65,
      66,    71,    71,    12,    13,    -1,    71,    73,    17,    18,
      19,    20,    71,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    71,    65,     3,     4,     5,
       6,    71,    -1,    72,    71,     7,    75,    76,    10,    11,
      71,    -1,    14,    15,    16,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
       3,     4,     5,     6,    -1,    -1,    72,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    65,     3,     4,     5,     6,    -1,    -1,    72,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    76,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    73,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    79,     0,     1,     3,     4,     5,     6,    12,    13,
      17,    18,    19,    20,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    65,    72,    75,    76,
      80,    81,    82,    83,    71,     7,    10,    11,     7,    10,
      11,    14,    15,    16,    71,    71,    71,    72,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,     4,     6,    82,    83,    82,    83,
      82,    83,    82,    71,    71,     8,     9,    64,    65,    66,
      67,    68,    69,    70,     8,     9,    64,    65,    66,     4,
      80,    82,    71,    71,     6,    81,    82,    83,    71,    71,
       7,     7,     7,    21,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    83,    82,    82,    83,    83,    83,    83,    82,    82,
      14,    15,    16,    73,    75,    75,    74,    77,    71,    71,
      82,    82,    82,    83,    82,    82,    82,    71,    71,    83,
      83,    83,    82,    82,    82,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    73,    74,    74,    73,
      73,    74,    74,    74,    73,    73,    74,    73,    74,    74,
      74,    74,    82,    71,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    82,    82,    74,    77,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      82,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     4,     4,     4,     4,     3,     4,     4,
       4,     4,     3,     3,     3,     6,     3,     3,     3,     0,
       3,     3,     3,     3,     4,     4,     4,     3,     3,     3,
       3,     3,     3,     2,     3,     2,     6,     6,     2,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     3,     4,     4,     6,     4,     4,
       4,     6,     4,     6,     4,     6,     6,     4,     4,     3,
       4,     3,     6,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     5,     3,     3,     3,     3,
       2,     6,     6,     6,     4,     1,     1
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
  case 2: /* stmt: stmt assign ';'  */
#line 52 "a.y"
                                        { ; }
#line 1620 "y.tab.c"
    break;

  case 3: /* stmt: stmt id info ';'  */
#line 53 "a.y"
                                        { printf(">> %s = %g\n",(yyvsp[-2].pReal)->name, (yyvsp[-2].pReal)->value); }
#line 1626 "y.tab.c"
    break;

  case 4: /* stmt: stmt id infod ';'  */
#line 54 "a.y"
                                        { printf(">> %s = %f\n",(yyvsp[-2].pReal)->name, (yyvsp[-2].pReal)->value); }
#line 1632 "y.tab.c"
    break;

  case 5: /* stmt: stmt expr print ';'  */
#line 55 "a.y"
                                        { printf(">> %g\n", (yyvsp[-2].real_s)); }
#line 1638 "y.tab.c"
    break;

  case 6: /* stmt: stmt expr printd ';'  */
#line 56 "a.y"
                                        { printf(">> %f\n", (yyvsp[-2].real_s)); }
#line 1644 "y.tab.c"
    break;

  case 7: /* stmt: stmt v_assign ';'  */
#line 57 "a.y"
                                        { ; }
#line 1650 "y.tab.c"
    break;

  case 8: /* stmt: stmt id_vector info ';'  */
#line 58 "a.y"
                                        { printf(">> %s = [%g, %g, %g]\n",(yyvsp[-2].pVector)->name, (yyvsp[-2].pVector)->value[0], (yyvsp[-2].pVector)->value[1], (yyvsp[-2].pVector)->value[2]); }
#line 1656 "y.tab.c"
    break;

  case 9: /* stmt: stmt id_vector infod ';'  */
#line 59 "a.y"
                                        { printf(">> %s = [%f, %f, %f]\n",(yyvsp[-2].pVector)->name, (yyvsp[-2].pVector)->value[0], (yyvsp[-2].pVector)->value[1], (yyvsp[-2].pVector)->value[2]); }
#line 1662 "y.tab.c"
    break;

  case 10: /* stmt: stmt v_expr print ';'  */
#line 60 "a.y"
                                        { printf(">> %g, %g, %g\n", (yyvsp[-2].vector_s)[0], (yyvsp[-2].vector_s)[1], (yyvsp[-2].vector_s)[2]); }
#line 1668 "y.tab.c"
    break;

  case 11: /* stmt: stmt v_expr printd ';'  */
#line 61 "a.y"
                                        { printf(">> %f, %f, %f\n", (yyvsp[-2].vector_s)[0], (yyvsp[-2].vector_s)[1], (yyvsp[-2].vector_s)[2]); }
#line 1674 "y.tab.c"
    break;

  case 12: /* stmt: stmt list ';'  */
#line 62 "a.y"
                                        { 
                                            printReal(t,0);
                                            printVector(v,0); 
                                        }
#line 1683 "y.tab.c"
    break;

  case 13: /* stmt: stmt listd ';'  */
#line 66 "a.y"
                                        { 
                                            printReal(t,1); 
                                            printVector(v,1);
                                        }
#line 1692 "y.tab.c"
    break;

  case 14: /* stmt: stmt consts ';'  */
#line 70 "a.y"
                                        { printConsts(); }
#line 1698 "y.tab.c"
    break;

  case 15: /* stmt: stmt del '(' all ')' ';'  */
#line 71 "a.y"
                                        { 
                                                v = NULL; t = NULL; 
                                        }
#line 1706 "y.tab.c"
    break;

  case 16: /* stmt: stmt clc ';'  */
#line 74 "a.y"
                                        { ClearScreen(); }
#line 1712 "y.tab.c"
    break;

  case 17: /* stmt: stmt leave ';'  */
#line 75 "a.y"
                                        { exit (EXIT_SUCCESS); }
#line 1718 "y.tab.c"
    break;

  case 18: /* stmt: stmt error ';'  */
#line 76 "a.y"
                                        { 
                                            printf("E: Something is missing. Maybe ';' [error code: s-001] or check your data types [error code: l-001]\n");
                                            yyerrok; 
                                        }
#line 1727 "y.tab.c"
    break;

  case 20: /* assign: id asg expr  */
#line 84 "a.y"
                                        { (yyval.real_s) = (yyvsp[0].real_s); (yyvsp[-2].pReal)->value = (yyvsp[0].real_s); }
#line 1733 "y.tab.c"
    break;

  case 21: /* assign: id asg assign  */
#line 85 "a.y"
                                        { (yyval.real_s) = (yyvsp[0].real_s); (yyvsp[-2].pReal)->value = (yyvsp[0].real_s); }
#line 1739 "y.tab.c"
    break;

  case 22: /* v_assign: id_vector asg v_expr  */
#line 89 "a.y"
                                        {
                                            memcpy((yyval.vector_s), (yyvsp[0].vector_s), 3*sizeof(double));
                                            memcpy((yyvsp[-2].pVector)->value, (yyvsp[0].vector_s), 3*sizeof(double));
                                        }
#line 1748 "y.tab.c"
    break;

  case 23: /* v_assign: id_vector asg v_assign  */
#line 93 "a.y"
                                        {
                                            memcpy((yyval.vector_s), (yyvsp[0].vector_s), 3*sizeof(double));
                                            memcpy((yyvsp[-2].pVector)->value, (yyvsp[0].vector_s), 3*sizeof(double));
                                        }
#line 1757 "y.tab.c"
    break;

  case 24: /* v_assign: id_vector canoni asg expr  */
#line 97 "a.y"
                                        { (yyvsp[-3].pVector)->value[0] = (yyvsp[0].real_s); }
#line 1763 "y.tab.c"
    break;

  case 25: /* v_assign: id_vector canonj asg expr  */
#line 98 "a.y"
                                        { (yyvsp[-3].pVector)->value[1] = (yyvsp[0].real_s); }
#line 1769 "y.tab.c"
    break;

  case 26: /* v_assign: id_vector canonk asg expr  */
#line 99 "a.y"
                                        { (yyvsp[-3].pVector)->value[2] = (yyvsp[0].real_s); }
#line 1775 "y.tab.c"
    break;

  case 27: /* expr: expr '+' expr  */
#line 103 "a.y"
                                                { (yyval.real_s) = (yyvsp[-2].real_s) + (yyvsp[0].real_s); }
#line 1781 "y.tab.c"
    break;

  case 28: /* expr: expr '-' expr  */
#line 104 "a.y"
                                                { (yyval.real_s) = (yyvsp[-2].real_s) - (yyvsp[0].real_s); }
#line 1787 "y.tab.c"
    break;

  case 29: /* expr: expr '*' expr  */
#line 105 "a.y"
                                                { (yyval.real_s) = (yyvsp[-2].real_s) * (yyvsp[0].real_s); }
#line 1793 "y.tab.c"
    break;

  case 30: /* expr: expr '/' expr  */
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
#line 1809 "y.tab.c"
    break;

  case 31: /* expr: '(' expr ')'  */
#line 117 "a.y"
                                                { (yyval.real_s) = (yyvsp[-1].real_s); }
#line 1815 "y.tab.c"
    break;

  case 32: /* expr: expr '^' expr  */
#line 118 "a.y"
                                                { (yyval.real_s) = pow((yyvsp[-2].real_s),(yyvsp[0].real_s)); }
#line 1821 "y.tab.c"
    break;

  case 33: /* expr: '-' expr  */
#line 119 "a.y"
                                                    { (yyval.real_s) = -(yyvsp[0].real_s); }
#line 1827 "y.tab.c"
    break;

  case 34: /* expr: expr '%' expr  */
#line 120 "a.y"
                                                { (yyval.real_s) = (int)(yyvsp[-2].real_s) % (int)(yyvsp[0].real_s); }
#line 1833 "y.tab.c"
    break;

  case 35: /* expr: expr '!'  */
#line 121 "a.y"
                                                    { (yyval.real_s) = factorial((yyvsp[-1].real_s)); }
#line 1839 "y.tab.c"
    break;

  case 36: /* expr: binomcoef '(' expr ',' expr ')'  */
#line 122 "a.y"
                                        { (yyval.real_s) = binomialCoef((yyvsp[-3].real_s), (yyvsp[-1].real_s)); }
#line 1845 "y.tab.c"
    break;

  case 37: /* expr: permut '(' expr ',' expr ')'  */
#line 123 "a.y"
                                        { (yyval.real_s) = permutation((yyvsp[-3].real_s), (yyvsp[-1].real_s)); }
#line 1851 "y.tab.c"
    break;

  case 38: /* expr: id_vector canoni  */
#line 126 "a.y"
                                        { (yyval.real_s) = (yyvsp[-1].pVector)->value[0]; }
#line 1857 "y.tab.c"
    break;

  case 39: /* expr: id_vector canonj  */
#line 127 "a.y"
                                        { (yyval.real_s) = (yyvsp[-1].pVector)->value[1]; }
#line 1863 "y.tab.c"
    break;

  case 40: /* expr: id_vector canonk  */
#line 128 "a.y"
                                        { (yyval.real_s) = (yyvsp[-1].pVector)->value[2]; }
#line 1869 "y.tab.c"
    break;

  case 41: /* expr: COS '(' expr ')'  */
#line 131 "a.y"
                                        { (yyval.real_s) = cos((yyvsp[-1].real_s)); }
#line 1875 "y.tab.c"
    break;

  case 42: /* expr: ACOS '(' expr ')'  */
#line 132 "a.y"
                                        { (yyval.real_s) = acos((yyvsp[-1].real_s)); }
#line 1881 "y.tab.c"
    break;

  case 43: /* expr: COSH '(' expr ')'  */
#line 133 "a.y"
                                        { (yyval.real_s) = cosh((yyvsp[-1].real_s)); }
#line 1887 "y.tab.c"
    break;

  case 44: /* expr: ACOSH '(' expr ')'  */
#line 134 "a.y"
                                        { (yyval.real_s) = acosh((yyvsp[-1].real_s)); }
#line 1893 "y.tab.c"
    break;

  case 45: /* expr: SIN '(' expr ')'  */
#line 135 "a.y"
                                        { (yyval.real_s) = sin((yyvsp[-1].real_s)); }
#line 1899 "y.tab.c"
    break;

  case 46: /* expr: ASIN '(' expr ')'  */
#line 136 "a.y"
                                        { (yyval.real_s) = asin((yyvsp[-1].real_s)); }
#line 1905 "y.tab.c"
    break;

  case 47: /* expr: SINH '(' expr ')'  */
#line 137 "a.y"
                                        { (yyval.real_s) = sinh((yyvsp[-1].real_s)); }
#line 1911 "y.tab.c"
    break;

  case 48: /* expr: ASINH '(' expr ')'  */
#line 138 "a.y"
                                        { (yyval.real_s) = asinh((yyvsp[-1].real_s)); }
#line 1917 "y.tab.c"
    break;

  case 49: /* expr: TAN '(' expr ')'  */
#line 139 "a.y"
                                        { (yyval.real_s) = tan((yyvsp[-1].real_s)); }
#line 1923 "y.tab.c"
    break;

  case 50: /* expr: ATAN '(' expr ')'  */
#line 140 "a.y"
                                        { (yyval.real_s) = atan((yyvsp[-1].real_s)); }
#line 1929 "y.tab.c"
    break;

  case 51: /* expr: TANH '(' expr ')'  */
#line 141 "a.y"
                                        { (yyval.real_s) = tanh((yyvsp[-1].real_s)); }
#line 1935 "y.tab.c"
    break;

  case 52: /* expr: ATANH '(' expr ')'  */
#line 142 "a.y"
                                        { (yyval.real_s) = atanh((yyvsp[-1].real_s)); }
#line 1941 "y.tab.c"
    break;

  case 53: /* expr: ABS '(' expr ')'  */
#line 145 "a.y"
                                        { (yyval.real_s) = fabs((yyvsp[-1].real_s)); }
#line 1947 "y.tab.c"
    break;

  case 54: /* expr: '|' expr '|'  */
#line 146 "a.y"
                                            { (yyval.real_s) = fabs((yyvsp[-1].real_s)); }
#line 1953 "y.tab.c"
    break;

  case 55: /* expr: EXP '(' expr ')'  */
#line 147 "a.y"
                                        { (yyval.real_s) = exp((yyvsp[-1].real_s)); }
#line 1959 "y.tab.c"
    break;

  case 56: /* expr: LN '(' expr ')'  */
#line 148 "a.y"
                                                { (yyval.real_s) = log((yyvsp[-1].real_s)); }
#line 1965 "y.tab.c"
    break;

  case 57: /* expr: LOG '(' expr ',' expr ')'  */
#line 149 "a.y"
                                        { (yyval.real_s) = log((yyvsp[-3].real_s))/log((yyvsp[-1].real_s)); }
#line 1971 "y.tab.c"
    break;

  case 58: /* expr: SQRT '(' expr ')'  */
#line 150 "a.y"
                                                { (yyval.real_s) = sqrt((yyvsp[-1].real_s)); }
#line 1977 "y.tab.c"
    break;

  case 59: /* expr: CEIL '(' expr ')'  */
#line 151 "a.y"
                                                { (yyval.real_s) = ceil((yyvsp[-1].real_s)); }
#line 1983 "y.tab.c"
    break;

  case 60: /* expr: FLOOR '(' expr ')'  */
#line 152 "a.y"
                                            { (yyval.real_s) = floor((yyvsp[-1].real_s)); }
#line 1989 "y.tab.c"
    break;

  case 61: /* expr: RND '(' expr ',' expr ')'  */
#line 153 "a.y"
                                        {
                                            srand(time(NULL));
                                            (yyval.real_s)=rand()%(int)(((yyvsp[-1].real_s)-(yyvsp[-3].real_s)+1)+(yyvsp[-3].real_s));
                                        }
#line 1998 "y.tab.c"
    break;

  case 62: /* expr: FIX '(' expr ')'  */
#line 157 "a.y"
                                        { (yyval.real_s) = (int)(yyvsp[-1].real_s); }
#line 2004 "y.tab.c"
    break;

  case 63: /* expr: MOD '(' expr ',' expr ')'  */
#line 158 "a.y"
                                        { (yyval.real_s) = (int)(yyvsp[-3].real_s) % (int)(yyvsp[-1].real_s); }
#line 2010 "y.tab.c"
    break;

  case 64: /* expr: ROUND '(' expr ')'  */
#line 159 "a.y"
                                        { (yyval.real_s) = round((yyvsp[-1].real_s)); }
#line 2016 "y.tab.c"
    break;

  case 65: /* expr: GCD '(' expr ',' expr ')'  */
#line 160 "a.y"
                                        { (yyval.real_s) = gcd((yyvsp[-3].real_s),(yyvsp[-1].real_s)); }
#line 2022 "y.tab.c"
    break;

  case 66: /* expr: LCM '(' expr ',' expr ')'  */
#line 161 "a.y"
                                        { (yyval.real_s) = lcm((yyvsp[-3].real_s),(yyvsp[-1].real_s)); }
#line 2028 "y.tab.c"
    break;

  case 67: /* expr: nthpri '(' expr ')'  */
#line 162 "a.y"
                                        { (yyval.real_s) = nthPrime((int)(yyvsp[-1].real_s)); }
#line 2034 "y.tab.c"
    break;

  case 68: /* expr: nthfib '(' expr ')'  */
#line 163 "a.y"
                                        { (yyval.real_s) = nthFibonacci((int)(yyvsp[-1].real_s)); }
#line 2040 "y.tab.c"
    break;

  case 69: /* expr: v_expr '*' v_expr  */
#line 166 "a.y"
                                        { (yyval.real_s) = dotProduct((yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2046 "y.tab.c"
    break;

  case 70: /* expr: ABS '(' v_expr ')'  */
#line 167 "a.y"
                                        { (yyval.real_s) = magnitude((yyvsp[-1].vector_s)); }
#line 2052 "y.tab.c"
    break;

  case 71: /* expr: '|' v_expr '|'  */
#line 168 "a.y"
                                        { (yyval.real_s) = magnitude((yyvsp[-1].vector_s)); }
#line 2058 "y.tab.c"
    break;

  case 72: /* expr: distance '(' v_expr ',' v_expr ')'  */
#line 169 "a.y"
                                        { (yyval.real_s) = distanceVector((yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2064 "y.tab.c"
    break;

  case 73: /* expr: distance '(' expr ',' expr ')'  */
#line 170 "a.y"
                                        { (yyval.real_s) = fabs((yyvsp[-1].real_s) - (yyvsp[-3].real_s)); }
#line 2070 "y.tab.c"
    break;

  case 74: /* expr: pi  */
#line 173 "a.y"
                                        { (yyval.real_s) = M_PI; }
#line 2076 "y.tab.c"
    break;

  case 75: /* expr: gravi  */
#line 174 "a.y"
                                        { (yyval.real_s) = M_G; }
#line 2082 "y.tab.c"
    break;

  case 76: /* expr: coulomb  */
#line 175 "a.y"
                                        { (yyval.real_s) = M_K; }
#line 2088 "y.tab.c"
    break;

  case 77: /* expr: vlight  */
#line 176 "a.y"
                                        { (yyval.real_s) = M_VLIGHT; }
#line 2094 "y.tab.c"
    break;

  case 78: /* expr: electron  */
#line 177 "a.y"
                                        { (yyval.real_s) = M_ELECTRON; }
#line 2100 "y.tab.c"
    break;

  case 79: /* expr: proton  */
#line 178 "a.y"
                                        { (yyval.real_s) = -M_ELECTRON; }
#line 2106 "y.tab.c"
    break;

  case 80: /* expr: neutron  */
#line 179 "a.y"
                                        { (yyval.real_s) = 0; }
#line 2112 "y.tab.c"
    break;

  case 81: /* expr: euler  */
#line 180 "a.y"
                                        { (yyval.real_s) = M_EULER; }
#line 2118 "y.tab.c"
    break;

  case 82: /* expr: id  */
#line 182 "a.y"
                                        { (yyval.real_s) = (yyvsp[0].pReal)->value; }
#line 2124 "y.tab.c"
    break;

  case 83: /* expr: REAL  */
#line 183 "a.y"
                                        { (yyval.real_s) = (yyvsp[0].real_s); }
#line 2130 "y.tab.c"
    break;

  case 84: /* v_expr: '[' expr ',' expr ',' expr ']'  */
#line 187 "a.y"
                                        { (yyval.vector_s)[0] = (yyvsp[-5].real_s); (yyval.vector_s)[1] = (yyvsp[-3].real_s); (yyval.vector_s)[2] = (yyvsp[-1].real_s); }
#line 2136 "y.tab.c"
    break;

  case 85: /* v_expr: '[' expr ',' expr ']'  */
#line 188 "a.y"
                                        { (yyval.vector_s)[0] = (yyvsp[-3].real_s); (yyval.vector_s)[1] = (yyvsp[-1].real_s); }
#line 2142 "y.tab.c"
    break;

  case 86: /* v_expr: '[' expr ']'  */
#line 189 "a.y"
                                        { (yyval.vector_s)[0] = (yyvsp[-1].real_s); }
#line 2148 "y.tab.c"
    break;

  case 87: /* v_expr: v_expr '+' v_expr  */
#line 190 "a.y"
                                        { addVector((yyval.vector_s), (yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2154 "y.tab.c"
    break;

  case 88: /* v_expr: v_expr '-' v_expr  */
#line 191 "a.y"
                                        { minusVector((yyval.vector_s), (yyvsp[-2].vector_s), (yyvsp[0].vector_s)); }
#line 2160 "y.tab.c"
    break;

  case 89: /* v_expr: expr '*' v_expr  */
#line 192 "a.y"
                                        { escalarVector((yyval.vector_s), (yyvsp[0].vector_s), (yyvsp[-2].real_s));}
#line 2166 "y.tab.c"
    break;

  case 90: /* v_expr: '-' v_expr  */
#line 193 "a.y"
                                        { escalarVector((yyval.vector_s), (yyvsp[0].vector_s), -1.0); }
#line 2172 "y.tab.c"
    break;

  case 91: /* v_expr: pcrux '(' v_expr ',' v_expr ')'  */
#line 195 "a.y"
                                        { crossProduct((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2178 "y.tab.c"
    break;

  case 92: /* v_expr: proy '(' v_expr ',' v_expr ')'  */
#line 196 "a.y"
                                        { projectionVector((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2184 "y.tab.c"
    break;

  case 93: /* v_expr: norm '(' v_expr ',' v_expr ')'  */
#line 197 "a.y"
                                        { normalVector((yyval.vector_s), (yyvsp[-3].vector_s), (yyvsp[-1].vector_s)); }
#line 2190 "y.tab.c"
    break;

  case 94: /* v_expr: unit '(' v_expr ')'  */
#line 198 "a.y"
                                        { unitVector((yyval.vector_s), (yyvsp[-1].vector_s)); }
#line 2196 "y.tab.c"
    break;

  case 95: /* v_expr: id_vector  */
#line 200 "a.y"
                                        { memcpy((yyval.vector_s), (yyvsp[0].pVector)->value, VECTOR_SZ); }
#line 2202 "y.tab.c"
    break;

  case 96: /* v_expr: VECTOR  */
#line 201 "a.y"
                                        { memcpy((yyval.vector_s), (yyvsp[0].vector_s), VECTOR_SZ); }
#line 2208 "y.tab.c"
    break;


#line 2212 "y.tab.c"

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

#line 204 "a.y"

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
