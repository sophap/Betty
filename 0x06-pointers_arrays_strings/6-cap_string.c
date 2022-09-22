#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word of a string
 * @str: string
 * Return: Always 0
 */
char *cap_string(char *str)
{
	int h;
	int b;
	char wsp[] = ".,;!?(){}\t\n\" ";

	for (h = 0; str[h] != '\0'; h++)
	{
		if (h == 0)
		{
			if (str[h] >= 'a' && str[h] <= 'z')
			{
				str[h] = str[h] - 32;
			}
		}
		for (b = 0; wsp[b] != '\0'; b++)
		{
			if (str[h] == wsp[b])
			{
				++h;
				if (str[h] >= 'a' && str[h] <= 'z')
				{
					str[h] = str[h] - 32;
				}
			}
		}
	}
	return (str);
}
