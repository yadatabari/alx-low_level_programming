#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;
	/*For loop will check the condition*/
	i = 0;
	while (i < 10)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
