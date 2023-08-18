#include "main.h"
/**
 * print_line - print the coode
 * @n: The checked parameter
 *Return: void
 *
 *
 */
void print_line(int n)
{
	int a;
	/* if statement and  for loop will check the condition*/
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
