#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: the character to be checked by the function _isupper
 * Return: Always 0
 */

int _isupper(int c)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == c)
		return (1);
	}
	return (0);
}
