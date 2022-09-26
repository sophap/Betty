#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of lines to be filled starting from s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
return (s);
}
