#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
/**
* main - Adds positive numbers passed as arguments.
* @argc: The number of arguments.
* @argv: An array of strings representing the arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char buffer[12]; /* Buffer to store string representation of sum */
	int len;

	if (argc == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				write(1, "Error\n", 6);
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	len = sprintf(buffer, "%d\n", sum);
	write(1, buffer, len);

	return (0);
}
