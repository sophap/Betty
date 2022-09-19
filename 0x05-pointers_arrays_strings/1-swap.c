#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
