#include <stdio.h>

/**
 * main - Prints all the  numbers of base 16 in lowercase
 * followed by a new line using putchar only
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	char c = 'a';

	while (i <= '10')
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

return (0);
}
