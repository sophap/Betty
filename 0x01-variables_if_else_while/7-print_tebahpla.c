#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 * followed by a new line using putchar only
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v = 'z';

	while (v <= 'a')
	{
		putchar(v);
		v++;
	}
	putchar('\n');

return (0);
}
