#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append from
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *str1;
	char *str2;

	str1 = &dest;
	str2 = &src;

	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		++str1;
		a++;
	}
	while (src[b] != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
		b++;
	}
	printf("%s/n", dest);
return (0);
}
