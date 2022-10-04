#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of Char
 * and initializes it with a Char
 * @size: size of array space
 * @c: char to fill the array with
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *cr;

	if (size == 0)
		return (NULL);

	cr = malloc(size * sizeof(*cr));

	if (cr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		*(cr + k) = c;
return (cr);
}
