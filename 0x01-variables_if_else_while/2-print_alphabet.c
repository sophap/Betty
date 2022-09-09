#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase using putchar only
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;	
	}
	putchar('\n');

return (0);
}
