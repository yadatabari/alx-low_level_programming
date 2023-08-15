#include "main.h"
/**
 * print_last_digit - Display the last digit of integer
 * @c: The integer
 * Return: last_digit
 */
int print_last_digit(int c)
{
	int last_dig;
	/*last digit of integer*/
	last_dig = c % 10;
	if (last_dig < 0)
	{
		last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
