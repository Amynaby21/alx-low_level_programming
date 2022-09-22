#include "main.h"

/**
 * rot13 - Encodes a string
 *
 *@str: The string to encode
 *
 * Return: The resulting string
 */

char *rot13(char *str)
{
	int i = 0, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
			}
		}
		i++;
	}
	return (str);
}
