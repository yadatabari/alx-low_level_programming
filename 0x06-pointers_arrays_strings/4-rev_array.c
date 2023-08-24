#include "main.h"
/**
 * reverse_array - function that reverse array
 *@a: name of array
 *@n: number of element of the array
 *Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;


	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
