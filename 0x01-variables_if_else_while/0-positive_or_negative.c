#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	int n;
	/*it takes input from keyboard*/
	printf("Enter a number\n");
	scanf("%d\n", &n);
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		/*output is zero*/
		printf("%d is zero", n);
	}
	return (0);
}
