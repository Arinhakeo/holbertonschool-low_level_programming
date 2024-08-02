#include <stddef.h>
#include "main.h"

/*
* convert unsigned int to resultat 0
* @binary file
* Description: Converts a binary number string to an unsigned integer.
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
