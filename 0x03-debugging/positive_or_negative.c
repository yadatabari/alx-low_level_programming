#include "main.h"
/*
 *positive_or_negative - check wether the input is negative or positive
 *@i: The checked parameter value
 *Return: void
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
	       	printf("%d is positive\n", i);
        } else if (i == 0)
        {
                printf("%d is zero\n", i);
        } else if (i < 0)
	{
                printf("%d is negative\n", i);
        }
}	
