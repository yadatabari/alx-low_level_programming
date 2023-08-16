#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print all natural number from0 to 98
 *@n: The number to start printing from
 *Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98 ; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", n);
	}
	}
	}
}
