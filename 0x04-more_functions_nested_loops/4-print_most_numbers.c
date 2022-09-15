#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * excluding 2 and 4 and followed by a new line
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		if (h == '2' || h == '4')
		continue;
		_putchar(h);
	}
	_putchar('\n');
}
