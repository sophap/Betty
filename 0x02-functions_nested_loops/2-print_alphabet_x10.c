#include "main.h"

/**
 * print_alphabet_x10 - Enty point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int c = 'a';

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			 _putchar(c);
		}
		_putchar('\n');
	}
}
