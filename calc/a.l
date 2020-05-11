%option noyywrap
%%
"="                     { return ASIG; }

".i"                    { return CANONI; }
".j"                    { return CANONJ; }
".k"                    { return CANONK; }

".clear"                { return CLEAR; }
".print"                { return PRINT; }
".printd"               { return PRINTD; }
".info"                 { return INFO; }
".infod"                { return INFOD; }
".list"                 { return LIST; }
".listd"                { return LISTD; }
".const"                { return CONSTANTES; }

"cos"                   { return COS; }
"acos"                  { return ACOS; }
"cosh"                  { return COSH; }
"acosh"                 { return ACOSH; }

"sin"|"sen"             { return SIN; }
"asin"|"asen"           { return ASIN; }
"sinh"|"senh"           { return SINH; }
"asinh"|"asenh"         { return ASINH; }

"tan"|"tg"              { return TAN; }
"atan"|"atg"            { return ATAN; }
"tanh"|"tgh"            { return TANH; }
"atanh"|"atgh"          { return ATANH; }

"abs"                   { return ABS; }
"sqrt"                  { return SQRT; }
"ceil"                  { return CEIL; }
"floor"                 { return FLOOR; }

"exp"                   { return EXP; }
"ln"                    { return LN; }
"log"                   { return LOG; }

"rnd"                   { return RND; }
"mcd"                   { return MCD; }
"mcm"                   { return MCM; }
"distance"              { return DISTANCE; }
"nthPrime"              { return NTHPRI; }
"nthFibonacci"          { return NTHFIB; }
"vProduct"              { return VPROD; }

"#pi"|"#PI"             { return PI; }
"#e"|"#napier"|"#euler" { return EULER; }
"#G"                    { return GRAVITACIONAL; }
"#k"                    { return COULOMB; }
"#c"                    { return VLUZ; }
"#elect"                { return ELECTRON; }
"#prot"                 { return PROTON; }
"#neut"                 { return NEUTRON; }

[0-9]+\.?[0-9]*         {
                            yylval.numero = strtod(yytext, NULL);
                            return NUMERO;
                        }

[a-zA-Z][a-zA-Z0-9]*    {
                            yylval.ptrSimbolo = buscar(t, yytext);
                            if (yylval.ptrSimbolo == NULL) {
                                yylval.ptrSimbolo = (simbolo *) malloc(sizeof(simbolo));
                                strcpy(yylval.ptrSimbolo->nombre, yytext);
                                yylval.ptrSimbolo->valor = 0;
                                insertar(&t, yylval.ptrSimbolo);
                            }
                            return ID;
                        }

\[[a-zA-Z][a-zA-Z0-9]*\]    {
                            	yylval.ptrSimboloVector = buscarVector(v, yytext);
                                if (yylval.ptrSimboloVector == NULL) {
                                    yylval.ptrSimboloVector = (simboloVector *) malloc(sizeof(simboloVector));
                                    strcpy(yylval.ptrSimboloVector->nombre, yytext);
                                    yylval.ptrSimboloVector->valor[0] = 0;
                                    yylval.ptrSimboloVector->valor[1] = 0;
                                    yylval.ptrSimboloVector->valor[2] = 0;
                                    insertarVector(&v, yylval.ptrSimboloVector);
                                }
                                return VECTOR;
                            }
[ \b\t\n]+              { ; }
.                       { return yytext[0]; }
%%
