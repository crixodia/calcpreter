typedef struct line
{
    struct line *sig;
    char name[20];
    double value[6];
} line;

line *createLine()
{
    return NULL;
};

void insertLine(line **pT, line *s)
{
    s->sig = (*pT);
    (*pT) = s;
};

line *searchLine(line *t, char _name[20])
{
    while ((t != NULL) && (strcmp(_name, t->name)))
        t = t->sig;
    return (t);
};

void printLine(line *t)
{
    while (t != NULL)
    {
        //printf("%s = [%g, %g, %g]\n", t->nombre, t->punto[0], t->punto[1], t->punto[2]);
        t = t->sig;
    }
};