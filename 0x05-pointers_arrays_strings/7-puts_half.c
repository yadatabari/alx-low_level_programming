#include "main.h"
/**
 *puts_half - function that print half of the string
 *@str: parameter
 *Return: void
 *
 */
void puts_half(char *str)
{
	int a;
	int b;
	int me = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		me++;
	}
	b = (me / 2);
	if ((me % 2) == 1)
		b = ((me + 1) / 2);
	for (a = b; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

