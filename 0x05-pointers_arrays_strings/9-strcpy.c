#include "main.h"
/**
 * *_strcpy - function that copies a string
 *@dest: the fist parameter
 *@src: the second parameter
 *Return: result
 */
char *_strcpy(char *dest, char *src)
{
	int z, y;

	while (*(src + z) != '\n')
	{
		z++;
	}
	for (; y < z; y++)
	{
		dest[y] = src[y];
	}
	dest[z] = '\n';
	return (dest);
}
