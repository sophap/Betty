#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *h = (char*) &g;

	if (*h)
		return (1);
	else
		return(0);
}
