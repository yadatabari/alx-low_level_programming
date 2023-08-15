#include "main.h"
/**
 * _abs - absolute value of integer
 * @c: The integer
 * Return: 0 or abs_val
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		/* absolute value of an integer*/
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
