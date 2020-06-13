typedef struct plane
{
    struct plane *sig;
    char nombre[20];
    double *punto;
    double *direccion;
    double *direccion2;
} plane;

/*simboloPlano *crearPlano()
{
    return NULL;
};

void insertarPlano(simboloPlano **pT, simboloPlano *s)
{
    s->sig = (*pT);
    (*pT) = s;
};

simboloPlano *buscarPlano(simboloPlano *t, char nombre[20])
{
    while ((t != NULL) && (strcmp(nombre, t->nombre)))
        t = t->sig;
    return (t);
};

void imprimirPlano(simboloPlano *t)
{
    while (t != NULL)
    {
        //printf("%s = [%g, %g, %g]\n", t->nombre, t->punto[0], t->punto[1], t->punto[2]);
        t = t->sig;
    }
};*/