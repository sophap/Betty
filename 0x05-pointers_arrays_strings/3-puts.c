#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: string to be printed out
 * Return: Always 0
 */
void _puts(char *str)
{
	char *k;

	k = str;

	while (*k != '\0')
	{
		_putchar(*k);
		*k++;
	}
	_putchar('\n');
}
