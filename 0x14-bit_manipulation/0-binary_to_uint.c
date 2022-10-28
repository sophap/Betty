#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an int
 * @b: string to be converted
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int l = 0;
	unsigned int k = 1;
	int dat;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (dat = len - 1; dat >= 0; dat--)
	{
		if (b[dat] != '0' && b[dat] != '1')
			return (0);
		if (b[dat] == '1')
		{
			l += k;
		}
		k *= 2;
	}
	return (l);
}
