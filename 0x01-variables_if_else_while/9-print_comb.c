#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * searated by comma and space followed by new line using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');

return (0);
}
