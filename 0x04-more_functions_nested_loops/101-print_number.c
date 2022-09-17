#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 * Return: Always 0
 */

void print_number(int n)
{
	int t;
	int v;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	t = 1;
	v = 1;
	while (v)
	{
		if (n / (t * 10) > 0)
			t *= 10;
		else
		v = 0;
	}
	while (n >= 0)
	{
		if (t == 1)
		{
			_putchar((n % 10) + '0');
			n = -1;
		}
		else
		{
			_putchar((n / t % 10) + '0');
			t /= 10;
		}
	}
}
