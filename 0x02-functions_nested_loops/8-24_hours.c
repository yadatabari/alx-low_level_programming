#include "main.h"
/**
 *jack_bauer - print the 24 hour
 *Return: void
 */
void jack_bauer(void)
{
	int i, j, k;
	/*For loop will check the condition*/
	for (i = 0 ; i <= 59 ; i++)
	{
		for (j = 0 ; j <= 59 ; j++)
		{
			for (k = 0 ; k <= 23 ; k++)
			{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
}
