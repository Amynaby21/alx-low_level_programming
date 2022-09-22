#include "main.h"

/**
 * leet - Encodes a string into 1337
 * 
 * @s: The string to encode
 *Return: The resulting string
 */

char *leet(char *s)
{
	int i;
	int lower[] = {'a', 'e', 'o', 't', 'l'};
	int upper[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = 0; i < 5; i++)
		{
			if (s[i] == lower[i] && s[i] == upper[i])
			{
				s[i] = num[i];
				break;
			}
		}
	}
	return (s);
}
