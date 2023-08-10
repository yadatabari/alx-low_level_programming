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
	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long init: %zu byte(s)\n", sizeof(d));
	printf("Size of a long long init: %lu byte(s)\n", sizeof(e));
	printf("Size of a float: %lu byte(s)\n", sizeof(c));
	return (0);
}
