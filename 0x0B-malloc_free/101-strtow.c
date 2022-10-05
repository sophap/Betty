#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_len - counts the length of a string
 * @f: string to be counted
 * Return: length of string
 */
int _str_len(char *f)
{
	int m = 0;

	for (m = 0; f[m] != '\0'; m++)
		;
	return (m);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: Always 0
 */
char **strtow(char *str)
{
	char **ptr;
	int n, o, p, q, m = 0, r = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	m = _str_len(str);
	if (m == 1)
		printf("Failed\n");
	ptr = malloc(m * sizeof(char));
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
