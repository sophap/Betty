#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: Always 0
 */
char *leet(char *s)
{
	int q;

	for (q = 0; s[q] != '\0'; q++)
	{
		while (s[q] == 'a' || s[q] == 'A')
			s[q] = '4';
		while (s[q] == 'e' || s[q] == 'E')
			s[q] = '3';
		while (s[q] == 'o' || s[q] == 'O')
			s[q] = '0';
		while (s[q] == 't' || s[q] == 'T')
			s[q] = '7';
		while (s[q] == 'l' || s[q] == 'L')
			s[q] = '1';
	}
	return (s);
}
