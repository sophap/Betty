#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the function print_line draws a line
 * Return: Always 0
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (n < 0 || n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
