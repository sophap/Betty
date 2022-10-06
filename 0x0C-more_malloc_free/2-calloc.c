#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: number of elements in an array
 * @size: bytes of each element
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	k = 0;

	while (k < nmemb * size)
	{
		ptr[k] = 0;
		k++;
	}
	return (ptr);
}
