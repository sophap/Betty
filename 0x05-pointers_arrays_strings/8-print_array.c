#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elements
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z != n - 1)
			printf("%d, ", a[z]);
		else
			printf("%d", a[z]);

	}
	putchar(10);
}
