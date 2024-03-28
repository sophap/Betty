#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @i: integer to be checked by _abs
 *
 * Return: Always 0
 */
int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
