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
	int n, m;
	/* from source file*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	} else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, m);
	} else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is and is less than 6 and not 0", n, m);
	}
	printf("\n");
	return (0);
}
