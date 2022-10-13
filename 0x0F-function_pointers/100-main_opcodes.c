#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its opcodes
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int f, g;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	f = atoi(argv[1]);
	if (f < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	g = 0;

	if (f > 0)
	{
		while (g < (f - 1))
			printf("%02hhx ", ptr[g++]);
		printf("%hhx\n", ptr[g]);
	}
	return (0);
}
