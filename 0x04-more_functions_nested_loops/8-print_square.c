#include "main.h"

/**
 * print_square - prints a square, followed by a newlin
 * @size: character to print the size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	int m;
	int n;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
