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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		/* for loop will check the condition*/
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
