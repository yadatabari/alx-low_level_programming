#include "main.h"
/**
 * print_times_table - print the multiplication table
 * @n: the value that will checked
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;
	/* above 15 and below 0*/
	if (n > 15 && n <= 0)
	{
	for (i = 0 ; i <= n ; i++)
	{
	for (j = 0 ; j <= n ; j++)
	{
		k = j * i;
		if (j == 0)
		{
			_putchar(k + '0');
		} else if (k != 0 && k < 10)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			_putchar(32);
			_putchar(k + '0');
		} else if (k > 9 && k < 100)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		} else if (k >= 100)
		{
			_putchar(44);
			_putchar(32);
			_putchar(k / 10 + '0');
			_putchar((k / 10) % 10 + '0');
			_putchar(k % 10 + '0');
		}
	}
	_putchar('\n');
	}
	}}
