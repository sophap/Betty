#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a newline
 * Return: Always 0
 */

void print_numbers(void)
{
	int f = '0';

	while (f <= '9')
	{
		_putchar(f);
		f++;
	}
	_putchar('\n');
}
