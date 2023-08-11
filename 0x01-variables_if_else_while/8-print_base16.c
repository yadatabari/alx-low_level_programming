#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	char a;
	char b;
	/*for loop will check the condition*/
	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
	}
	for (b =  'a' ; b <= 'f' ; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
