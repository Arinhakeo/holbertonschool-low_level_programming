#include "function_pointers.h"
/**
* print_name -Executes a function given as a parameter
* @name: String to be printed
* @f: Pointer to a function that prints a string
*
* This function executes the function pointed to by @f on the string @name.
* If either @name or @f is NULL, the function does nothing.
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
}
