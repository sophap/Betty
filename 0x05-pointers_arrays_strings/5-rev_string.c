#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	int l;
	int i;
	char *start;
	char *end;
	char temp;

	l = strlen(s);
	start = s;
	end = s;

	for (i = 0; i < l - 1; i++)
		end++;

	for (i = 0; i < l/2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
