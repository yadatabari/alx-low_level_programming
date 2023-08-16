#include "main.h"
/**
 * times_table - print the time table
 * Return: void
 */
void times_table(void)
{
	int i, j, z, y, v;
	/*For loop will check the condition*/
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			z = i * j;
			if (z > 9)
			{
				y = z % 10;
		 v = (z - y) / 10;
		 _putchar(44);
		 _putchar(32);
		 _putchar(v + '0');
		 _putchar(y + '0');
			}
	else
			{
	if (j != 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
	}
	_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
