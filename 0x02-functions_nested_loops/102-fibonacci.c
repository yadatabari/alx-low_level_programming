#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	int a;
	unsigned long fib1 = 0, fib2 = 1, sum;
	/*For loop will check the condition*/
	for (a = 0; a < 50; a++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
