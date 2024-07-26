#include "3-calc.h"

/* Fonction principale */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*operation)(int, int);

    /* Vérifie le nombre d'arguments */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    /* Convertit les arguments en entiers */
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    /* Obtient la fonction d'opération correspondante */
    operation = get_op_func(argv[2]);

    /* Vérifie si l'opérateur est valide */
    if (operation == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    /* Effectue l'opération et affiche le résultat */
    result = operation(num1, num2);
    printf("%d\n", result);

    return (0);
}