<div style="text-align:justify;">

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
* [Expresiones algebraicas](#expresiones-algebraicas)
* [Operaciones con reales](#operaciones-con-reales)
* [Operaciones con vectores](#operaciones-con-vectores)
* [Funciones integradas](#funciones-integradas)
    * [Conversión de unidades](#conversión-de-unidades)
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
lex a.l && yacc a.y && gcc y.tab.c -lm -o calcpreter
```
**Ejecutarás calcpreter**
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

### Mostrando valores en pantalla
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
|![equation](https://latex.codecogs.com/svg.latex?\pi)|#pi|||Constante matemática π|
|![equation](https://latex.codecogs.com/svg.latex?e)|#e|#euler|#napier|Número de Euler|
|![equation](https://latex.codecogs.com/svg.latex?G)|#G|||Constante gravitacional|
## Expresiones algebraicas
## Operaciones con reales
## Operaciones con vectores
## Funciones integradas
### Conversión de unidades
## Scripts
### Comentarios

</div>