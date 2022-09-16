#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	long int z;
	z = 612852475143;
	long int div = 2, ans = 0, maxFact;

	while(z != 0)
	{
		if(z % div != 0)
			div = div + 1;

		else
		{
			maxFact = z;
			z = z / div;
			if(z == 1)
			{
				printf("%d\n",maxFact);
				ans = 1;
				break;
			}
		}
	}
return (0);
}
