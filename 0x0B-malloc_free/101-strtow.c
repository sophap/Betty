#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return: Always 0
 */
char **strtow(char *str)
{
	char **ptr;
	int m, n, o, p, q, r = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
		;
	ptr = malloc(m * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ptr[m - 1] = NULL;
	n = 0;
	while (str[n])
	{
		if (str[n] != ' ' && (n == 0 || str[n - 1] == ' '))
		{
			for (o = 1; str[n + o] != ' ' && str[n + o]; o++)
				;
			o++;
			ptr[r] = malloc(o * sizeof(char));
			o--;
			if (ptr[r] == NULL)
			{
				for (p = 0; p < r; p++)
					free(ptr[p]);
				free(ptr[m - 1]);
				free(ptr);
				return (NULL);
			}
			for (q = 0; q < o; q++)
				ptr[r][q] = str[n + q];
			ptr[r][q] = '\0';
			r++;
			n = n + o;
		}
		else
			n++;
	}
	return (ptr);
}
