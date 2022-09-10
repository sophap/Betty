#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = '0';
	int n2 = '0';

	for (; n1 <= '9'; n1++)
	{
		for (; n2 <= '9'; n2++)
		{
			putchar(n1);
			putchar(n2);

			if (n1 == '9' && n2 == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

return (0);
}
