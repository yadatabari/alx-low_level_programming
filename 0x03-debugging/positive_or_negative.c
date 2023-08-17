#include "main.h"
/*
 * Positive_or_negative() - function that print output
 * Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
