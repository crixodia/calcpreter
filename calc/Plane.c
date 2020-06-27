typedef struct plane
{
    struct plane *sig;
    char nombre[20];
    double value[9];
} plane;

plane *crearPlano()
{
    return NULL;
};

void insertPlane(plane **pT, plane *s)
{
    s->sig = (*pT);
    (*pT) = s;
};

plane *searchPlane(plane *t, char nombre[20])
{
    while ((t != NULL) && (strcmp(nombre, t->nombre)))
        t = t->sig;
    return (t);
};

void printPlane(plane *t)
{
    while (t != NULL)
    {
        //printf("%s = [%g, %g, %g]\n", t->nombre, t->punto[0], t->punto[1], t->punto[2]);
        t = t->sig;
    }
};