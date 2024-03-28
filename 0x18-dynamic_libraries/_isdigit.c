#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked by the function _isdigit
 * Return: Always 0
 */

int _isdigit(int c)
{
	int g;

	for (g = '0'; g <= '9'; g++)
	{
		if (g == c)
		return (1);
	}
	return (0);
}
