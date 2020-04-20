# Calculadora con variables y tabla de símbolos con Lex y Yacc :nerd_face:

Este proyecto crearemos el intérprete de un pseudo lenguaje valiéndonos de las herramientas Lex (generador de analizadores léxicos) y Yacc (generador de analizadores sintácticos) Que conjuntamente otorgaran el ejecutable necesario para interpretar las instrucciones. La calculadora podrá asignar variables, mostrarlas y usarlas para otras asignaciones. Cada instrucción deberá finalizar con `;` .Dispondrá de un conjunto de funciones trigonométricas y otras definidas en el archivo de código fuente como factorial, máximo común divisor y números aleatorios en un intervalo.

## Contenido

- [Análisis léxico](#analisis-lexico)
	- [Asignación de variables y obtención de valores](#asignacion)
- [Análisis sintáctico y semántico](#analisis-semantico)
- [Tabla de símbolos](#tabla)
- [Compilación](#compilar)
- [Ejecución y ejemplos](#ejecucion)

## Análisis léxico<a name="analisis-lexico"></a>

Para el análisis léxico es necesario plantear las expresiones regulares que acepten número decimales  `[0-9]+\.?[0-9]*`, identificadores `[a-zA-Z][a-zA-Z0-9]*` y funciones de la calculadora. En la tabla podemos notar la función matemática, la expresión que será aceptada por el analizador léxico y el token que se usará para la fase de análisis sintáctico.

|                           Función                            | Expresión | Token |
| :----------------------------------------------------------: | :-------: | :---: |
| $$\sin x$$ |   "SEN"   |  SEN  |
| $$\cos x$$ |   "COS"   |  COS  |
| $$\tan x$$ |   "TAN"   |  TAN  |
| $$\ln x$$ |   "LN"    |  LN   |
| $$\mid x\mid$$   |   "ABS"   |  ABS  |
| $$\sqrt x$$ |  "SQRT"   | SQRT  |
| $$\lfloor x \rfloor$$ |  "CEIL"   | CEIL  |
| $$\lceil x \rceil$$ |  "FLOOR"  | FLOOR |
| $$\mathrm{e}^{x}$$ |   "EXP"   |  EXP  |
| $$mcd(x)$$ |   "MCD"   |  MCD  |
| $$rnd(x)$$ |   "RND"   |  RND  |

#### Asignación a variables y obtención de valores<a name="asignacion"></a>

Dado a que existen variables, es necesario crear una forma de asignar e imprimir valores. Para asignar usaremos el símbolo `:` y para la impresión `?` por ejemplo **`A:SEN(COS(ABS(10)));`** Se ha asignado el valor de la expresión a la variable `A` , para imprimir su valor basta con **`?A;`** Es por esto que es necesario añadir al analizador léxico las expresiones correspondientes `":"` y `"?"` con los tokens `ASIG` y `PRINT` respectivamente.

## Análisis sintáctico y semántico<a name="analisis-semantico"></a>

En cuando a la gramática, es necesario crear una sección para las asignaciones y otra para la expresiones matemáticas de la siguiente forma

``````c
S   :S A ';'                { printf("<<%.2f\n",$2); }
    |S PRINT E ';'          { printf(">> %.2f\n",$3); }
    |S error ';'            { yyerrok; }
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
    |NUMERO                 { $$ = $1; }
    ;
``````

## Tabla de símbolos<a name="tabla"></a>

El archivo [TabSim.c](https://github.com/crixodia/interprete-calculadora/blob/master/calc/TabSim.c) tiene como fin la creación de la tabla de símbolos durante la interpretación de nuestras expresiones. Esta contarán con una función parar **crear** una tabla de símbolos, **insertar** un símbolo, **buscar** un símbolo en la tabla y finalmente una para **imprimir** su contenido.

## ¿Cómo compilo el compilador? :smile:<a name="compilar"></a>

El orden de compilación es importante y será de la siguiente forma:

1. lex [a.l](https://github.com/crixodia/interprete-calculadora/blob/master/calc/a.l)
2. yacc [a.y](https://github.com/crixodia/interprete-calculadora/blob/master/calc/a.y)
3. gcc [y.tab.c](https://github.com/crixodia/interprete-calculadora/blob/master/calc/y.tab.c) -lm

## Ejemplo de ejecución :desktop_computer:<a name="ejecucion"></a>

En la siguiente captura podemos ver asignaciones a diferentes variables, el uso de estas n otras asignaciones impresión de valores y al finalizar la ejecución de imprime la tabla de símbolos.

![](https://raw.githubusercontent.com/crixodia/interprete-calculadora/master/examples/preview.png)

Si usamos el archivo [input.txt](https://github.com/crixodia/interprete-calculadora/blob/master/examples/input.txt) obtendremos la salida que se guarda en el archivo [output.txt](https://github.com/crixodia/interprete-calculadora/blob/master/examples/output.txt)
