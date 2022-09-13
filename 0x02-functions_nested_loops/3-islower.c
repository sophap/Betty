#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int r1 = 'H';
	int r2 = 'o';
	int r3 = 108;

	if (islower(r1))
	{
	_putchar('1');
	} else {
	_putchar('0');
	}
	if (islower(r2))
	{
	_putchar('1');
	}
	else
	{
	_putchar('0');
	}
	if (islower(r3))
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
