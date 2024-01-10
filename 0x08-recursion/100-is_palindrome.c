#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string coming in
 * Return: 1 if yes and 0 if no
 */
int is_palindrome(char *s)
{
	int length;
	int a;
	int b;

	length = strlen(s);

	for (a = 0, b = length - 1; a < b; a++, b--)
	{
		if (s[a] != s[b])
		{
			return (0);
		}
	}
	return (1);
}
