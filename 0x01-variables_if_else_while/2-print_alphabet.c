#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase using putchar only
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for(int x = 'a'; x <= 'z'; x++)
	{
		int lower_x = tolower(x);
		putchar(lower_x);
	}
return (0);
}
