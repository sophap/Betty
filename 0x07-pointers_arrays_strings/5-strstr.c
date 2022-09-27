#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be checked for
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
	haystack = n + 1;
	}
return (0);
}
