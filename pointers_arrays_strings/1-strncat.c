#include "main.h"
#include <stdio.h>
/**
* _strncat - Concatenates two strings
* @dest: The destination string
* @src: The source string to append to dest
* @n: The maximum number of bytes from src to append
*
* Return: Pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (start);
}
