#include "main.h"
#include <string.h>
/**
 * _strcmp - compare the strings
 *@s1: first parameter
 *@s2: second parameter
 *
 *Return: result
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
