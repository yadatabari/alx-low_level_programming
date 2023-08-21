#include "main.h"
/**
 *_strlen - Function that return the length of sring
 *@s: paramete
 *Return: result
 *
 */
int _strlen(char *s)
{
	int me = 0;

	while(*s != '\0')
	{
		me++;
		s++;
	}
	return (me);
}
