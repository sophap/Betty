#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**i
 * main - adds up all the arguments excluding non-digits
 * @argc: number of arguments
 * @argv; array of arguments
 * Return: Alway 0
 */
int main(int argc, char *argv[])
{
	int v = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argv[v] >= 0)
	{
		sum += atoi(argv[v]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
