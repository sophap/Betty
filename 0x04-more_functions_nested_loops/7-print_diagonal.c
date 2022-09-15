#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times character should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i = '0';
	int j;

	while (n > '0')
	{
		j = i;

		while (j > '0')
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
	if (i < '1')
	_putchar('\n');
}
