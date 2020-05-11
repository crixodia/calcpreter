typedef struct simboloVector
{
    struct simboloVector *sig;
    char nombre[20];
    double valor[3];
} simboloVector;

simboloVector *crearVector()
{
    return NULL;
};

void insertarVector(simboloVector **pT, simboloVector *s)
{
    s->sig = (*pT);
    (*pT) = s;
};

simboloVector *buscarVector(simboloVector *t, char nombre[20])
{
    while ((t != NULL) && (strcmp(nombre, t->nombre)))
        t = t->sig;
    return (t);
};

void imprimirVector(simboloVector *t)
{
    while (t != NULL)
    {
        printf("%s = [%g, %g, %g]\n", t->nombre, t->valor[0], t->valor[1], t->valor[2]);
        t = t->sig;
    }
};

void imprimirVectorD(simboloVector *t)
{
    while (t != NULL)
    {
        printf("%s = [%f, %f, %f]\n", t->nombre, t->valor[0], t->valor[1], t->valor[2]);
        t = t->sig;
    }
};