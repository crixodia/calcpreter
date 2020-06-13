const double VECTOR_SZ = 3 * sizeof(double);

typedef struct vector
{
    struct vector *sig;
    char name[20];
    double value[3];
} vector;

vector *createVector()
{
    return NULL;
};

void insertVector(vector **pT, vector *s)
{
    s->sig = (*pT);
    (*pT) = s;
};

vector *searchVector(vector *t, char _name[20])
{
    while ((t != NULL) && (strcmp(_name, t->name)))
        t = t->sig;
    return (t);
};

void printVector(vector *t, int type)
{
    printf("\n   []:\n");
    while (t != NULL)
    {
        switch (type)
        {
        case 0:
            printf("\t%s = [%g, %g, %g]\n", t->name, t->value[0], t->value[1], t->value[2]);
            break;
        case 1:
            printf("\t%s = [%f, %f, %f]\n", t->name, t->value[0], t->value[1], t->value[2]);
            break;
        }
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
void addVector(double *target, double *a, double *b)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        target[i] = a[i] + b[i];
    }
}

//Resta vector
void minusVector(double *target, double *a, double *b)
{    
    escalarVector(target, b, -1.0);
    addVector(target, a, target);
}

//Producto punto entre vectores
double dotProduct(double *a, double *b)
{
    double r = 0;
    int i;
    for (i = 0; i < 3; i++)
    {
        r += a[i] * b[i];
    }
    return r;
}

//Norma de un vector
double magnitude(double *a)
{
    return sqrt(productoInterno(a, a));
}

//Producto cruz o vectorial
void crossProduct(double *target, double *a, double *b)
{
    target[0] = a[1] * b[2] - a[2] * b[1];
    target[1] = a[2] * b[0] - a[0] * b[2];
    target[2] = a[0] * b[1] - a[1] * b[0];
}

//Distancia entre vectores
double distanciaVector(double *a, double *b)
{
    double temp[3];
    minusVector(temp, a, b);
    return magnitude(temp);
}

//Proyección de vectores
double projectionVector(double *target, double *a, double *b)
{
    double esc = dotProduct(a, b) / dotProduct(a, a);
    escalarVector(target, a, esc);
}

//Vector normal
double normalVector(double *target, double *a, double *b)
{
    proyeccionVector(target, a, b);
    minusVector(target, b, target);
}

//Vector unitario
double unitVector(double *target, double *a)
{
    escalarVector(target, a, 1 / norma(a));
}