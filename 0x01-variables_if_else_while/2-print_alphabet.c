#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	char alphabet = 'a';
	/*loop statement that will check the condition*/
	while (alphabet <= 'z')
	{
		printf("%c", alphabet);
		alphabet++;
	}
	printf("\n");
	return (0);
}
