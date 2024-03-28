#include "main.h"

/**
 * *_strcpy - copies the string pointed by pointer src
 * to bufferpointed to by dest
 * @src: char type string
 * @dest: char type string
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; *(src + x) != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	*(dest + x) = '\0';

return (dest);
}
