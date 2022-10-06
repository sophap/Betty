#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string to be concatenated
 * @s2: 2nd string to be concatenated
 * @n: number of bytes of s2 to be concatenated
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p, q;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (p = 0; s1[p] != '\0'; p++)
		;
	for (q = 0; s2[q] != '\0'; q++)
		;

	str = malloc(p + n + 1);

	if (str == NULL)
		return (NULL);

	for (p = 0; s1[p] != '\0'; p++)
	{
		str[p] = s1[p];
	}
	for (q = 0; q < n; q++)
	{
		str[p] = s2[q];
		p++;
	}
	str[p] = '\0';
	return (str);
}
