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
	if (n > 0)
	{
		int a;
		/* for loop will check the condition*/
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
