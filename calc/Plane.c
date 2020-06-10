typedef struct simboloPlano
{
    struct simboloPlano *sig;
    char nombre[20];
    double punto[3];
    double direccion[3];
    double direccion2[3];
} simboloPlano;

simboloPlano *crearPlano()
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
};