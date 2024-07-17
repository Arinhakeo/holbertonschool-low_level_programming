#include "main.h"
/**
* main - check the code
*
* Description: This function tests the swap_int
*
* Return: Always 0 (Success).
*/
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
