#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	int a;
	/*For loop will check the condition*/
	for (a = 0 ; a < 10 ; a++)
	{
		if (a == 9)
			putchar(a + '0');
		else
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
