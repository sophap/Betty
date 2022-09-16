#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of a number
 * followed by new line
 *
 * Return: Always 0
 */

int main(void)
{
	int prime;
	long int z;

	z = 612852475143;

	for (prime = 2; prime <= sqrt(z); prime++)
	{
		if (z % prime == 0)
		{
			z = z / prime;
			prime = 1;
		}
	}
	printf("%ld\n", z);
return (0);
}
