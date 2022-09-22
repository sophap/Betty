#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: array with content to be reversed
 * @n: number of elements of the array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int g;

	for (g = 0; g < n / 2; g++)
	{
		x = a[g];
		a[g] = a[n - g - 1];
		a[n - g - 1] = x;
	}
}
