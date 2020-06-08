%{
    //Tipos de dato
    #include "TabSim.c"
    #include "Vector.c"
    #include "Recta.c"
    #include "Plano.c"

    //Tablas de símbolo
    simbolo * t;
    simboloVector * v;
    simboloRecta * r;
    simboloPlano * p;

    //Prototipos    
    int yylex(void);
    int yyerror();
%}

%union {
    double numero;
    simbolo * ptrSimbolo;

    double vector[3];
    simboloVector * ptrSimboloVector;

    double recta[6];
    simboloRecta * ptrSimboloRecta;

    double plano[9];
    simboloPlano * ptrSimboloPlano;
}

%token <numero> NUMERO
%token <ptrSimbolo> ID

%token <vector> VECT
%token <ptrSimboloVector> VECTOR

%token <recta> RECTA
%token <ptrSimboloRecta> ID_RECTA

%token <plano> PLANO
%token <ptrSimboloPlano> ID_PLANO

%token asig print printd info infod list listd canoni canonj canonk 
%token constantes clear salir

%token pi euler gravitacional coulomb electron proton neutron vluz

%token COS SIN TAN ACOS ASIN ATAN COSH SINH TANH ACOSH 
%token ASINH ATANH

%token ABS LN SQRT CEIL FLOOR RND MCD EXP LOG MCM
%token distancia nthpri nthfib pcruz unit proy norm

%type <numero> E A
%type <vector> V AV
/*%type <recta> R AR
%type <plano> P AP*/

%left '+' '-'
%left '*' '/' '%'
%right '^' '!'

%%
// Expresiones
S:S A ';'                   { ; }
|S ID info ';'              { printf(">> %s = %g\n",$2->nombre, $2->valor); }
|S ID infod ';'             { printf(">> %s = %f\n",$2->nombre, $2->valor); }
|S E print ';'              { printf(">> %g\n", $2); }
|S E printd ';'             { printf(">> %f\n", $2); }
|S AV ';'                   { ; }
|S VECTOR info ';'          { printf(">> %s = [%g, %g, %g]\n",$2->nombre, $2->valor[0], $2->valor[1], $2->valor[2]); }
|S VECTOR infod ';'         { printf(">> %s = [%f, %f, %f]\n",$2->nombre, $2->valor[0], $2->valor[1], $2->valor[2]); }
|S V print ';'              { printf(">> %g, %g, %g\n", $2[0], $2[1], $2[2]); }
|S V printd ';'             { printf(">> %f, %f, %f\n", $2[0], $2[1], $2[2]); }
|S list ';'                 { imprimir(t,0); imprimirVector(v,0); }
|S listd ';'                { imprimir(t,1); imprimirVector(v,1); }
|S constantes ';'           { imprimirConstantes(); }
|S clear ';'                { v = NULL; t = NULL; }
|S salir ';'                { exit (EXIT_SUCCESS); }
|S error ';'                { 
                              printf("E: Verifica entrada o tipo entre las operaciones\n");
                              yyerrok; 
                            }
|/**/
;

// Asignaciones
A:   ID asig E              {
                                $$ = $3;
                                $1->valor = $3;
                            }
|ID asig A                  {
                                $$ = $3;
                                $1->valor = $3;
                            }
;

// Asignaciones a vectores
AV:  VECTOR asig V          {
                                memcpy($$, $3, 3*sizeof(double));
                                $1->valor[0] = $3[0];
                                $1->valor[1] = $3[1];
                                $1->valor[2] = $3[2];
                            }
|VECTOR asig AV             {
                                memcpy($$, $3, 3*sizeof(double));
                                $1->valor[0] = $3[0];
                                $1->valor[1] = $3[1];
                                $1->valor[2] = $3[2];
                            }
|VECTOR canoni asig E       { $1->valor[0] = $4; }
|VECTOR canonj asig E       { $1->valor[1] = $4; }
|VECTOR canonk asig E       { $1->valor[2] = $4; }
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
                                    printf("E: División por cero\n");
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
|VECTOR canoni              { $$ = $1->valor[0]; }
|VECTOR canonj              { $$ = $1->valor[1]; }
|VECTOR canonk              { $$ = $1->valor[2]; }

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
|MCD '(' E ',' E ')'        { $$ = mcd($3,$5); }
|MCM '(' E ',' E ')'        { $$ = mcm($3,$5); }
|nthpri '(' E ')'           { $$ = nthPrimo((int)$3); }
|nthfib '(' E ')'           { $$ = nthFibonacci((int)$3); }

// Entrada: vector, Salida: escalar
|V '*' V                    { $$ = productoInterno($1, $3); }
|ABS '(' V ')'              { $$ = norma($3); }
|'|' V '|'                  { $$ = norma($2); }
|distancia '(' V ',' V ')'  { $$ = distanciaVector($3, $5); }
|distancia '(' E ',' E ')'  { $$ = fabs($5 - $3); }

// Constantes
|pi                         { $$ = M_PI; }
|gravitacional              { $$ = M_G; }
|coulomb                    { $$ = M_K; }
|vluz                       { $$ = M_VLUZ; }
|electron                   { $$ = M_ELECTRON; }
|proton                     { $$ = -M_ELECTRON; }
|neutron                    { $$ = 0; }
|euler                      { $$ = M_EULER; }

|ID                         { $$ = $1->valor; }
|NUMERO                     { $$ = $1; }
;

// Operaciones con vectores
V:   '[' E ',' E ',' E ']'  { $$[0] = $2; $$[1] = $4; $$[2] = $6; }
|'[' E ',' E ']'            { $$[0] = $2; $$[1] = $4; }
|'[' E ']'                  { $$[0] = $2; }
|V '+' V                    { sumaVector($$, $1, $3); }
|V '-' V                    { restaVector($$, $1, $3); }
|E '*' V                    { escalarVector($$, $3, $1);}
|'-' V                      { escalarVector($$, $2, -1.0); }

|pcruz '(' V ',' V ')'      { productoVectorial($$, $3, $5); }
|proy '(' V ',' V ')'       { proyeccionVector($$, $3, $5); }
|norm '(' V ',' V ')'       { normalVector($$, $3, $5); }
|unit '(' V ')'             { unitarioVector($$, $3); }

|VECTOR                     { memcpy($$, $1->valor, VECTOR_SZ); }
|VECT                       { memcpy($$, $1, VECTOR_SZ); }
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
    printf("Bienvenido a calcpreter\n<< ");
    yyparse();
    return 0;
}

int yyerror(){
	return 0;
}