#include "main.h"
/**
 *print_rev - function that print the reverse string
 *@s: parameter
 *Return: void
 *
 */
void print_rev(char *s)
{
	int me = 0;
	int x;

	while (*s != '\0')
	{
		me++;
		s++;
	}
	s--;
	for (x = me; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
			_putchar('\n');
}
