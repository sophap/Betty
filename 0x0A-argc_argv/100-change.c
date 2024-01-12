#include "main.h"

/**
 * main - prints the minimun number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int cents, count, numCoins, a;
	int coinValues[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	numCoins = sizeof(coinValues) / sizeof(coinValues[0]);
	count = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < numCoins; a++)
	{
		while (cents >= coinValues[a])
		{
			cents -= coinValues[a];
			count++;
		}
	}
	printf("%d\n", count);

	return (0);
}
