#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	char n;
	/*for loop statement will check the condition*/
	for (n = 'a' ; n <= 'z' ; n++)
	if (n != 'q' && n != 'e')
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
