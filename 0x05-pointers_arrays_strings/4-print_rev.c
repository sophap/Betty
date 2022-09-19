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
	int i;
	char c;
	char *bgn_ptr;
	char *end_ptr;

	l = strlen(s);
	bgn_ptr = s;
	end_ptr = s;

	for (i = 0; i < l - 1; i++)
		end_ptr++;
	for (i = 0; i < l / 2; i++)
	{
		c = *end_ptr;
		*end_ptr = *bgn_ptr;
		*bgn_ptr = c;

		bgn_ptr++;
		end_ptr--;
		printf("%s\n",s);
	}
}
