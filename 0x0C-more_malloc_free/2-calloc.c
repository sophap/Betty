#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: number of elements in an array
 * @size: bytes of each element
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	ptr = malloc(nmemb * size);

	return (ptr);
}
