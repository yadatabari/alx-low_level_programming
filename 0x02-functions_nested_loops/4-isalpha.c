#include "main.h"
/**
 * _isalpha - Checks the alphabet
 * @c: The character to be checked
 * Return: (1) or (0)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
return (0);
}
