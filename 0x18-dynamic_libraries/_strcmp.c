#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int m;
	int n;
	int bigger;

	for (m = 0; s1[m] != '\0'; m++)

	for (n = 0; s2[n] != '\0'; n++)

	if (m < n)
		bigger = n;
	else if (m > n)
		bigger = m;
	else
		bigger = m;
	for (m = 0; m < bigger; m++)
	{
		if (s1[m] == s2[m])
		{

		}
		else
			return (s1[m] - s2[m]);
	}
	return (0);
}
