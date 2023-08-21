#include "main.h"
/**
 *_puts - function that print string
 *
 *@str: input pareameter
 *Return: void
 */
void _puts(char *str)
{
	while ( *str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

