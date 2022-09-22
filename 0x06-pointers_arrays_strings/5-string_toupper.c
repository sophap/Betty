#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int h = 0;

	while (str[h] != '\0')
	{
		if (str[h] >= 'a' && str[h] <= 'z')
		{
			str[h] = str[h] - 32;
		}
			h++;
	}
return (str);
}
