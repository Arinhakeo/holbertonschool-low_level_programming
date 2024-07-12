#include "main.h"
/**
* _strncpy - Copies up to n characters from the string pointed to by src
*            to the buffer pointed to by dest.
* @dest: The destination buffer where the content is to be copied.
* @src: The source string from which to copy the characters.
* @n: The maximum number of characters to be copied from src.
*
* Return: A pointer to the destination string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
