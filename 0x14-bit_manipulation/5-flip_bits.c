#include "main.h"
#include <stdio.h>

/**
 * count_bits - count set bits
 * @a: number to be counted
 * Return: count
 */
unsigned int count_bits(unsigned long int a)
{
	unsigned int count = 0;

	while (a > 0)
	{
		count++;
		a &= (a - 1);
	}
	return (count);
}
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;

	res = count_bits(n ^ m);
	return (res);
}
