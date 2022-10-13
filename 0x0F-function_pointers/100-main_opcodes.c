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

	for (g = 0; g < f - 1; g++)
		printf("%02hhx ", ptr[g]);
	printf("%02hhx\n", ptr[g]);
	return (0);
}
