#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
	char *ptr = str;
	int maj = 1;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (maj)
			{
				*str = *str - ' ';
				maj = 0;
			}
		}
		else if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
			*str == ';' || *str == '.' || *str == '!' || *str == '?' ||
			*str == '"' || *str == '(' || *str == ')' || *str == '{' ||
			*str == '}')
		{
			maj = 1;

		}
		str++;
	}
	return (ptr);
}
