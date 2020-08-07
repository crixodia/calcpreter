identifiers                 [a-zA-Z][a-zA-Z0-9]*
real_number                 [0-9]+\.?[0-9]*

%option noyywrap

%%
"="                         { return asg; }

"all"                       { return all; }

"Delete"                    { return del; }
"cls"|"clear"|"clc"         { return clc; }
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

"Cos"                       { return COS; }
"Acos"                      { return ACOS; }
"Cosh"                      { return COSH; }
"Acosh"                     { return ACOSH; }

"Sin"|"Sen"                 { return SIN; }
"Asin"|"Asen"               { return ASIN; }
"Sinh"|"Senh"               { return SINH; }
"Asinh"|"Asenh"             { return ASINH; }

"Tan"|"Tg"                  { return TAN; }
"Atan"|"Atg"                { return ATAN; }
"Tanh"|"Tgh"                { return TANH; }
"Atanh"|"Atgh"              { return ATANH; }

"Abs"                       { return ABS; }
"Sqrt"                      { return SQRT; }
"Ceil"                      { return CEIL; }
"Floor"                     { return FLOOR; }
"Round"                     { return ROUND; }
"Fix"                       { return FIX; }
"Mod"                       { return MOD; }

"Exp"                       { return EXP; }
"Ln"                        { return LN; }
"Log"                       { return LOG; }

"Rnd"                       { return RND; }
"Mcd"                       { return GCD; }
"Mcm"                       { return LCM; }
"Dist"                      { return distance; }
"NthPri"                    { return nthpri; }
"NthFib"                    { return nthfib; }
"Gibbs"                     { return pcrux; }
"Unit"                      { return unit; }
"Proy"                      { return proy; }
"Norm"                      { return norm; }

"nCk"                       { return binomcoef; }
"nPk"                       { return permut; }

".mean"                     { return mean; }
".var"                      { return variance; }
".cumulative"               { return cumulative; }

"Binomial"                  { return binomd; }

"#pi"|"#pi"                 { return pi; }
"#e"|"#napier"|"#euler"     { return euler; }
"#G"                        { return gravi; }
"#k"                        { return coulomb; }
"#c"                        { return vlight; }
"#elect"                    { return electron; }
"#prot"                     { return proton; }
"#neut"                     { return neutron; }

{real_number}               {
                                yylval.real_s = strtod(yytext, NULL);
                                return REAL;
                            }

{identifiers}               {
                                yylval.pReal = search(t, yytext);
                                if (yylval.pReal == NULL) {
                                    yylval.pReal = (real *) malloc(sizeof(real));
                                    strcpy(yylval.pReal->name, yytext);
                                    yylval.pReal->value = 0;
                                    insert(&t, yylval.pReal);
                                }
                                return id;
                            }

\[{identifiers}\]           {
                                double a[3] = {0,0,0};
                            	yylval.pVector = searchVector(v, yytext);
                                if (yylval.pVector == NULL) {
                                    yylval.pVector = (vector *) malloc(sizeof(vector));
                                    strcpy(yylval.pVector->name, yytext);
                                    memcpy(yylval.pVector->value, a, 3*sizeof(double));
                                    insertVector(&v, yylval.pVector);
                                }
                                return id_vector;
                            }
\/\/.*;                     { ; }
[ \b\t]+                    { ; /* Sube la linea de abajo para modo archivos */}
[\n]                        { printf("<< "); /* Comentar para archivos */ }
.                           { return yytext[0]; }
%%