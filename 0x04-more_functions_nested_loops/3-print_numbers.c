#include "main.h"
/**
 *print_numbers - printing numbers from 0 to 9
 *Return: void
 *
 */
void print_numbers(void)
{
	char i;
	/*For loop will check the condition*/
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
