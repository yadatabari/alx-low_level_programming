#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 *cap_string - capitalize the words
 *@s: parameter
 *
 *Return: a pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	/*while will check the condition*/
	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (s[i - 1] == ' ' ||
				s[i - 1] == '\t' ||
				s[i - 1] == '\n' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' || s[i - 1] == '}' || i == 0)
			s[i] -= 32;
		i++;
	}
	return (s);
}
