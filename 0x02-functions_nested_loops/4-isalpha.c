#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: character to be checked with the function _isalpha
 *
 * Return: Always 0
 */ 
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
