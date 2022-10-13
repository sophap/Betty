#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int g;

	va_start(valist, n);

	for (g = 0; g < n; g++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && g < n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(valist);
}
