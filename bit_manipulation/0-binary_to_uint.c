#include "main.h"
/*
* File: 0-binary_to_uint.c
* Author: Votre nom
* Date: Date
*
* Description: Converts a binary number string to an unsigned integer.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
result = result * 2 + (b[i] - '0');
}

return (result);
}
