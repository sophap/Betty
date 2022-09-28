#include "main.h"

/**
 * _pow_recursion - returns x raised to the power of y
 * @x: number to be raised to the power of y
 * @y: the power of which x will be raised to
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
