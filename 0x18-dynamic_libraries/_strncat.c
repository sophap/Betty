#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append from
 * @n: number of time src should be pointed
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int g;

	d = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	for (g = 0; g < n && src[g] != '\0'; g++)
		dest[d + g] = src[g];

	dest[d + g] = '\0';

return (dest);
}
