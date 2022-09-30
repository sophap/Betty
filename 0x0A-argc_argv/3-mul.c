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
	int mult = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
