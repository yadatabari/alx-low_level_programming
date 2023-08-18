#include "main.h"
/**
 *print_square - print the square
 * @size:  parameter
 * Return: void
 *
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;
		/*while loop will check the outside loop condition*/
		while (i < size)
		{
			int j;
			/*for loop will check the inside loop condition*/
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
