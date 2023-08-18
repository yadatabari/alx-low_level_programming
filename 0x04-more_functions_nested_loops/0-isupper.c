#include "main.h"
/**
 * _isupper - check the uppercase alphabet
 *@c: the checked alphabet
 *Return: (0) or (1)
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
			return (1);
	}
		else
		{
			return (0);
		}
		_putchar('\n');
}
