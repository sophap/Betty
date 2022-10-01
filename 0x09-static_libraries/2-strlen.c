#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer that checks the length of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
return (0);
}
