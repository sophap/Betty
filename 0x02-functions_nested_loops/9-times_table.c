#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: Always 0
 */
void times_table(void)
{
	int tableSize = 9;
	int a;
	int i = 0;
	int j = 1;

	for (i = 0; i <= tableSize; i++)
	{
		_putchar('0');
		for (j = 1; j <= tableSize; j++)
	{
			_putchar(',');
			_putchar(' ');

			a = i * j;

			if (a <= 9)
			{
			_putchar(' ');
			}
			else
			_putchar(((i * j) / 10) + '0');
			_putchar(((i * j) % 10) + '0');
	}
		_putchar('\n');
	}
}
