# Calcpreter

Calcpreter es una calculadora con funciones básicas implementadas que podrás usar en la CLI. Podrás guardar variables durante la ejecución y operar con números reales o con vectores en 3 dimensiones.

## Contenido
* [Instalación](#instalación)
    * [Compilación desde código fuente](#compilación-desde-código-fuente)
* [Sintaxis](#sintaxis)
* [Tipos](#tipos)
    * [Reales](#reales)
    * [Vectores](#vectores)
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
## Instalación

### Compilación desde código fuente

windows
    
    calcpreter.exe < examples\input.txt >> output.txt
## Sintaxis
Luego de cada asignación, comando, o expresión algebraica, deberás cerrar la instrucción con `;` tal y como se muestra a continuación.
```F#
a = sin(#pi);
.clear;
abs(-5).print;
```
## Tipos
### Reales
Para guardar un número real basta con asignar un valor, usar su identificador, asignar otra variable previa o una [constante](#constantes).
```F#
a = 10;
a = b;
a = #e;
```
### Vectores
Sin embargo para vectores abrá que asignar el identificador entre corchetes. De igual manera se creará el arreglo con el valor por defecto `[0, 0, 0]` en caso de usar su identificador sin un valor concreto.
```F#
[a] = [1, c, 3];
```
Podrás notar que los elementos del vector se separan con `,` Todos los vectores serán tripletas. En caso de que tu vector contenga ceros sucesivos en sus posiciones finales, podrás declararlo de la siguiente forma
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

### Múltiples asignaciones
## Comandos
## Mostrando valores en pantalla
## Constantes
## Expresiones algebraicas
## Operaciones con reales
## Operaciones con vectores
## Funciones integradas
### Conversión de unidades
## Scripts
### Comentarios