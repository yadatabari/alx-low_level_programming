#include <stdio.h>
/**
 * main -entry point
 * Return: always(0)
 */
int main(void)
{
	int i, j;
	/*For loop will check the condition*/
	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
		if (i < 8 || j < 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
