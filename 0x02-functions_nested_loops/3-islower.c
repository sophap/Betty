#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int c1 = 'H';
	int c2 = 'o';
	int c3 = 108;

	if (islower(c1))
	{
	_putchar('1');
	} else {
	_putchar('0');
	}
	if (islower(c2))
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}
	if (islower(c3))
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}
	_putchar('\n');

	return (0);
}
