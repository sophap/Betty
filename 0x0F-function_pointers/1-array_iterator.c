#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * of each elememt of an array
 * @array: array to be printed
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t u;

	if (array != NULL && action != NULL)
		for (u = 0; u < size; u++)
			action(array[u]);
}
