#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be set
 * @index: index of the bit you want to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int res  = 1;

	if (sizeof(n) * 8 < index)
		return (-1);
	res <<= index;
	*n &= ~res;
	return (1);
}
