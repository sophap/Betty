#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: character to pass to _islower function
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int r;

	r = _islower(c);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	_islower('o');
	return (0);
}
