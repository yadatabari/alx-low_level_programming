#include "main.h"
#include <string.h>
/**
 **_strncat - function that concatenate strings
 *@dest - first parameter
 *@src: second parameter
 *@n: third parameter
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
