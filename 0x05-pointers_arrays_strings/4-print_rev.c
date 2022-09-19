#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse followed by a newline
 * @s: string to be printed in reverse
 * Return: Always 0
 */
void print_rev(char *s)
{
	char *c;

	c = s;

	while (*c == '\0')
	{
		printf("%s", *c);
		*c--;
	}
	putchar('\n');
}
