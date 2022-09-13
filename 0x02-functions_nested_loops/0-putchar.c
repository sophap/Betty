#include "main.h"

/**
 * main - Prints _putchar followed by a newline
 *
 * Returns: Always 0 (Success)
 */
int _putchar(char c);

int main(void)
{
	char letter[] = "_putchar\n";
	int c = 0;

	while (c < 8)
	{
		_putchar(letter[c]);
		c++;
	}
return (0);
}
