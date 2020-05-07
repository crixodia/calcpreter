%option noyywrap
%%
"="                     { return ASIG; }

".i"                    { return CANONI; }
".j"                    { return CANONJ; }
".k"                    { return CANONK; }

".print"                { return PRINT; }
".info"                 { return INFO; }
".list"                 { return LIST; }

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
"D("                    { return DISTANCE; }

"#pi"|"#PI"             { return PI; }
"#euler"|"#napier"      { return EULER; }

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
