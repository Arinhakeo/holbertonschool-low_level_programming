#include "main.h"
/**
* _strcpy - Copies the string pointed to by src, including the terminating null byte (\0),
*           to the buffer pointed to by dest.
* @dest: Pointer to the destination buffer
* @src: Pointer to the source string
*
* Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';

	return start;
}
