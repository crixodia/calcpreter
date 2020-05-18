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

//Escalar por vector
void escalarVector(double *target, double *a, double esc)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        target[i] = esc * a[i];
    }
}

//Suma de vectores
void sumaVector(double *target, double *a, double *b)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        target[i] = a[i] + b[i];
    }
}

//Producto punto entre vectores
double productoInterno(double *a, double *b)
{
    double r = 0;
    int i;
    for (i = 0; i < 3; i++)
    {
        r += a[i] * b[i];
    }
    return r;
}

//Producto cruz o vectorial
void productoVectorial(double *target, double *a, double *b)
{
    target[0] = a[1] * b[2] - a[2] * b[1];
    target[1] = a[2] * b[0] - a[0] * b[2];
    target[2] = a[0] * b[1] - a[1] * b[0];
}