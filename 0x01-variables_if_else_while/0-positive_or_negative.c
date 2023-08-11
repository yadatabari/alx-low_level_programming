#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	int n;
	/* from source file*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else if (n < 0)
	{
		/*output is zero*/
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
