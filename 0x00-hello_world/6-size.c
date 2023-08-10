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
	printf("Size of a %zu:", sizeof(chartype));
	printf("Size of a %zu:", sizeof(inttype));
	printf("Size of a %zu:", sizeof(floattype));
	printf("Size of a %ld:", sizeof(longinttype));
	printf("Size of a %lu:", sizeof(longlongtype));
	return (0);
}
