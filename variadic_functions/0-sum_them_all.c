#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - Returns the sum of all its parameters
* @n: The number of parameters
*
* Return: The sum of all parameters, or 0 if n is 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list	args;
	int i;
	int total = 0;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < (int)n; i++)
	{
	total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
