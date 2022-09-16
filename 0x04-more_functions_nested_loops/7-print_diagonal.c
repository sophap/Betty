#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times character should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j <= i; j++)
			{
				if (j == i)
					_putchar('\\');

				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
