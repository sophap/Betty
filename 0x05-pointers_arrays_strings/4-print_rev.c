#include "main.h"

/**
 * print_rev - print a string in reverse followed by a newline
 * @s: string to be printed in reverse
 * Return: Always 0
 */
void print_rev(char *s)
{
	char *c;
	int i;

	c = s;

	for (i = 0; c[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		_putchar(c[i]);

	_putchar('\n');
}
