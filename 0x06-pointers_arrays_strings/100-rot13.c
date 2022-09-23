#include "main.h"
/**
 * rot13 - encodes string
 * @s: string to be encoded
 * Return: Always 0
 */
char *rot13(char *s)
{
	int a;
	int b;
	char y[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char z[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (y[b] == *(s + a))
			{
				*(s + a) = z[b];
				break;
			}
		}
	}
return (s);
}
