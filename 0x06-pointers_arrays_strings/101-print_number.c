#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int o = n;

	if (n < 0)
	{
		_putchar('-');
		o = -o;
	}
	if ((o / 10) > 0)
	{
		print_number(o / 10);
	}
	_putchar((o % 10) + '0');
}
