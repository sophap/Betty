#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 * Return: Always 0
 */

void more_numbers(void)
{
	int h;

	int k;

	for (h = 0; h < 10; h++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
