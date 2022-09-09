#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * without using any variable of type char, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int myNum = '0';

	while (myNum <= '9')
	{
		putchar(myNum);
		myNum++;
	}
	putchar('\n');

return (0);
}
