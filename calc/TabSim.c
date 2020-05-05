#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
    while (t != NULL)
    {
        printf("%s = %f\n", t->nombre, t->valor);
        t = t->sig;
    }
};