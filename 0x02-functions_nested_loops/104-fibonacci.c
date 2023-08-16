#include <stdio.h>
/**
 * main - entry point
 * Return: always(0)
 */
int main(void)
{
	unsigned long int i, bef = 1, aft = 2, l = 1000000000, bef1, bef2, aft1, aft2;
	/*fibonacci function*/
	printf("%lu", bef);
	for (i = 1; i < 91; i++)
	      {
			printf(", %lu", aft);
			aft += bef;
			bef = aft - bef;
		}
		bef1 = (bef / 1);
		bef2 = (bef % 1);
		aft1 = (aft / 1);
		aft2 = (aft % 1);
		for (i = 92 ; i < 99 ; ++i)
		{
			printf(", %lu", aft + (aft2 / 1));
			printf("%lu", aft2 % 1);
			aft1 = aft1 + bef1;
			bef1 = aft1 - bef1;
			aft2 = aft2 + bef2;
			bef2 = aft2 - bef2;
		}
		printf("\n");
		return (0);
}
