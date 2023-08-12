#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	char a;
	int b;
	float c;
	long int d;
	long long int e;

	/*
	 * sizeof evaluate the size of variable
	 */
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long init: %d byte(s)\n", sizeof(d));
	printf("Size of a long long init: %d byte(s)\n", sizeof(e));
	printf("Size of a float: %d byte(s)", sizeof(c));
	printf("\n");
	return (0);
}
