#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: count of arguments
 * @av: vector of arguments
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c = 0;
	int d;
	int e;
	int f = 0;
	char *g;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			c++;
			c++;
		}
	}
	g = malloc(sizeof(*av) * c + 1);

	if (g == NULL)
		return (NULL);

	for (d = 0; d < ac; d++)
	{
		for (e = 0; av[d][e] != '\0'; e++)
		{
			g[f] = av[d][e];
			f++;
		}
		g[f++] = '\n';
	}
	g[f] = '\0';
return (g);
}
