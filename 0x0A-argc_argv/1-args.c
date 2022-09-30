#include "main.h"
#include <stdio.h>

/**
 * main - takes in an argument and prints out the number of arguments passed in
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int g;

	if (argc == 1)
		printf("0\n");

	for (g = 1; g < argc; g++)
	{
		if (argv[g])
			printf("%d\n", argc - 1);
	}
	return (0);
}
