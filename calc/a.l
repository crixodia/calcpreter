%option noyywrap
%%
"="                         { return asig; }

"clear"                     { return clear; }
"consts"                    { return constantes; }
"list"                      { return list; }
"listd"                     { return listd; }

".print"                    { return print; }
".printd"                   { return printd; }
".info"                     { return info; }
".infod"                    { return infod; }

".i"                        { return canoni; }
".j"                        { return canonj; }
".k"                        { return canonk; }

"cos"                       { return COS; }
"acos"                      { return ACOS; }
"cosh"                      { return COSH; }
"acosh"                     { return ACOSH; }

"sin"|"sen"                 { return SIN; }
"asin"|"asen"               { return ASIN; }
"sinh"|"senh"               { return SINH; }
"asinh"|"asenh"             { return ASINH; }

"tan"|"tg"                  { return TAN; }
"atan"|"atg"                { return ATAN; }
"tanh"|"tgh"                { return TANH; }
"atanh"|"atgh"              { return ATANH; }

"abs"                       { return ABS; }
"sqrt"                      { return SQRT; }
"ceil"                      { return CEIL; }
"floor"                     { return FLOOR; }

"exp"                       { return EXP; }
"ln"                        { return LN; }
"log"                       { return LOG; }

"rnd"                       { return RND; }
"mcd"                       { return MCD; }
"mcm"                       { return MCM; }
"dist"                      { return distancia; }
"nthPri"                    { return nthpri; }
"nthFib"                    { return nthfib; }
"Gibbs"                     { return pcruz; }

"#pi"|"#pi"                 { return pi; }
"#e"|"#napier"|"#euler"     { return euler; }
"#G"                        { return gravitacional; }
"#k"                        { return coulomb; }
"#c"                        { return vluz; }
"#elect"                    { return electron; }
"#prot"                     { return proton; }
"#neut"                     { return neutron; }

[0-9]+\.?[0-9]*             {
                                yylval.numero = strtod(yytext, NULL);
                                return NUMERO;
                            }

[a-zA-Z][a-zA-Z0-9]*        {
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
[a-zA-Z][a-zA-Z0-9]*\:      {
                                printf("Esto es una recta\n");
                            }
\:[a-zA-Z][a-zA-Z0-9]*\:    {
                                printf("Esto es un plano\n");
                            }
\/\/.*;                     { ; }
[ \b\t\n]+                  { ; }
.                           { return yytext[0]; }
%%