#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string to be copied into
 * @src: string to be copied from
 * @n: number of characters to be copied from src
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	for (f = 0; f < n && src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}
	for (; f < n; f++)
	{
		dest[f] = '\0';
	}

return (dest);
}
