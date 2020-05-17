%{
    //Tipos de dato
    #include "TabSim.c"
    #include "Vector.c"
    
    #define M_PI 3.14159265358979323846
    #define M_EULER 2.71828182845904523536
    #define M_G 6.67430E-11
    #define M_K 8.9875517923E9
    #define M_ELECTRON -1.60218E-19
    #define M_VLUZ 3E8

    //Tablas de símbolo
    simbolo * t;
    simboloVector * v;

    //Prototipos
    int yylex(void);
    int yyerror();
    int factorial(int);
    int mcd(int, int);
    int mcm(int, int);
    void sumaVector(double * target, double * a, double * b);
    void escalarVector(double * target, double * a, double esc);
    double productoInterno(double * a, double * b);
    int nthPrimo(int n);
    int nthFibonacci(int n);
    void productoVectorial(double * target, double * a, double * b);
    void imprimirConstantes();
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
S:   S A ';'                    { ; }
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
A:   ID ASIG E                  {
                                    $$ = $3;
                                    $1->valor = $3;
                                }
    |ID ASIG A                  {
                                    $$ = $3;
                                    $1->valor = $3;
                                }
;

//Asignaciones a vectores
AV:  VECTOR ASIG V              {
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
E:   E '+' E		   	        { $$ = $1 + $3; }
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

    //Conversiones
    |'(' E ')' KILO TO METRO    { printf("cnv\n"); }
    |'(' E ')' METRO TO KILO    { printf("cnv\n"); }

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
V:   '[' E ',' E ',' E ']'      { $$[0] = $2; $$[1] = $4; $$[2] = $6; }
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
    yyparse ();
    return 0;
}

//Máximo comun divisor
int mcd(int a, int b){
	return b == 0 ? a : mcd(b, a % b);
}

//Mínimo comun multiplo
int mcm(int a, int b){
    return (a*b)/mcd(a,b);
}

//Factorial de un número
int factorial (int n){
	return n == 0 ? 1 : factorial(n - 1) * n;
}

//Escalar por vector
void escalarVector(double * target, double * a, double esc){
    for(int i = 0; i<3; i++){
        target[i] = esc *a[i];
    }
}

//Suma de vectores
void sumaVector(double * target, double * a, double *b){
    for(int i = 0; i<3; i++){
        target[i] = a[i] + b[i];
    }
}

//Producto punto entre vectores
double productoInterno(double * a, double * b){
    double r = 0;
    for(int i = 0; i< 3; i++){
        r += a[i] * b[i];
    }
    return r;
}

//Enésimo número primo
int nthPrimo(int n){
	int i, k = 1, f = 2, counter = 0, primo = -1;
	while(f<=n || k<= n){
		counter=0;
		for(i=1; i<=f; i++){
			if(f%i==0){
				counter++;
			}
		}
		if(counter<=2){
			primo = f;
			k++;
		}
		f++;
	}
	return primo;
}

//Enésimo de la sucesión de Fibonacci
int nthFibonacci(int n){
    return n < 2 ? n : nthFibonacci(n-1) + nthFibonacci(n-2);
}

//Producto cruz o vectorial
void productoVectorial(double * target, double * a, double * b){
    target[0]=a[1]*b[2] - a[2]*b[1];
    target[1]=a[2]*b[0] - a[0]*b[2];
    target[2]=a[0]*b[1] - a[1]*b[0];
}

//Imprime una tabla con las constantes matemáticas en el sistema internacional
void imprimirConstantes(){
    printf("Command\t\t\tValue\t\tDescription\n\n");
    printf("#pi\t#PI\t\t%g\t\tPi number\n", M_PI);
    printf("#e\t#euler\t#napier\t%g\t\te number\n", M_EULER);
    printf("#G\t\t\t%g\tGravitational constant\n", M_G);
    printf("#k\t\t\t%g\tCoulomb constant\n", M_K);
    printf("#c\t\t\t%g\t\tLight speed constant\n", M_VLUZ);
    printf("#elect\t\t\t%g\tElectron charge\n", M_ELECTRON);
    printf("#prot\t\t\t%g\tProton charge\n", -M_ELECTRON);
    printf("#neut\t\t\t%g\t\tNeutron charge\n", 0.0);
    printf("*Using International System of Units (SI)\n");
}

int yyerror(){
	return 0;
}