#include "main.h"
/**
 *puts2 - function that print ever character
 *@str: parameter
 *Return: void
 *
 */
void puts2(char *str)
{
	int me = 0;
	int t = 0;
	char *n = str;
	int x;


	while (*n != '\0')
	{
		n++;
		me++;
	}
	t = me - 1;
	for (x = 0; x <= t; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}

