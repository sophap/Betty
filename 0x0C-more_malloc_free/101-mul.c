#include "main.h"

/**
 * isNumeric - checks if a ctring consists of only digits
 * @str: string to be checked
 * Return: 0 if not and 1 if true
 */

int isNumeric(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * Return: void
 */

void multiply(char *num1, char *num2)
{
	int index, sum, mul, a, b, len1, len2;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);

	result = (int *)calloc(len1 + len2, sizeof(int));

	for (a = len1 - 1; a >= 0; a--)
	{
		for (b = len2 - 1; b >= 0; b--)
		{
			mul = (num1[a] - '0') * (num2[b] - '0');
			sum = mul + result[a + b + 1];
			result[a + b + 1] = sum % 10;
			result[a + b] += sum / 10;
		}
	}

	index = 0;
	while (index < len1 + len2 && result[index] == 0)
	{
		index++;
	}

	if (index == len1 + len2)
	{
		printf("0\n");
	}
	else
	{
		for (; index < len1 + len2; index++)
		{
			printf("%d", result[index]);
		}
		printf("\n");
	}

	free(result);
}

/**
 * main - checks command line arguments
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || !isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
