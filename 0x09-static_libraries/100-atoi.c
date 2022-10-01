#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted to integer
 * Return: Always 0
 */
int _atoi(char *s)
{
	int d;

	s = "Converts a string to an integer";

	for (d = 0; s[d] != '\0'; d++)
	{
		printf("%s\n", s);
	}
	_putchar(10);
	return (0);
}
