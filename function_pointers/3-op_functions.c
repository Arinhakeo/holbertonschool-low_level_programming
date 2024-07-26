#include "3-calc.h"

/* Fonction pour additionner deux nombres */
int op_add(int a, int b)
{
    return (a + b);
}

/* Fonction pour soustraire deux nombres */
int op_sub(int a, int b)
{
    return (a - b);
}

/* Fonction pour multiplier deux nombres */
int op_mul(int a, int b)
{
    return (a * b);
}

/* Fonction pour diviser deux nombres */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/* Fonction pour calculer le modulo de deux nombres */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a % b);
}