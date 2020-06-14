//Real constants
#define M_PI 3.14159265358979323846
#define M_EULER 2.71828182845904523536
#define M_G 6.67430E-11
#define M_K 8.9875517923E9
#define M_ELECTRON -1.60218E-19
#define M_VLIGHT 3E8

//Libraries
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Real data type
typedef struct real
{
    struct real *sig;
    char name[20];
    double value;
} real;

//New table of reals
real *create()
{
    return NULL;
}

//Inserts new real on the symbols table
void insert(real **pT, real *s)
{
    s->sig = (*pT);
    (*pT) = s;
}

//Search for a real variable given its ID
real *search(real *t, char name[20])
{
    while ((t != NULL) && (strcmp(name, t->name)))
        t = t->sig;
    return (t);
}

//Prints table of real variables
void printReal(real *t, int type)
{
    printf("Reals:\n");
    while (t != NULL)
    {
        switch (type)
        {
        case 0: //g
            printf("\t%s = %g\n", t->name, t->value);
            break;
        case 1: //f
            printf("\t%s = %f\n", t->name, t->value);
            break;
        }
        t = t->sig;
    }
}

//Nth prime
int nthPrime(int n)
{
    int i, k = 1, f = 2, counter = 0, prime = -1;
    while (f <= n || k <= n)
    {
        counter = 0;
        for (i = 1; i <= f; i++)
        {
            if (f % i == 0)
            {
                counter++;
            }
        }
        if (counter <= 2)
        {
            prime = f;
            k++;
        }
        f++;
    }
    return prime;
}

//Nth Fibonacci
int nthFibonacci(int n)
{
    return n < 2 ? n : nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

//Greatest common divisor
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

//Lowest common multiple
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

//Factorial
int factorial(int n)
{
    return n == 0 ? 1 : factorial(n - 1) * n;
}

//Prints a table with all constants given a file
void printConsts()
{
    char c;
    FILE *file;

#ifdef _WIN32
    file = fopen("csv\\constants.csv", "r");
#else
    file = fopen("csv/constants.csv", "r");
#endif

    if (file)
    {
        while ((c = fgetc(file)) != EOF)
            printf("%c", c);
        fclose(file);
    }
    else
    {
        printf("E: File (%s) doesn't exist [error code: f-001]\n", file);
    }
}