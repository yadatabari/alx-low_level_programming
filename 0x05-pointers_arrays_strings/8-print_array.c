#include "main.h"
#include <stdio.h>
/**
 *print_array - Function that print the element of array
 *@a:first parameter
 *@n: second parameter
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

