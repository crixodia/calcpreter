typedef struct simboloRecta
{
    struct simboloRecta *sig;
    char nombre[20];
    double punto[3];
    double direccion[3];
} simboloRecta;

simboloRecta *crearRecta()
{
    return NULL;
};

void insertarRecta(simboloRecta **pT, simboloRecta *s)
{
    s->sig = (*pT);
    (*pT) = s;
};

simboloRecta *buscarRecta(simboloRecta *t, char nombre[20])
{
    while ((t != NULL) && (strcmp(nombre, t->nombre)))
        t = t->sig;
    return (t);
};

void imprimirRecta(simboloRecta *t)
{
    while (t != NULL)
    {
        //printf("%s = [%g, %g, %g]\n", t->nombre, t->punto[0], t->punto[1], t->punto[2]);
        t = t->sig;
    }
};