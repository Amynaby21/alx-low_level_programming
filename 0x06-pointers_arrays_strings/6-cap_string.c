#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 *@str: The string
 *Return: The resulting string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	int separator[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 41, 40, 123, 125};

	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separator[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
					break;
				}
			}
		}
	}
	return (str);
}
