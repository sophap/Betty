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

	while (*(str + h))
	{
		if (*(str + h) >= 'a' && *(str + h) <= 'z')
		{
			if (h == 0)
				*(str + h) -= 'a' - 'A';
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (wsp[b] == *(str + h - 1))
						*(str + h) -= 'a' - 'A';
				}
			}
		}
		h++;
	}
return (str);
}
