#include "main.h"

/**
 * main - Prints _putchar followed by a newline
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	char letter[] = "_putchar";
	int c = 0;

	while (c < 8)
	{
		_putchar(letter[c]);
		c++;
	}
	_putchar('\n');

return (0);
}
