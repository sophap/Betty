#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = '0';
	int n2 = '1';
	int n3 = '2';

	for (n1 = '0'; n1 <= '7'; n1++)
	{
		for (n2 = '1'; n2 <= '8'; n2++)
		{
			for (n3 = '2'; n3 <= '9'; n3++)
			{
				if ((n1 <n2) && (n2 < n3))
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);

					if (n1 == '7' && n2 == '8' && n3 == '9')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

return (0);
}
