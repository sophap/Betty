#include "main.h"

/**
 * _memcpy -  copies memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes from src to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; dest[a] != '\0' && a < n; a++)
	{
		dest[a] = '\0';
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[b] = src[b];
	}
return (dest);
}
