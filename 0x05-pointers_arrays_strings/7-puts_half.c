#include "main.h"

/**
 * puts_half - prints half of a string followed by a newline
 * @str: string to be halved by function puts_half
 * Return: Always 0
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; *(str + n) != '\0'; n++)
		;
		n++;
	for (n /= 2; *(str + n) != '\0'; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
