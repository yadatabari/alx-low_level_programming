#include "main.h"
/**
 *_isdigit - check the digit
 *@c: the checked integer
 *Return: (0) or (1)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
