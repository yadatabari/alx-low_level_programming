#include "main.h"
/**
 * *_strcpy - function that copies a string
 *@dest: the fist parameter
 *@src: the second parameter
 *Return: result
 */
char *_strcpy(char *dest, char *src)
{
	int z = 0;

	while (src[z])
	{
		dest[z] = src[z];
		z++;
	}
	dest[z] = '\0';
	return (dest);
}
