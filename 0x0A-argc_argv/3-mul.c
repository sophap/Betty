#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiples the 2 arguments passed in
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j;
	int x;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = atoi(argv[1]);
		x = atoi(argv[2]);
		mult = j * x;
		printf("%d\n", mult);
	}
	return (0);
}
