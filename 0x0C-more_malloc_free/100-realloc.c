#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size of the allocated space
 * @new_size: new size of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		min_size = (old_size < new_size) ? old_size : new_size;
		memcpy(new_ptr, ptr, min_size);
		free(ptr);
	}
	return (new_ptr);
}
