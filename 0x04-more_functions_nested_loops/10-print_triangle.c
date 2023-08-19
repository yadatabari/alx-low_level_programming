#include "main.h"
/**
 *print_triangle - check the code
 *Return: void
 *
 */
void print_traingle(int size)
{
	int i, k, j;
	if (size <= 0)
	{
		_putchar('\n');
	}
	/*for loop will check the condition*/
	for (i = 0; i <= size; i++)
	{
		for (j = size -i; j > 1; j--)
		{
			_putchar(32);
		}
		for (k = 0; k <= i; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
