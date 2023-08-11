#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	char alphabet;
	/*loop statement that will check the condition*/
	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	/*the second while loop that will check the condition*/
	for (alphabet = 'A' ; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

