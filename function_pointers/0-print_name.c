#include <stddef.h>
#include "function_pointers.h"
/**
* print_name - prints a name using a provided function
* @name: name of the person
* @f: function pointer that takes a char pointer and returns void
*
* Description: This function prints a name by calling a function
* pointed to by @f, passing the @name as an argument.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
