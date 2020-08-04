%{
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
%}

%union {
    double real_s;
    real * pReal;

    double vector_s[3];
    vector * pVector;
}

%token <real_s> REAL
%token <pReal> id

%token <vector_s> VECTOR
%token <pVector> id_vector

%token asg print printd info infod list listd canoni canonj canonk 
%token consts del leave clc

%token all

%token pi euler gravi coulomb electron proton neutron vlight

%token COS SIN TAN ACOS ASIN ATAN COSH SINH TANH ACOSH 
%token ASINH ATANH

%token ABS LN SQRT CEIL FLOOR RND GCD EXP LOG LCM ROUND FIX MOD
%token distance nthpri nthfib pcrux unit proy norm

%token binomcoef permut binomd

%type <real_s> expr assign
%type <vector_s> v_expr v_assign

%left '+' '-'
%left '*' '/' '%'
%right '^' '!'

%%
// Expresiones
stmt:stmt assign ';'                    { ; }
|stmt id info ';'                       { printf(">> %s = %g\n",$2->name, $2->value); }
|stmt id infod ';'                      { printf(">> %s = %f\n",$2->name, $2->value); }
|stmt expr print ';'                    { printf(">> %g\n", $2); }
|stmt expr printd ';'                   { printf(">> %f\n", $2); }
|stmt v_assign ';'                      { ; }
|stmt id_vector info ';'                { printf(">> %s = [%g, %g, %g]\n",$2->name, $2->value[0], $2->value[1], $2->value[2]); }
|stmt id_vector infod ';'               { printf(">> %s = [%f, %f, %f]\n",$2->name, $2->value[0], $2->value[1], $2->value[2]); }
|stmt v_expr print ';'                  { printf(">> %g, %g, %g\n", $2[0], $2[1], $2[2]); }
|stmt v_expr printd ';'                 { printf(">> %f, %f, %f\n", $2[0], $2[1], $2[2]); }
|stmt list ';'                          { 
                                            printReal(t,0);
                                            printVector(v,0); 
                                        }
|stmt listd ';'                         { 
                                            printReal(t,1); 
                                            printVector(v,1);
                                        }
|stmt consts ';'                        { printConsts(); }
|stmt del '(' all ')' ';'               { 
                                                v = NULL; t = NULL; 
                                        }
|stmt clc ';'                           { ClearScreen(); }
|stmt leave ';'                         { exit (EXIT_SUCCESS); }
|stmt error ';'                         { 
                                            printf("E: Something is missing. Maybe ';' [error code: s-001] or check your data types [error code: l-001]\n");
                                            yyerrok; 
                                        }
|/**/
;

// Real declaration
assign:   id asg expr                   { $$ = $3; $1->value = $3; }
|id asg assign                          { $$ = $3; $1->value = $3; }
;

// Vector declaration
v_assign:  id_vector asg v_expr         {
                                            memcpy($$, $3, 3*sizeof(double));
                                            memcpy($1->value, $3, 3*sizeof(double));
                                        }
|id_vector asg v_assign                 {
                                            memcpy($$, $3, 3*sizeof(double));
                                            memcpy($1->value, $3, 3*sizeof(double));
                                        }
|id_vector canoni asg expr              { $1->value[0] = $4; }
|id_vector canonj asg expr              { $1->value[1] = $4; }
|id_vector canonk asg expr              { $1->value[2] = $4; }
;

// Escarlar operations
expr:   expr '+' expr		   	        { $$ = $1 + $3; }
|expr '-' expr			                { $$ = $1 - $3; }
|expr '*' expr			                { $$ = $1 * $3; }
|expr '/' expr			                {
                                            if ($3 == 0)
                                            {
                                                printf("E: Division by zero [error code: m-001]\n");
                                                $$ = 0;
                                            }
                                            else
                                            {
                                                $$ = $1 / $3;
                                            }
                                        }
|'(' expr ')'			                { $$ = $2; } 
|expr '^' expr			                { $$ = pow($1,$3); }
|'-' expr			                    { $$ = -$2; }
|expr '%' expr			                { $$ = (int)$1 % (int)$3; }
|expr '!'			                    { $$ = factorial($1); }
|binomcoef '(' expr ',' expr ')'        { $$ = binomialCoef($3, $5); }
|permut '(' expr ',' expr')'            { $$ = permutation($3, $5); }

// Vector components asignation
|id_vector canoni                       { $$ = $1->value[0]; }
|id_vector canonj                       { $$ = $1->value[1]; }
|id_vector canonk                       { $$ = $1->value[2]; }

// Trigonometric funcs
|COS '(' expr ')'    	                { $$ = cos($3); }
|ACOS '(' expr ')'                      { $$ = acos($3); }
|COSH '(' expr ')'                      { $$ = cosh($3); }
|ACOSH '(' expr ')'                     { $$ = acosh($3); }
|SIN '(' expr ')'    	                { $$ = sin($3); }
|ASIN '(' expr ')'                      { $$ = asin($3); }
|SINH '(' expr ')'                      { $$ = sinh($3); }
|ASINH '(' expr ')'                     { $$ = asinh($3); }
|TAN '(' expr ')'    	                { $$ = tan($3); }
|ATAN '(' expr ')'                      { $$ = atan($3); }
|TANH '(' expr ')'                      { $$ = tanh($3); }
|ATANH '(' expr ')'                     { $$ = atanh($3); }

// Math regular funcs
|ABS '(' expr ')'    	                { $$ = fabs($3); }
|'|' expr '|'    	                    { $$ = fabs($2); }
|EXP '(' expr ')'    	                { $$ = exp($3); }
|LN '(' expr ')'		                { $$ = log($3); }
|LOG '(' expr ',' expr ')'              { $$ = log($3)/log($5); }
|SQRT '(' expr ')'		                { $$ = sqrt($3); }
|CEIL '(' expr ')'		                { $$ = ceil($3); }
|FLOOR '(' expr ')'	                    { $$ = floor($3); }
|RND '(' expr ',' expr ')'              {
                                            srand(time(NULL));
                                            $$=rand()%(int)(($5-$3+1)+$3);
                                        }
|FIX '(' expr ')'                       { $$ = (int)$3; }
|MOD '(' expr ',' expr ')'              { $$ = (int)$3 % (int)$5; } //TODO
|ROUND '(' expr ')'                     { $$ = round($3); }
|GCD '(' expr ',' expr ')'              { $$ = gcd($3,$5); }
|LCM '(' expr ',' expr ')'              { $$ = lcm($3,$5); }
|nthpri '(' expr ')'                    { $$ = nthPrime((int)$3); }
|nthfib '(' expr ')'                    { $$ = nthFibonacci((int)$3); }

// Vector -> Escalar operations
|v_expr '*' v_expr                      { $$ = dotProduct($1, $3); }
|ABS '(' v_expr ')'                     { $$ = magnitude($3); }
|'|' v_expr '|'                         { $$ = magnitude($2); }
|distance '(' v_expr ',' v_expr ')'     { $$ = distanceVector($3, $5); }
|distance '(' expr ',' expr ')'         { $$ = fabs($5 - $3); }

//Distribuciones de probabilidad
|binomd '(' expr ',' expr ',' expr ')'  { $$ = binomialDist($3, $5, $7); }

// Constants
|pi                                     { $$ = M_PI; }
|gravi                                  { $$ = M_G; }
|coulomb                                { $$ = M_K; }
|vlight                                 { $$ = M_VLIGHT; }
|electron                               { $$ = M_ELECTRON; }
|proton                                 { $$ = -M_ELECTRON; }
|neutron                                { $$ = 0; }
|euler                                  { $$ = M_EULER; }

|id                                     { $$ = $1->value; }
|REAL                                   { $$ = $1; }
;

// Vector operators
v_expr: '[' expr ',' expr ',' expr ']'  { $$[0] = $2; $$[1] = $4; $$[2] = $6; }
|'[' expr ',' expr ']'                  { $$[0] = $2; $$[1] = $4; }
|'[' expr ']'                           { $$[0] = $2; }
|v_expr '+' v_expr                      { addVector($$, $1, $3); }
|v_expr '-' v_expr                      { minusVector($$, $1, $3); }
|expr '*' v_expr                        { escalarVector($$, $3, $1);}
|'-' v_expr                             { escalarVector($$, $2, -1.0); }

|pcrux '(' v_expr ',' v_expr ')'        { crossProduct($$, $3, $5); }
|proy '(' v_expr ',' v_expr ')'         { projectionVector($$, $3, $5); }
|norm '(' v_expr ',' v_expr ')'         { normalVector($$, $3, $5); }
|unit '(' v_expr ')'                    { unitVector($$, $3); }

|id_vector                              { memcpy($$, $1->value, VECTOR_SZ); }
|VECTOR                                 { memcpy($$, $1, VECTOR_SZ); }
;

%%
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