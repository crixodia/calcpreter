#define M_PI 3.14159265358979323846
#define M_EULER 2.71828182845904523536
#define M_G 6.67430E-11
#define M_K 8.9875517923E9
#define M_ELECTRON -1.60218E-19
#define M_VLUZ 3E8

#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*void printInput(int ln){
    if (ln == 0)
        printf("\n<< ");
    else
        printf("<< ");
}*/

typedef struct simbolo
{
    struct simbolo *sig;
    char nombre[20];
    double valor;
} simbolo;

simbolo *crear()
{
    return NULL;
};

void insertar(simbolo **pT, simbolo *s)
{
    s->sig = (*pT);
    (*pT) = s;
};

simbolo *buscar(simbolo *t, char nombre[20])
{
    while ((t != NULL) && (strcmp(nombre, t->nombre)))
        t = t->sig;
    return (t);
};

void imprimir(simbolo *t, int type)
{
    printf("\n   ##:\n");
    while (t != NULL)
    {
        switch (type)
        {
        case 0: //g
            printf("\t%s = %g\n", t->nombre, t->valor);
            break;
        case 1: //f
            printf("\t%s = %f\n", t->nombre, t->valor);
            break;
        }
        t = t->sig;
    }
};

//Enésimo número primo
int nthPrimo(int n)
{
    int i, k = 1, f = 2, counter = 0, primo = -1;
    while (f <= n || k <= n)
    {
        counter = 0;
        for (i = 1; i <= f; i++)
        {
            if (f % i == 0)
            {
                counter++;
            }
        }
        if (counter <= 2)
        {
            primo = f;
            k++;
        }
        f++;
    }
    return primo;
}

//Enésimo de la sucesión de Fibonacci
int nthFibonacci(int n)
{
    return n < 2 ? n : nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

//Máximo comun divisor
int mcd(int a, int b)
{
    return b == 0 ? a : mcd(b, a % b);
}

//Mínimo comun multiplo
int mcm(int a, int b)
{
    return (a * b) / mcd(a, b);
}

//Factorial de un número
int factorial(int n)
{
    return n == 0 ? 1 : factorial(n - 1) * n;
}

//Imprime una tabla con las constantes matemáticas en el sistema internacional
void imprimirConstantes()
{
    printf("\n    #:\n\tCommand\t\t\tValue\t\tDescription\n\n");
    printf("\t#pi\t#PI\t\t%g\t\tPi number\n", M_PI);
    printf("\t#e\t#euler\t#napier\t%g\t\te number\n", M_EULER);
    printf("\t#G\t\t\t%g\tGravitational constant\n", M_G);
    printf("\t#k\t\t\t%g\tCoulomb constant\n", M_K);
    printf("\t#c\t\t\t%g\t\tLight speed constant\n", M_VLUZ);
    printf("\t#elect\t\t\t%g\tElectron charge\n", M_ELECTRON);
    printf("\t#prot\t\t\t%g\tProton charge\n", -M_ELECTRON);
    printf("\t#neut\t\t\t%g\t\tNeutron charge\n", 0.0);
    printf("\t*Using International System of Units (SI)\n");
}