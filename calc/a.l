%option noyywrap
%%
"="                         { return asg; }

"all"                       { return all; }

"delete"                    { return del; }
"cls"|"clear"               { return clc; }
"consts"                    { return consts; }
"list"                      { return list; }
"listd"                     { return listd; }
"exit"                      { return leave; }

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
"mcd"                       { return GCD; }
"mcm"                       { return LCM; }
"dist"                      { return distance; }
"nthPri"                    { return nthpri; }
"nthFib"                    { return nthfib; }
"gibbs"                     { return pcrux; }
"unit"                      { return unit; }
"proy"                      { return proy; }
"norm"                      { return norm; }

"#pi"|"#pi"                 { return pi; }
"#e"|"#napier"|"#euler"     { return euler; }
"#G"                        { return gravi; }
"#k"                        { return coulomb; }
"#c"                        { return vlight; }
"#elect"                    { return electron; }
"#prot"                     { return proton; }
"#neut"                     { return neutron; }

[0-9]+\.?[0-9]*             {
                                yylval.real = strtod(yytext, NULL);
                                return REAL;
                            }

[a-zA-Z][a-zA-Z0-9]*        {
                                yylval.pReal = search(t, yytext);
                                if (yylval.pReal == NULL) {
                                    yylval.pReal = (real *) malloc(sizeof(real));
                                    strcpy(yylval.pReal->name, yytext);
                                    yylval.pReal->value = 0;
                                    insertar(&t, yylval.pReal);
                                }
                                return id;
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
                                return id_vector;
                            }
[a-zA-Z][a-zA-Z0-9]*\:      {
                                printf("Line\n");
                            }
\:[a-zA-Z][a-zA-Z0-9]*\:    {
                                printf("Plane\n");
                            }
\/\/.*;                     { ; }
[ \b\t]+                    { ; /* Sube la linea de abajo para modo archivos */}
[\n]                        { printf("<< "); /* Comentar para archivos */ }
.                           { return yytext[0]; }
%%