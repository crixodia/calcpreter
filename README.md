# Calcpreter

Calcpreter es una calculadora con funciones básicas implementadas que podrás usar en la CLI. Podrás guardar variables durante la ejecución y operar con números reales o con vectores en 3 dimensiones.

## Contenido

- [Calcpreter](#calcpreter)
  - [Contenido](#contenido)
  - [Compilación desde código fuente](#compilación-desde-código-fuente)
    - [Linux](#linux)
      - [Ejecutarás calcpreter](#ejecutarás-calcpreter)
  - [Sintaxis](#sintaxis)
  - [Tipos](#tipos)
    - [Reales](#reales)
    - [Vectores](#vectores)
      - [Accediendo a las componentes de un vector](#accediendo-a-las-componentes-de-un-vector)
    - [Múltiples asignaciones](#múltiples-asignaciones)
  - [Comandos](#comandos)
    - [Mostrando valores en pantalla](#mostrando-valores-en-pantalla)
  - [Constantes](#constantes)
  - [Expresiones algebraicas y operaciones](#expresiones-algebraicas-y-operaciones)
  - [Funciones integradas](#funciones-integradas)
    - [Ejemplos](#ejemplos)
  - [Scripts](#scripts)
    - [Comentarios](#comentarios)

## Compilación desde código fuente

### Linux

Dependencias

```shell
sudo apt-get install bison flex gcc libncurses5-dev
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
lex a.l && yacc a.y && gcc y.tab.c -lm -lncurses -o calcpreter.out
```

#### Ejecutarás calcpreter

```shell
./calcpreter.out
```

## Sintaxis

Luego de cada asignación, comando, o expresión algebraica, es necesario cerrar la instrucción con `;` tal y como se muestra a continuación.

```F#
a = Sin(#pi);
Delete(All);
Abs(-5).print;
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

Los vectores se declaran con su identificador entre corchetes. En caso de usar su identificador sin un valor concreto tendrá un valor por defecto `[0, 0, 0]`.

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

Un identificador de un número real no causará problemas en el identificador de un vector. Podrás tener una variable `a` y un vector `[a]` simultáneamente durante la ejecución de **calcpreter**.

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

| Comando         | Descripción                                                                                                        | Uso                     |
| --------------- | ------------------------------------------------------------------------------------------------------------------ | ----------------------- |
| .print          | Muestra el valor de una variable en un formato adecuado                                                            | `variable.print`        |
| .printd         | Muestra el valor de una variable en formato decimal                                                                | `variable.printd`       |
| .info           | Muestra el valor de una variable junto con su identificador en un formato adecuado                                 | `variable.info`         |
| .infod          | Muestra el valor de una variable jundo con su identificador en formato decimal                                     | `variable.infod`        |
| List            | Muestra todas las variables ingresadas (reales o vectores) en un formato adecuado junto a su identificador         | `List`                  |
| Listd           | Muestra el valor de todas las variables ingresadas (reales o vectores) en formato decimal junto a su identificador | `Listd`                 |
| Consts          | Muestra una tabla con todas las constantes disponibles                                                             | `Consts`                |
| Delete(All)     | Elimina todas las variables (reales o vectores) de memoria                                                         | `Delete(All)`           |
| Cls, Clear, Clc | Limpia la pantalla de la terminal                                                                                  | `Clear` , `Cls` , `Clc` |
| Exit            | Salir de calcpreter                                                                                                | `Exit`                  |

### Mostrando valores en pantalla

Aquí tienes un ejemplo en el que al final muestra todas las variables.

```F#
//Este es un programa de ejemplo;
a=#pi;          //Una constante;
a.print;        //Imprime únicamente el valor de a;
[a]=[a,2,3];    //equivale a [3.1416, 2, 3];
List;          //Muestra todo lo declarado;
//Fin de programa de ejemplo;
```

Salida:

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

|                       Constante                       | Expresión |        |         | Descripción                         |
| :---------------------------------------------------: | --------- | ------ | ------- | ----------------------------------- |
| ![equation](https://latex.codecogs.com/svg.latex?\pi) | #pi       | #PI    |         | Constante matemática π              |
|  ![equation](https://latex.codecogs.com/svg.latex?e)  | #e        | #euler | #napier | Número de Euler                     |
|  ![equation](https://latex.codecogs.com/svg.latex?G)  | #G        |        |         | Constante gravitacional             |
|  ![equation](https://latex.codecogs.com/svg.latex?k)  | #k        |        |         | Constante de Coulomb                |
|  ![equation](https://latex.codecogs.com/svg.latex?c)  | #c        |        |         | Constante de la velocidad de la luz |
| ![equation](https://latex.codecogs.com/svg.latex?-e)  | #elect    |        |         | Carga de electrón                   |
| ![equation](https://latex.codecogs.com/svg.latex?+e)  | #prot     |        |         | Carga de protón                     |
| ![equation](https://latex.codecogs.com/svg.latex?n)   | #neut     |        |         | Carga de neutrón                    |

## Expresiones algebraicas y operaciones

Para números reales están permitidas las operaciones clásicas del algebra como suma `+`, resta `-`, multiplicación `*`, división `/`, potenciación `^`, módulo `%` y factorial `!`. A continuación tienes un ejemplo con anidaciones de paréntesis y todos lo operadores mencionados.

```F#
valor = ((((1+2)-3)*4/5)^6)%7!;
```
Es necesario recordar que el símbolo factorial va después del número entero a operar `5!`.

En cuanto a vectores, las operaciones permitidas son: suma `+`, resta `-`, producto interno o punto `*`. El producto punto da como resultado un real. Por tanto deberás asignar esta operación a un identificador de ese tipo.

```F#
[a] = [1,2,3];
[b] = [4,5,6];
[c] = [a]+[b];
escalar = [a]*[c];
```

## Funciones integradas

Para usar estas funciones es necesario usar paréntesis `(x)`. Salvo para valor absoluto en la que puedes usar barras `|x|` o `Abs(x)`. Encontrarás funciones de dos parámetros de tipo `Rnd(x, y)` en la que se tomarán dos expresiones.

| Función           | Alternativa      | Descripción                                              | Retorno |
| ----------------- | ---------------- | -------------------------------------------------------- | ------- |
| `Cos(x)`          |                  | Función coseno                                           | real    |
| `Acos(x)`         |                  | Arcocoseno                                               | real    |
| `Cosh(x)`         |                  | Coseno hiperbólico                                       | real    |
| `Acosh(x)`        |                  | Coseno hiérbólico inverso                                | real    |
| `Sin(x)`          | `Sen(x)`         | Función seno                                             | real    |
| `Asin(x)`         | `Asen(x)`        | Arcoseno                                                 | real    |
| `Sinh(x)`         | `Senh(x)`        | Seno hipebólico                                          | real    |
| `Asinh(x)`        | `Asenh(x)`       | Seno hiperbólico inverso                                 | real    |
| `Tan(x)`          | `Tg(x)`          | Función tangente                                         | real    |
| `Atan(x)`         | `Atg(x)`         | Arcotangente                                             | real    |
| `Tanh(x)`         | `Tgh(x)`         | Tangente hiperbólico                                     | real    |
| `Atanh(x)`        | `Atgh(x)`        | Arcotangente hiperbólico                                 | real    |
| `Abs(x)`          | `Abs([x])`       | Valor absoluto de un número, norma o módulo de un vector | real    |
| `Sqrt(x)`         |                  | Raíz cuadrada                                            | real    |
| `Ceil(x)`         |                  | Función techo                                            | real    |
| `Floor(x)`        |                  | Función suelo                                            | real    |
| `Exp(x)`          |                  | Función exponencial                                      | real    |
| `Ln(x)`           |                  | Función logaritmo natural                                | real    |
| `Log(x, y)`       |                  | Logaritmo base y de x                                    | real    |
| `Rnd(a, b)`       |                  | Número aleatorio entre a y b                             | real    |
| `Mcm(a, b)`       |                  | Mínimo común múltiplo entre a y b                        | real    |
| `Mcd(a, b)`       |                  | Máximo común divisor entre a y b                         | real    |
| `Dist(a, b)`      | `Dist([a], [b])` | Distancia entre a y b                                    | real    |
| `NthPri(x)`       |                  | Enésimo número primo                                     | real    |
| `NthFib(x)`       |                  | Enésimo número de la sucesión de Fibonacci               | real    |
| `Gibbs([a], [b])` |                  | Producto vectorial                                       | vector  |
| `Unit([a])`       |                  | Vector unitario                                          | vector  |
| `Proy([a], [b])`  |                  | Proyección de a en b                                     | vector  |
| `Norm([a], [b])`  |                  | Vector normal entre a y v                                | vector  |
| `nCk(a, b)`       |                  | Combinaciones de a en grupos de tamaño b                 | real    |
| `nPk(a, b)`       |                  | Permutaciones de a en grupos de tamaño b                 | real    |

### Ejemplos

```F#
[a] = Gibbs([1,2,3],[#pi,Rnd(5,10),Cos(#pi)]]);
a = |-5|;
b = Distance([1,2,3],[4,5,6]);
c = Distance(10,20);
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
