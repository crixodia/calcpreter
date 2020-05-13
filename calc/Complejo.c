typedef struct simboloCompleo
{
    struct simboloComplejo *sig;
    char nombre[20];
    double entero;
    double imaginaria;
} simboloComplejo;

simboloComplejo *crearComplejo()
{
    return NULL;
};

void insertarComplejo(simboloComplejo **pT, simboloComplejo *s)
{
    s->sig = (*pT);
    (*pT) = s;
};

simboloComplejo *buscarComplejo(simboloComplejo *t, char nombre[20])
{
    while ((t != NULL) && (strcmp(nombre, t->nombre)))
        t = t->sig;
    return (t);
};

void imprimirComplejo(simboloComplejo *t)
{
    while (t != NULL)
    {
        printf("%s = %g", t->nombre, t->entero);
        if(t->imaginaria > 0){       
            printf("%g + \n", t->imaginaria);
        }else if(t->imaginaria < 0){
            printf("%g \n", t->imaginaria);
        }
        t = t->sig;
    }
};

void imprimirComplejoD(simboloComplejo *t)
{
    while (t != NULL)
    {
        printf("%s = %g", t->nombre, t->entero);
        if(t->imaginaria > 0){       
            printf("%f + \n", t->imaginaria);
        }else if(t->imaginaria < 0){
            printf("%f \n", t->imaginaria);
        }
        t = t->sig;
    }
};