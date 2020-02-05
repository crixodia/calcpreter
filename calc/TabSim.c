#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
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

void imprimir(simbolo *t)
{
    printf("\t***********************************\n");
    printf("\t         TABLA DE SIMBOLOS         \n");
    printf("\t***********************************\n");
    printf("\tESP\tID\tTIPO\tVALOR\tDIM\n", t->nombre, t->valor);
    while (t != NULL)
    {
        printf("\tvar\t%s\tdouble\t%.2f\t0\n", t->nombre, t->valor);
        t = t->sig;
    }
    printf("\n");
};