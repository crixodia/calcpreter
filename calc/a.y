%{
    //Tipos de dato
    #include "TabSim.c"
    #include "Vector.c"

    //Tablas de símbolo
    simbolo * t;
    simboloVector * v;

    //Prototipos
    int yylex(void);
    int yyerror();
%}

%union {
    double numero;
    simbolo * ptrSimbolo;

    double vector[3];
    simboloVector * ptrSimboloVector;
}

%token <numero> NUMERO
%token <ptrSimbolo> ID

%token <vector> VECT
%token <ptrSimboloVector> VECTOR

%token ASIG PRINT PRINTD INFO INFOD LIST LISTD CANONI CANONJ CANONK 
%token CONSTANTES CLEAR TO

%token PI EULER GRAVITACIONAL COULOMB ELECTRON PROTON NEUTRON VLUZ

%token KILO
%token METRO

%token COS SIN TAN ACOS ASIN ATAN COSH SINH TANH ACOSH 
%token ASINH ATANH

%token ABS LN SQRT CEIL FLOOR RND MCD EXP LOG MCM
%token DISTANCE NTHPRI NTHFIB VPROD

%type <numero> E A
%type <vector> V AV

%left '+' '-'
%left '*' '/' '%'
%right '^' '!'

%%
//Expresiones
S:   S A ';'                { ; }
|S ID INFO ';'              { printf("%s = %g\n",$2->nombre, $2->valor); }
|S ID INFOD ';'             { printf("%s = %f\n",$2->nombre, $2->valor); }
|S E PRINT ';'              { printf("%g\n", $2); }
|S E PRINTD ';'             { printf("%f\n", $2); }
|S AV ';'                   { ; }
|S VECTOR INFO ';'          { printf("%s = [%g, %g, %g]\n",$2->nombre, $2->valor[0], $2->valor[1], $2->valor[2]); }
|S VECTOR INFOD ';'         { printf("%s = [%f, %f, %f]\n",$2->nombre, $2->valor[0], $2->valor[1], $2->valor[2]); }
|S V PRINT ';'              { printf("%g, %g, %g\n", $2[0], $2[1], $2[2]); }
|S V PRINTD ';'             { printf("%f, %f, %f\n", $2[0], $2[1], $2[2]); }
|S LIST ';'                 { imprimir(t); imprimirVector(v); }
|S LISTD ';'                { imprimirD(t); imprimirVectorD(v); }
|S CONSTANTES ';'           { imprimirConstantes(); }
|S CLEAR ';'                { v = NULL; t = NULL; }
|S error ';'                { yyerrok; }
|/**/
;

//Asignaciones
A:   ID ASIG E              {
                                $$ = $3;
                                $1->valor = $3;
                            }
|ID ASIG A                  {
                                $$ = $3;
                                $1->valor = $3;
                            }
;

//Asignaciones a vectores
AV:  VECTOR ASIG V          {
                                memcpy($$, $3, 3*sizeof(double));
                                $1->valor[0] = $3[0];
                                $1->valor[1] = $3[1];
                                $1->valor[2] = $3[2];
                            }
|VECTOR ASIG AV             {
                                memcpy($$, $3, 3*sizeof(double));
                                $1->valor[0] = $3[0];
                                $1->valor[1] = $3[1];
                                $1->valor[2] = $3[2];
                            }
|VECTOR CANONI ASIG E       { $1->valor[0] = $4; }
|VECTOR CANONJ ASIG E       { $1->valor[1] = $4; }
|VECTOR CANONK ASIG E       { $1->valor[2] = $4; }
;

//Operaciones con escalares
E:   E '+' E		   	    { $$ = $1 + $3; }
|E '-' E			        { $$ = $1 - $3; }
|E '*' E			        { $$ = $1 * $3; }
|E '/' E			        {
                                if($3 == 0){
                                    printf("Division by zero\n");
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

//Asignación a vectores
|VECTOR CANONI              { $$ = $1->valor[0]; }
|VECTOR CANONJ              { $$ = $1->valor[1]; }
|VECTOR CANONK              { $$ = $1->valor[2]; }

//Funciones trigonométricas
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

//Funciones
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
|NTHPRI '(' E ')'           { $$ = nthPrimo((int)$3); }
|NTHFIB '(' E ')'           { $$ = nthFibonacci((int)$3); }

//Funciones vectoriales escalares
|V '*' V                    { $$ = productoInterno($1, $3); }
|ABS '(' V ')'              { $$ = sqrt(productoInterno($3, $3)); }
|'|' V '|'                  { $$ = sqrt(productoInterno($2, $2)); }
|DISTANCE '(' V ',' V ')'   {
                                double temp[3];
                                memcpy(temp, $5, 3*sizeof(double));
                                escalarVector(temp, temp, -1.0);
                                sumaVector( temp, temp, $3);
                                $$ = sqrt(productoInterno(temp, temp));
                            }
|DISTANCE '(' E ',' E ')'   { $$ = fabs($5 - $3); }

//Constantes
|PI                         { $$ = M_PI; }
|GRAVITACIONAL              { $$ = M_G; }
|COULOMB                    { $$ = M_K; }
|VLUZ                       { $$ = M_VLUZ; }
|ELECTRON                   { $$ = M_ELECTRON; }
|PROTON                     { $$ = -M_ELECTRON; }
|NEUTRON                    { $$ = 0; }
|EULER                      { $$ = M_EULER; }

|ID                         { $$ = $1->valor; }
|NUMERO                     { $$ = $1; }
;

//Operaciones con vectores
V:   '[' E ',' E ',' E ']'  { $$[0] = $2; $$[1] = $4; $$[2] = $6; }
|'[' E ',' E ']'            { $$[0] = $2; $$[1] = $4; }
|'[' E ']'                  { $$[0] = $2; }
|V '+' V                    { sumaVector($$, $1, $3); }
|V '-' V                    { 
                                double temp[3];
                                escalarVector(temp, $3, -1.0);
                                sumaVector($$, $1, temp); 
                            }
|E '*' V                    { escalarVector($$, $3, $1);}
|'-' V                      { escalarVector($$, $2, -1.0); }
|VECTOR                     { memcpy($$, $1->valor, 3*sizeof(double)); }
|VECT                       { memcpy($$, $1, 3*sizeof(double)); }

//Funciones vectoriales
|VPROD '(' V ',' V ')'      { productoVectorial($$, $3, $5); }
;
%%
#include "lex.yy.c"
//#include "errorlib.c"

int main()
{
    t = crear();
    yyparse();
    return 0;
}

int yyerror(){
	return 0;
}