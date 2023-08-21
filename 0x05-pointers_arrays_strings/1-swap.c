#include "main.h"
/**
 *swap_int - Function that swap the accepted parameter
 *@a: First parameter
 *@b: Second parameter
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
