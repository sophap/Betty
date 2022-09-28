#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string length to be printed
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	static int i;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
