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
	printf("Size of a char: %zu", sizeof(chartype));
	printf("Size of a int: %zu", sizeof(inttype));
	printf("Size of a float: %zu", sizeof(floattype));
	printf("Size of a long init: %lu", sizeof(longinttype));
	printf("Size of a long long init: %lu", sizeof(longlongtype));
	return (0);
}
