#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: character to pass to _islower function
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char r = 'a';

	for (r = 'a'; r <= 'z'; r++)
	{
		if (r == c)
	{
		return (1);
	};
	};
	
	return (0);
}
