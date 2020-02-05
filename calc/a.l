%option noyywrap
%%
[0-9]+\.?[0-9]*         {
                            yylval.numero = strtod(yytext, NULL);
                            return NUMERO;
                        }
":"                     { return ASIG; }
"?"                     { return PRINT; }
"COS"                   { return COS; }
"SEN"                   { return SEN; }
"TAN"                   { return TAN; }
"ABS"                   { return ABS; }
"LN"                    { return LN; }
"SQRT"                  { return SQRT; }
"CEIL"                  { return CEIL; }
"FLOOR"                 { return FLOOR; }
"RND"                   { return RND; }
"MCD"                   { return MCD; }
"EXP"                   { return EXP; }
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