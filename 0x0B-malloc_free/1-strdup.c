#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *ptr;
	int m;
	int n;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		;

	ptr = malloc(str[m] + 1);

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < m; n++)
		*(ptr + n) = str[n];

	*(ptr + n) = '\0';
return (ptr);
}
