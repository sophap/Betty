#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except 'e' and 'q'
 * followed by a new line using putchar only
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c == 'e')
		{
			c++;
			continue;
		}
		if (c == 'q')
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');

return (0);
}
