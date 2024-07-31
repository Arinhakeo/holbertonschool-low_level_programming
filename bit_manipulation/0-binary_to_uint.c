#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: a pointer to a string of 0s and 1s
 *
 * Return: the converted unsigned integer, or 0 if
 *         - b is NULL
 *         - b contains characters other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    // Check for NULL pointer
    if (b == NULL)
    {
        return 0;
    }

    // Iterate over each character in the string
    while (*b)
    {
        // Check if the current character is a '0' or '1'
        if (*b != '0' && *b != '1')
        {
            return 0; // Invalid character encountered
        }

        // Shift the result one bit to the left and add the current bit
        result = (result << 1) | (*b - '0'); // Bitwise OR for efficient addition
        b++;
    }

    return result;
}
