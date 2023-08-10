#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	char chartype;
	int inttype;
	float floattype;
	long int longinttype;
	long long int longlongtype;

	/*
	 * sizeof evaluate the size of variable
	 */
	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of a int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of a float: %zu byte(s)\n", sizeof(floattype));
	printf("Size of a long init: %u byte(s)\n", sizeof(longinttype));
	printf("Size of a long long init: %u byte(s)\n", sizeof(longlongtype));
	return (0);
}
