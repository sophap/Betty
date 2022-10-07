#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: starting point of array
 * @max: ending point of array
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int d, g = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (d = min; d <= max; d++)
	{
		ptr[g] = d;
		g++;
	}
	return (ptr);
}
