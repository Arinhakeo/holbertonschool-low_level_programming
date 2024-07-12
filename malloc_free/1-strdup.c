#include <stdlib.h>
/**
* _strdup - returns a pointer to a new string.
* @str: string to be duplicated
*
* Return: pointer to the duplicated string or NULL if memory allocation fails.
*/
char *_strdup(const char *str)
{
	char *dup;
	unsigned int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';

	return (dup);
}
