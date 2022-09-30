#include "main.h"
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

	char dig[] = "0123456789";
	int sum = 0;

	if (argc == 1)
	{
		printf("0");
	}
	if (argv[v] != dig[v])
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum += atoi(argv[v]);
		printf("%d\n", sum);
	}
	return (0);
}
