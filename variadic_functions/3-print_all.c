#include <stdio.h>
#include <stdarg.h>
/**
* print_char - Prints a character.
* @args: A va_list containing the character to print.
*/
void print_char(va_list arg)
{ printf("%c", va_arg(arg, int)); }
void print_int(va_list arg)
{ printf("%d", va_arg(arg, int)); }
void print_float(va_list arg)
{ printf("%f", va_arg(arg, double)); }
void print_string(va_list arg)
{ char *string = va_arg(arg, char *);
	if (!string)
	string = "(nil)";
	printf("%s", string); }

void print_all(const char * const format, ...)
{	va_list args;
	int i = 0, j;
	char *separation = "";
	void (*funcs[])(va_list) = {print_char, print_int, print_float, print_string};
	char *types = "cifs";

	va_start(args, format);
	while (format && format[i])
	{ j = 0;
		while (types[j])
	{
		if (format[i] == types[j])
		{
		printf("%s", separation);
		funcs[j](args);
		separation = ", ";
		}
		j++;
	}
	i++;
	}
	printf("\n");
va_end(args);
}
