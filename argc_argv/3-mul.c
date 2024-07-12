#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplie deux nombres passés en arguments
* @argc: le nombre d'arguments
* @argv: un tableau des arguments
*
* Return: 0 en cas de succès, 1 en cas d'erreur
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
