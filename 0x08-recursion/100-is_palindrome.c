#include "main.h"

/**
 * is_palindrome_recursive - checks for palindrome
 * @s: string to be checked
 * @start: index to the first character
 * @end: index to the last character
 * Return: 1 if yes and 0 if no
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return is_palindrome_recursive(s, start + 1, end - 1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to string coming in
 * Return: 1 if yes and 0 if no
 */
int is_palindrome(char *s)
{
	int length;

	length = strlen(s);

	return is_palindrome_recursive(s, 0, length - 1);
}
