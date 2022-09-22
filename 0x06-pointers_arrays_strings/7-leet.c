#include "main.h"

/**
 * leet - Encodes a string into 1337
 * 
 * @str: The string to encode
 *Return: The resulting string
 */

char *leet(char *str)
{
	int i = 0, j;
	int lower[] = {'a', 'e', 'o', 't', 'l'};
	int upper[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j = 0; j <= 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = num[j];
			}
		}

		i++;
	}

	return (str);
}
