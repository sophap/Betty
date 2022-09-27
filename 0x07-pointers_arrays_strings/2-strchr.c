#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string to be checked
 * @c: character to be searchd for
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	char *p = s;
	int a = 0;

	while (*s != c)
	{
		s++;
		a++;
	}
	if (*s == c)
	{
		return (p + a);
	}
	else
	return (0);
}
