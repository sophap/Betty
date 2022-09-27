#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string with characters to be checked for
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int b = 0;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
