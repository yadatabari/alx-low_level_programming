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
	printf("Size of a int: %zu byte(s)\n", sizeof(b));
	printf("Size of a float: %zu byte(s)\n", sizeof(c));
	printf("Size of a long init: %u byte(s)\n", sizeof(d));
	printf("Size of a long long init: %u byte(s)\n", sizeof(e));
	return (0);
}
