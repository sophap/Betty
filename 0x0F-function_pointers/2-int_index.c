#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: poin ter to the function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size <= 0)
	{
		return (-1);
	}
	if (size && cmp != NULL && array != NULL)
	{
		for (a = 0; a < size; a++)
		{
			b = cmp(array[a]);
			if (b != 0)
				return (a);
		}
	}
	return (-1);
}
