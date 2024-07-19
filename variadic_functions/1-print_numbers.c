#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - Prints numbers followed by a separator and a new line
* @separator: The string to be printed between numbers
* @n: The number of integers passed to the function
*
* Description: This function prints a variable number of integers
* separated by a given string. If the separator is NULL, it is not printed.
* A new line is printed at the end of the function.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		int number = va_arg(args, int);

		printf("%d", number);

		if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
