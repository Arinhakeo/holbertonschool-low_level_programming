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
/* Convert to uppercase by subtracting 'a' and adding 'A' */
                *str = *str - 'a' + 'A';
                maj = 0;  /*Next characters are not the beginning of words*/
            }
        }
        else if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
                *str == ';' || *str == '.' || *str == '!' || *str == '?' ||
                *str == '"' || *str == '(' || *str == ')' || *str == '{' ||
                *str == '}')
        {
        maj = 1; /*Next letter after these characters should be capitalized*/
        }
        else
        {
            maj = 0; /*Continue with lowercase letters*/
        }
        str++;
    }
    return (ptr);
}