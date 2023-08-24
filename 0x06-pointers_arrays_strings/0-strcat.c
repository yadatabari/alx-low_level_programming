#include "main.h"
#include <string.h>
/**
 **_strcat - function that concatenate the strings
 *@dest: First parameter
 *@src: second parameter
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

