#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked
 * @index: index to check
 * Return: the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res = 0;

	if (sizeof(n) * 8 < index)
		return (-1);
	res = (n >> index) & 1;
	return (res);
}
