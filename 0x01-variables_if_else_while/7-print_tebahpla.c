#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	char alphabet;
	/*For loop will check the condition*/
	for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
