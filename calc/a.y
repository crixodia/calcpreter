%{
    #include "TabSim.c"
    #define M_PI 3.14159265358979323846
    simbolo * t;

    int factorial(int);
    int mcd(int, int);
%}

%union {
    double numero;
    simbolo * ptrSimbolo;
}

%token <numero> NUMERO
%token <ptrSimbolo> ID

%token ASIG COS SEN TAN ABS LN SQRT CEIL FLOOR RND MCD EXP PRINT INFO PI LIST

%type <numero> E A

%left '+' '-'
%left '*' '/' '%'
%right '^' '!'

%%
S   :S A ';'                { ; }
    |S ID INFO ';'          { printf("%s = %f\n",$2->nombre, $2->valor); }
    |S E PRINT ';'          { printf("%f\n", $2); }
    |S error ';'            { yyerrok; }
    |S LIST ';'             { imprimir(t); }
    |/*VACIO*/
    ;
A   :ID ASIG E              {
                                $$ = $3;
                                $1->valor = $3;
                            }
    |ID ASIG A              {
                                $$ = $3;
                                $1->valor = $3;
                            }
    ;
E   :E '+' E		   	    { $$ = $1 + $3; }
    |E '-' E			    { $$ = $1 - $3; }
    |E '*' E			    { $$ = $1 * $3; }
    |E '/' E			    {
                                if($3 == 0){
                                    printf("No existe disvisión por cero\n");
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
    |SEN '(' E ')'    	    { $$ = sin($3); }
    |TAN '(' E ')'    	    { $$ = tan($3); }
    |ABS '(' E ')'    	    { $$ = fabs($3); }
    |'|' E '|'    	        { $$ = fabs($2); }
    |EXP '(' E ')'    	    { $$ = exp($3); }
    |LN '(' E ')'		    { $$ = log($3); }
    |SQRT '(' E ')'		    { $$ = sqrt($3); }
    |CEIL '(' E ')'		    { $$ = ceil($3); }
    |FLOOR '(' E ')'	    { $$ = floor($3); }
    |RND '(' E ',' E ')'	{
	   					        srand(time(NULL));
						        $$=rand()%(int)(($5-$3+1)+$3);
					        }
    |MCD '(' E ',' E ')'    { $$ = mcd($3,$5); }
    |ID                     { $$ = $1->valor; }
    |PI                     { $$ = M_PI; }
    |NUMERO                 { $$ = $1; }
    ;
%%
#include "lex.yy.c"
//#include "errorlib.c"

void main()
{
    t = crear();
    yyparse ();
    //imprimir(t);
}

int mcd(int a, int b){
	return b == 0 ? a : mcd(b, a % b);
}

int factorial (int n){
	return n == 0 ? 1 : factorial(n - 1) * n;
}

yyerror(){
	;
}
