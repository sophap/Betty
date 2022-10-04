#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int m;
	int n;
	int v;

	for (m = 0; s1[m] != '\0'; m++)
		;
	for (n = 0; s2[n] != '\0'; n++)
		;
	v = m + n;
	str = malloc(v * sizeof(*str) + 1);

	if (str == NULL)
		return (NULL);

	for (m = 0; s1[m] != '\0'; m++)
		*(str + m) = s1[m];

	for (n = 0; s2[n] != '\0'; n++)
	{
		*(str + m) = s2[n];
		m++;
	}
	*(str + m) = '\0';
	return (str);
}
