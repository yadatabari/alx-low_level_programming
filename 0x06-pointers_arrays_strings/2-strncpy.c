#include "main.h"
#include <string.h>
/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 *
 *@dest: the buffer storing string copy.
 *@src: the source string.
 *@n: the maximum amount of byte to copied from src.
 *Return: A pointer to the resulting string de
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

