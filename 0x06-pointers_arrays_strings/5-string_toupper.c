#include "main.h"
#include <ctype.h>
/**
 *string_toupper - function that change lower case to upper
 *@s: parameter
 *Return: void
 */
char *string_toupper(char *s)
{
	int i = 0;


	while (s[i] != '\0')
	{
		s[i] = toupper(s[i]);
		i++;
	}
	return (s);
}

