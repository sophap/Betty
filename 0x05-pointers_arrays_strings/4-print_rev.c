#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string in reverse followed by a newline
 * @s: string to be printed in reverse
 * Return: Always 0
 */
void print_rev(char *s)
{
	int l;

	char *c;

	l = strlen(s);

	c = s;

	while (*c = '\0')
		printf("%s\n", *c);
		*c--;
}
