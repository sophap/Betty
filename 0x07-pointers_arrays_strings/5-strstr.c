#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be checked for
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int b = 0;

	while (*haystack)
	{
		for (b = 0; needle[b]; b++)
		{
			if (*haystack == needle[0])
			{
				return (haystack);
			}
		}
		haystack++;
	}
return (0);
}
