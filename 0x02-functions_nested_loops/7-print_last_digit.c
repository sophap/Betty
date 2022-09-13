#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number whose last digit is to be printed
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int lg;

	lg = (n % 10);

	if (lg < 0)
	{
		lg = (-1 * lg);
	}

	_putchar(lg + '0');
	return (lg);
}
