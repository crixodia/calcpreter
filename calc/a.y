%{
    #include "TabSim.c"
    #include "Vector.c"
    #define M_PI 3.14159265358979323846
    simbolo * t;
    simboloVector * v;

    int yylex(void);
    int yyerror();

    int factorial(int);
    int mcd(int, int);
    int mcm(int, int);
    
    void sumaVector(double * target, double * a, double * b);
    void escalarVector(double * target, double * a, double esc);
    double productoInterno(double * a, double * b);
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

%token ASIG PRINT INFO LIST CANONI CANONJ CANONK
%token PI EULER
%token ABS LN SQRT CEIL FLOOR RND MCD EXP LOG MCM
%token COS SIN TAN ACOS ASIN ATAN COSH SINH TANH ACOSH ASINH ATANH

%type <numero> E A
%type <vector> V AV

%left '+' '-'
%left '*' '/' '%'
%right '^' '!'

%%
S:   S A ';'                { ; }
    |S ID INFO ';'          { printf("%s = %f\n",$2->nombre, $2->valor); }
    |S E PRINT ';'          { printf("%f\n", $2); }
    |S AV ';'               { ; }
    |S VECTOR INFO ';'      { printf("%s = [%f, %f, %f]\n",$2->nombre, $2->valor[0], $2->valor[1], $2->valor[2]); }
    |S V PRINT ';'          { printf("%f,%f,%f\n", $2[0], $2[1], $2[2]); }
    |S LIST ';'             { imprimir(t); imprimirVector(v); }
    |S error ';'            { yyerrok; }
    |/**/
;
A:   ID ASIG E              {
                                $$ = $3;
                                $1->valor = $3;
                            }
    |ID ASIG A              {
                                $$ = $3;
                                $1->valor = $3;
                            }
;
AV:  VECTOR ASIG V          {
                                memcpy($$, $3, 3*sizeof(double));
                                $1->valor[0] = $3[0];
                                $1->valor[1] = $3[1];
                                $1->valor[2] = $3[2];
                            }
    |VECTOR ASIG AV         {
                                memcpy($$, $3, 3*sizeof(double));
                                $1->valor[0] = $3[0];
                                $1->valor[1] = $3[1];
                                $1->valor[2] = $3[2];
                            }
    |VECTOR CANONI ASIG E   { $1->valor[0] = $4; }
    |VECTOR CANONJ ASIG E   { $1->valor[1] = $4; }
    |VECTOR CANONK ASIG E   { $1->valor[2] = $4; }
;
E:   E '+' E		   	    { $$ = $1 + $3; }
    |E '-' E			    { $$ = $1 - $3; }
    |E '*' E			    { $$ = $1 * $3; }
    |E '/' E			    {
                                if($3 == 0){
                                    printf("Division by zero\n");
                                    $$ = 0;
                                }else{
                                    $$ = $1 / $3;
                                }
                  	        }
    |'(' E ')'			    { $$ = $2; } 
    |E '^' E			    { $$ = pow($1,$3); }
    |'-' E			        { $$ = -$2; }
    |E '%' E			    { $$ = (int)$1 % (int)$3; }
    |E '!'			        { $$ = factorial($1); }
    |COS '(' E ')'    	    { $$ = cos($3); }
    |ACOS '(' E ')'         { $$ = acos($3); }
    |COSH '(' E ')'         { $$ = cosh($3); }
    |ACOSH '(' E ')'        { $$ = acosh($3); }
    |SIN '(' E ')'    	    { $$ = sin($3); }
    |ASIN '(' E ')'         { $$ = asin($3); }
    |SINH '(' E ')'         { $$ = sinh($3); }
    |ASINH '(' E ')'        { $$ = asinh($3); }
    |TAN '(' E ')'    	    { $$ = tan($3); }
    |ATAN '(' E ')'         { $$ = atan($3); }
    |TANH '(' E ')'         { $$ = tanh($3); }
    |ATANH '(' E ')'        { $$ = atanh($3); }
    |ABS '(' E ')'    	    { $$ = fabs($3); }
    |'|' E '|'    	        { $$ = fabs($2); }
    |EXP '(' E ')'    	    { $$ = exp($3); }
    |LN '(' E ')'		    { $$ = log($3); }
    |LOG '(' E ',' E ')'    { $$ = log($3)/log($5); }
    |SQRT '(' E ')'		    { $$ = sqrt($3); }
    |CEIL '(' E ')'		    { $$ = ceil($3); }
    |FLOOR '(' E ')'	    { $$ = floor($3); }
    |RND '(' E ',' E ')'    {
                                srand(time(NULL));
                                $$=rand()%(int)(($5-$3+1)+$3);
		                    }
    |MCD '(' E ',' E ')'    { $$ = mcd($3,$5); }
    |MCM '(' E ',' E ')'    { $$ = mcm($3,$5); }
    |V '*' V                { $$ = productoInterno($1, $3); }
    |ABS '(' V ')'          { $$ = sqrt(productoInterno($3, $3)); }
    |'|' V '|'              { $$ = sqrt(productoInterno($2, $2)); }
    |PI                     { $$ = M_PI; }
    |EULER                  { $$ = exp(1); }
    |ID                     { $$ = $1->valor; }
    |NUMERO                 { $$ = $1; }
;
V:   '[' E ',' E ',' E ']'  { $$[0] = $2; $$[1] = $4; $$[2] = $6; }
    |'[' E ',' E ']'        { $$[0] = $2; $$[1] = $4; }
    |'[' E ']'              { $$[0] = $2; }
    |V '+' V                { sumaVector($$, $1, $3); }
    |V '-' V                { escalarVector($3, $3, -1.0); sumaVector($$, $1, $3); }
    |E '*' V                { escalarVector($$, $3, $1);}
    |'-' V                  { escalarVector($2, $2, -1.0); }
    |VECTOR                 { memcpy($$, $1->valor, 3*sizeof(double)); }
    |VECT                   { memcpy($$, $1, 3*sizeof(double)); }
;
%%
#include "lex.yy.c"
//#include "errorlib.c"

int main()
{
    t = crear();
    yyparse ();
    return 0;
}

//Maximo comun divisor
int mcd(int a, int b){
	return b == 0 ? a : mcd(b, a % b);
}

//Minimo comun multiplo
int mcm(int a, int b){
    return (a*b)/mcd(a,b);
}

int factorial (int n){
	return n == 0 ? 1 : factorial(n - 1) * n;
}

void escalarVector(double * target, double * a, double esc){
    for(int i = 0; i<3; i++){
        target[i] = esc *a[i];
    }
}

void sumaVector(double * target, double * a, double *b){
    for(int i = 0; i<3; i++){
        target[i] = a[i] + b[i];
    }
}

double productoInterno(double * a, double * b){
    double r = 0;
    for(int i = 0; i< 3; i++){
        r += a[i] * b[i];
    }
    return r;
}

int yyerror(){
	return 0;
}