#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string with the initial segment to be checked
 * @accept: string with characters to be checked for
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
