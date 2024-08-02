#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: a pointer to a string of binary digits
 *
 * Return: the converted number, or 0 if there is an error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int resultat = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		resultat = resultat * 2 + (*b - '0');
		b++;
		}

	return (resultat);
}
