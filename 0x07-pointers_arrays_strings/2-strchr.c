#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string to be checked
 * @c: character to be searchd for
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	do	{
	if (*s == c)
	{
		break;
	}
	}	while (*s++);
	return (s);
}
