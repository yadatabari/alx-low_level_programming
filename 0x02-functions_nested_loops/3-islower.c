#include "main.h"
/**
 * _islower - Checks for lowercase alphabet
 *@c: The Parameter
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
