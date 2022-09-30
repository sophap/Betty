#include "main.h"
#include <stdio.h>

/**
 * main - accepts 2 arguments as input and prints out the name of the first argument
 * @argc: count of arguments
 * @argv: array of strings of argc
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
