#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character followed by a new line
 * @str: string to be printed with function puts2
 * Return: Always o
 */
void puts2(char *str)
{
	char *t = str;
	int i;
	int l = strlen(str);

	for (i = 0; *t[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			printf("%c", *t[i]);
	}
	putchar('\n');
}
