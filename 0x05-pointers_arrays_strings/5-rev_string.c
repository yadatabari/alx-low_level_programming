#include "main.h"
/**
 * rev_string - function that reverse the string
 *@s: parameter
 *Return: void
 *
 *
 */
void rev_string(char *s)
{
char rev = s[0];
int n = 0;
int m;

while (s[n] != '\0')
{
	n++;
}
for (m = 0; m < n; m++)
{
	n--;
	rev =  s[m];
	s[m] = s[n];
	s[n] = rev;
}
}
