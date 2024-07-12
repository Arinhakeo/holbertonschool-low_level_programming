#include "main.h"
#include <unistd.h>

/**
* print_number - Prints an integer using write.
* @n: The integer to print.
*/
void print_number(int n)
{
	char buffer[12];
	int i = 0;
	int negative = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}

	if (n < 0)
	{
		negative = 1;
		n = -n;
	}

	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	if (negative)
	{
		buffer[i++] = '-';
	}

	while (i--)
	{
		write(1, &buffer[i], 1);
	}
}

/**
* print_diagsums - Prints the sum of the two diagonals of a square matrix.
* @a: The matrix represented as a 1D array.
* @size: The size of the matrix (number of rows/columns).
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	print_number(sum1);
	write(1, ", ", 2);
	print_number(sum2);
	write(1, "\n", 1);
}
