# Calcpreter

Calcpreter es una calculadora con funciones básicas implementadas que podrás usar en la CLI. Podrás guardar variables durante la ejecución y operar con números reales o con vectores en 3 dimensiones.

## Contenido

* [Compilación desde código fuente](#compilación-desde-código-fuente)
* [Sintaxis](#sintaxis)
* [Tipos](#tipos)
  * [Múltiples asignaciones](#múltiples-asignaciones)
* [Comandos](#comandos)
  * [Mostrando valores en pantalla](#mostrando-valores-en-pantalla)
* [Constantes](#constantes)
* [Expresiones algebraicas y operaciones](#expresiones-algebraicas-y-operaciones)
* [Funciones integradas](#funciones-integradas)
* [Scripts](#scripts)
  * [Comentarios](#comentarios)

## Compilación desde código fuente

Para compilar en windows es necesario Yacc/Bison, Lex, GCC. Los puedes instalar con el siguiente comando.

### Linux

Dependencias

```shell
sudo apt-get install bison && sudo apt-get install lex && sudo apt-get install gcc
```

Clonar el repositorio

```shell
git clone https://github.com/crixodia/calcpreter
```

Posicionarse en la carpeta del proyecto

```shell
cd calcpreter/calc
```

Compilación lex/yacc/gcc

```shell
lex a.l && yacc a.y && gcc y.tab.c -lm -o calcpreter.out
```

#### Ejecutarás calcpreter

```shell
./calcpreter.out
```

## Sintaxis

Luego de cada asignación, comando, o expresión algebraica, es necesario cerrar la instrucción con `;` tal y como se muestra a continuación.

```F#
a = sin(#pi);
.clear;
abs(-5).print;
```

## Tipos

### Reales

Para guardar un número real basta con asignar un valor, usar su identificador, asignar otra variable o una [constante](#constantes).

```F#
a = 10;
a = b;
a = #e;
```

### Vectores

Los vectores se declaran con su identificador entre corchetes. En caso de usar su identificador sin un valor concreto se creará el arreglo con el valor por defecto `[0, 0, 0]`.

```F#
[a] = [1, c, 3];
```

Podrás notar que los elementos del vector se separan con `,` Todos los vectores serán tripletas. En caso de que un vector contenga ceros sucesivos en sus posiciones finales cuentas la siguiente forma de asignación.

```F#
[a] = [1];      //Equivale a [1, 0, 0];
[b] = [1, 2];   //Equivale a [1, 2, 0];
```

Puedes usar otras variables o [constantes](#constantes) para los elementos del vector.

```F#
[a] = [a, b, c];
[b] = [#e];
```

En el ejemplo anterior notarás que un identificador de un número real no causará problemas en el identificador de un vector. Podrás tener una variable `a` y un vector `[a]` simultáneamente durante la ejecución de **calcpreter**.

#### Accediendo a las componentes de un vector

Para obtener el valor de una componente de un vector, es necesario usar los identificadores de la base canónica. Por ejemplo, si necesitas obtener únicamente el valor de la tercera componente del vector `[a]` tomamos `[a].k`

```F#
//Supongamos [a] = [1, 20, 3];
a = [a].k;                  //a = 3;
segunda = [a].j + [a].i;    //a = 21;
```

De manera análoga, se puede alterar el valor de las componentes de un vector.

```F#
//Supongamos [a] = [1, 20, 3];
[a].k = #pi;                  //[a] = [1, 20, pi];
[a].i = [a].j + [a].k;        //[a] = [23.1416, 20, pi];
```

### Múltiples asignaciones

Es posible asignar un solo valor a diferentes variables en una sola línea.

```F#
a = b = c = 10;
[a] = [b] = [c] = [#e, #pi, #G];
c = [c].i = a;
```

## Comandos

|Comando|Descripción|Uso|
|---|---|---|
|.print|Muestra el valor de una variable en un formato adecuado|`variable.print`|
|.printd|Muestra el valor de una variable en formato decimal|`variable.printd`
|.info|Muestra el valor de una variable junto con su identificador en un formato adecuado|`variable.info`|
|.infod|Muestra el valor de una variable jundo con su identificador en formato decimal|`variable.infod`|
|.list|Muestra todas las variables ingresadas (reales o vectores) en un formato adecuado junto a su identificador|`.list`|
|.listd|Muestra el valor de todas las variables ingresadas (reales o vectores) en formato decimal junto a su identificador|`.listd`|
|.const|Muestra una tabla con todas las constantes disponibles|`.const`|
|.clear|Elimina todas las variables (reales o vectores) de memoria|`.clear`|

### Mostrando valores en pantalla

Aquí tienes un ejemplo en el que al final muestra todas las variables.

```F#
//Este es un programa de ejemplo;
a=#pi;          //Una constante;
a.print;        //Imprime únicamente el valor de a;
[a]=[a,2,3];    //equivale a [3.1416, 2, 3];
.list;          //Muestra todo lo declarado;
//Fin de programa de ejemplo;
```

Cuya salida es:

```F#
3.14159
a = 3.14159
[a] = [3.14159, 2, 3]
```

## Constantes

Puedes obtener el valor de una constante precediendo su identificador de `#` o incluso obtener su valor por pantalla directamente con el [comando](#comandos) .print

```F#
pi = #pi;
a = #e;
#G.print;   //Mostará el valor de la constante gravitacional en el SI;
```

Aquí tienes una tabla con todas las constantes disponibles (Usando el sistema internacional).

|Constante|Expresión|||Descripción|
|:---:|---|---|---|---|
|![equation](https://latex.codecogs.com/svg.latex?\pi)|#pi|#PI||Constante matemática π|
|![equation](https://latex.codecogs.com/svg.latex?e)|#e|#euler|#napier|Número de Euler|
|![equation](https://latex.codecogs.com/svg.latex?G)|#G|||Constante gravitacional|
|![equation](https://latex.codecogs.com/svg.latex?k)|#k|||Constante de Coulomb|
|![equation](https://latex.codecogs.com/svg.latex?c)|#c|||Constante de la velocidad de la luz|
|![equation](https://latex.codecogs.com/svg.latex?-e)|#elect|||Carga de un electrón|
|![equation](https://latex.codecogs.com/svg.latex?+e)|#prot|||Carga de un protón|

## Expresiones algebraicas y operaciones



## Funciones integradas

Para usar estas funciones es necesario usar paréntesis `(x)`. Salvo para valor absoluto en la que puedes usar barras `|x|` o `abs(x)`. Encontrarás funciones de dos parámetros de tipo `rnd(x, y)` en la que se tomarán dos expresiones.

|Función|Alternativa|Descripción|Retorno|
|---|---|---|---|
|``cos(x)``||Función coseno|real|
|``acos(x)``||Arcocoseno|real|
|``cosh(x)``||Coseno hiperbólico|real|
|`acosh(x)`||Coseno hiérbólico inverso|real|
|`sin(x)`|`sen(x)`|Función seno|real|
|`asin(x)`|`asen(x)`|Arcoseno|real|
|`sinh(x)`|`senh(x)`|Seno hipebólico|real|
|`asinh(x)`|`asenh(x)`|Seno hiperbólico inverso|real|
|`tan(x)`|`tg(x)`|Función tangente|real|
|`atan(x)`|`atg(x)`|Arcotangente|real|
|`tanh(x)`|`tgh(x)`|Tangente hiperbólico|real|
|`atanh(x)`|`atgh(x)`|Arcotangente hiperbólico|real|
|`abs(x)`|`|x|`|Valor absoluto|real|
|`sqrt(x)`||Raíz cuadrada|real|
|`ceil(x)`||Función techo|real|
|`floor(x)`||Función suelo|real|
|`exp(x)`||Función exponencial|real|
|`ln(x)`||Función logaritmo natural|real|
|`log(x, y)`||Logaritmo base y de x|real|
|`rnd(a, b)`||Número aleatorio entre a y b|real|
|`mcm(a, b)`||Mínimo común múltiplo entre a y b|real|
|`mcd(a, b)`||Máximo común divisor entre a y b|real|
|`distance(a, b)`|`distance([a], [b])`|Distancia entre a y b|real|
|`nthPrime(x)`||Enésimo número primo|real|
|`nthFibonacci(x)`||Enésimo número de la sucesión de Fibonacci|real|
|`vProduct([a], [b])`||Producto vectorial|vector|

### Ejemplos

```shell
[a] = vProduct([1,2,3],[#pi,rnd(5,10),cos(#pi)]];
a = |-5|;
b = distance([1,2,3],[4,5,6]);
c = distance(10,20);
```

## Scripts

Puedes scribir tus propios scripts en un archivo. Y ejecutarlos a través de la línea de comandos.

```shell
./calcshell.out < input.txt >> output.txt
```

### Comentarios

Solo es posible comentarios de una sola línea con el siguiente formato

```F#
//Este es un comentario;
a = 0; //Notarás que finaliza con ;
```

No es posible usar `;` en medio de un comentario `//Esto no ; es posible;`