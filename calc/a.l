%option noyywrap
%%
[0-9]+\.?[0-9]*         {
                            yylval.numero = strtod(yytext, NULL);
                            return NUMERO;
                        }
"="                     { return ASIG; }
".print"                { return PRINT; }
".info"                 { return INFO; }
".list"                 { return LIST; }
"cos"                   { return COS; }
"sin"                   { return SEN; }
"tan"                   { return TAN; }
"abs"                   { return ABS; }
"ln"                    { return LN; }
"sqrt"                  { return SQRT; }
"ceil"                  { return CEIL; }
"floor"                 { return FLOOR; }
"rnd"                   { return RND; }
"mcd"                   { return MCD; }
"exp"                   { return EXP; }
"pi"|"PI"               { return PI; }
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
[ \b\t\n]+              { ; }
.                       { return yytext[0]; }
%%