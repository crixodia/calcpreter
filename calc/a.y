%{
    //Tipos de dato
    #include "Clc.c"
    #include "Real.c"
    #include "Vector.c"
    #include "Line.c"
    #include "Plane.c"

    //Tablas de símbolo
    real * t;
    vector * v;
    line * r;
    plane * p;

    //Prototipos
    int yylex(void);
    int yyerror();
%}

%union {
    double real_s;
    real * pReal;

    double vector_s[3];
    vector * pVector;

    double line_s[6];
    line * pLine;

    double plane_s[9];
    plane * pPlane;
}

%token <real_s> REAL
%token <pReal> id

%token <vector_s> VECTOR
%token <pVector> id_vector

%token <line_s> LINE
%token <pLine> ID_RECTA

%token <plane_s> PLANE
%token <pPlane> ID_PLANO

%token asg print printd info infod list listd canoni canonj canonk 
%token consts del leave clc

%token all

%token pi euler gravi coulomb electron proton neutron vlight

%token COS SIN TAN ACOS ASIN ATAN COSH SINH TANH ACOSH 
%token ASINH ATANH

%token ABS LN SQRT CEIL FLOOR RND GCD EXP LOG LCM
%token distance nthpri nthfib pcrux unit proy norm

%type <real_s> E A
%type <vector_s> V AV
/*%type <recta> R AR
%type <plano> P AP*/

%left '+' '-'
%left '*' '/' '%'
%right '^' '!'

%%
// Expresiones
S:S A ';'                   { ; }
|S id info ';'              { printf(">> %s = %g\n",$2->nombre, $2->valor); }
|S id infod ';'             { printf(">> %s = %f\n",$2->nombre, $2->valor); }
|S E print ';'              { printf(">> %g\n", $2); }
|S E printd ';'             { printf(">> %f\n", $2); }
|S AV ';'                   { ; }
|S id_vector info ';'       { printf(">> %s = [%g, %g, %g]\n",$2->nombre, $2->valor[0], $2->valor[1], $2->valor[2]); }
|S id_vector infod ';'      { printf(">> %s = [%f, %f, %f]\n",$2->nombre, $2->valor[0], $2->valor[1], $2->valor[2]); }
|S V print ';'              { printf(">> %g, %g, %g\n", $2[0], $2[1], $2[2]); }
|S V printd ';'             { printf(">> %f, %f, %f\n", $2[0], $2[1], $2[2]); }
|S list ';'                 { printReal(t,0); printVector(v,0); }
|S listd ';'                { printReal(t,1); printVector(v,1); }
|S consts ';'               { printConsts(); }
|S del '(' all ')' ';'      { v = NULL; t = NULL; } //CONFIRMACIÓN?????
|S clc ';'                  { ClearScreen(); }
|S leave ';'                { exit (EXIT_SUCCESS); }
|S error ';'                { 
                              printf("E: Something is missing (';')\n");
                              yyerrok; 
                            }
|/**/
;

// Asignaciones
A:   id asg E               {
                                $$ = $3;
                                $1->valor = $3;
                            }
|id asg A                   {
                                $$ = $3;
                                $1->valor = $3;
                            }
;

// Asignaciones a vectores
AV:  id_vector asg V        {
                                memcpy($$, $3, 3*sizeof(double));
                                $1->valor[0] = $3[0];
                                $1->valor[1] = $3[1];
                                $1->valor[2] = $3[2];
                            }
|id_vector asg AV           {
                                memcpy($$, $3, 3*sizeof(double));
                                $1->valor[0] = $3[0];
                                $1->valor[1] = $3[1];
                                $1->valor[2] = $3[2];
                            }
|id_vector canoni asg E        { $1->valor[0] = $4; }
|id_vector canonj asg E        { $1->valor[1] = $4; }
|id_vector canonk asg E        { $1->valor[2] = $4; }
;

// Asignaciones recta
/*AR: ID_RECTA asig R         {

                            }
|ID_RECTA asig AR           {

                            }
;

// Asignaciones Plano
AP: ID_PLANO asig P         {

                            }
|ID_PLANO asig AP           {

                            }
;*/
// Operaciones con escalares
E:   E '+' E		   	    { $$ = $1 + $3; }
|E '-' E			        { $$ = $1 - $3; }
|E '*' E			        { $$ = $1 * $3; }
|E '/' E			        {
                                if($3 == 0){
                                    printf("E: Division by zero\n");
                                    $$ = 0;
                                }else{
                                    $$ = $1 / $3;
                                }
                            }
|'(' E ')'			        { $$ = $2; } 
|E '^' E			        { $$ = pow($1,$3); }
|'-' E			            { $$ = -$2; }
|E '%' E			        { $$ = (int)$1 % (int)$3; }
|E '!'			            { $$ = factorial($1); }

// Asignación a vectores
|id_vector canoni           { $$ = $1->valor[0]; }
|id_vector canonj           { $$ = $1->valor[1]; }
|id_vector canonk           { $$ = $1->valor[2]; }

// Funciones trigonométricas
|COS '(' E ')'    	        { $$ = cos($3); }
|ACOS '(' E ')'             { $$ = acos($3); }
|COSH '(' E ')'             { $$ = cosh($3); }
|ACOSH '(' E ')'            { $$ = acosh($3); }
|SIN '(' E ')'    	        { $$ = sin($3); }
|ASIN '(' E ')'             { $$ = asin($3); }
|SINH '(' E ')'             { $$ = sinh($3); }
|ASINH '(' E ')'            { $$ = asinh($3); }
|TAN '(' E ')'    	        { $$ = tan($3); }
|ATAN '(' E ')'             { $$ = atan($3); }
|TANH '(' E ')'             { $$ = tanh($3); }
|ATANH '(' E ')'            { $$ = atanh($3); }

// Funciones
|ABS '(' E ')'    	        { $$ = fabs($3); }
|'|' E '|'    	            { $$ = fabs($2); }
|EXP '(' E ')'    	        { $$ = exp($3); }
|LN '(' E ')'		        { $$ = log($3); }
|LOG '(' E ',' E ')'        { $$ = log($3)/log($5); }
|SQRT '(' E ')'		        { $$ = sqrt($3); }
|CEIL '(' E ')'		        { $$ = ceil($3); }
|FLOOR '(' E ')'	        { $$ = floor($3); }
|RND '(' E ',' E ')'        {
                                srand(time(NULL));
                                $$=rand()%(int)(($5-$3+1)+$3);
                            }
|GCD '(' E ',' E ')'        { $$ = gcd($3,$5); }
|LCM '(' E ',' E ')'        { $$ = lcm($3,$5); }
|nthpri '(' E ')'           { $$ = nthPrimo((int)$3); }
|nthfib '(' E ')'           { $$ = nthFibonacci((int)$3); }

// Entrada: vector, Salida: escalar
|V '*' V                    { $$ = productoInterno($1, $3); }
|ABS '(' V ')'              { $$ = norma($3); }
|'|' V '|'                  { $$ = norma($2); }
|distance '(' V ',' V ')'   { $$ = distanciaVector($3, $5); }
|distance '(' E ',' E ')'   { $$ = fabs($5 - $3); }

// Constantes
|pi                         { $$ = M_PI; }
|gravi                      { $$ = M_G; }
|coulomb                    { $$ = M_K; }
|vlight                     { $$ = M_VLUZ; }
|electron                   { $$ = M_ELECTRON; }
|proton                     { $$ = -M_ELECTRON; }
|neutron                    { $$ = 0; }
|euler                      { $$ = M_EULER; }

|id                         { $$ = $1->valor; }
|REAL                       { $$ = $1; }
;

// Operaciones con vectores
V:   '[' E ',' E ',' E ']'  { $$[0] = $2; $$[1] = $4; $$[2] = $6; }
|'[' E ',' E ']'            { $$[0] = $2; $$[1] = $4; }
|'[' E ']'                  { $$[0] = $2; }
|V '+' V                    { sumaVector($$, $1, $3); }
|V '-' V                    { restaVector($$, $1, $3); }
|E '*' V                    { escalarVector($$, $3, $1);}
|'-' V                      { escalarVector($$, $2, -1.0); }

|pcrux '(' V ',' V ')'      { productoVectorial($$, $3, $5); }
|proy '(' V ',' V ')'       { proyeccionVector($$, $3, $5); }
|norm '(' V ',' V ')'       { normalVector($$, $3, $5); }
|unit '(' V ')'             { unitarioVector($$, $3); }

|id_vector                  { memcpy($$, $1->valor, VECTOR_SZ); }
|VECTOR                     { memcpy($$, $1, VECTOR_SZ); }
;

// Operaciones con rectas
//R:
//;

// Operaciones con planos
//P:
//;

%%
#include "lex.yy.c"
//#include "errorlib.c"

int main()
{
    t = crear();
    //Input feedback
    printf("Calcpreter 0.0.1\n<< ");
    yyparse();
    return 0;
}

int yyerror(){
	return 0;
}