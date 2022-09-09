#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase using putchar only
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 'a'; i <= 'z'; i++);
	{
		i = tolower(i);
		putchar(i);
	}
return (0);
}
