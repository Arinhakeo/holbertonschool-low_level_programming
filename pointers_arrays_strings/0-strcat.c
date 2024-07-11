#include <stdio.h>
#include "main.h"
/**
* _strcat - Concatenates two strings
* @dest: The destination string
* @src: The source string to append to dest
*
* Return: Pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
