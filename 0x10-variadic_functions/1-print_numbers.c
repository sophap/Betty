#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int g;

	va_start(ap, n);

		for (g = 0; g < n; g++)
		{
			printf("%d", va_arg(ap, int));
			if (g != (n - 1) && separator != NULL)
				printf("%s ", separator);
		}
		putchar('\n');
	va_end(ap);
}
