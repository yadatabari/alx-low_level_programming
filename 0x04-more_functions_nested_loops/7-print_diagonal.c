#include "main.h"
/**
 * print_diagonal - will print diagonal
 *@n: a parameter
 *Return: void
 */
void print_diagonal(int n)
{
	int i, j;
	/*for loop will check the  condition*/
	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
else
{
	_putchar('\n');
}
}
