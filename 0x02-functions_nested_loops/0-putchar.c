#include "main.h"

/**
 * main - Entry point
 *
 * description: Prints _putchar followed by a new line
 *
 * main returns a value of 0
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
