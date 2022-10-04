#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a two dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int m;
	int n;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		ptr[m] = malloc(width * sizeof(**ptr));

		if (ptr[m] == NULL)
		{
			for (n--; n >= 0; n--)
			{
				free(ptr[m]);
			}
			free(ptr);
			return (NULL);
		}
		for (n = 0; n < height; n++)
			ptr[m][n] = 0;
	}
	if (ptr[m][n] == NULL)
	{
		free(ptr[m][n]);
		return (NULL);
	}
return (ptr);
}
