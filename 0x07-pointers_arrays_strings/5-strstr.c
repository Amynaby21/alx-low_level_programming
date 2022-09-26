#include "main.h"
#include <string.h>

/**
 *_strstr - Locates a sustring
 *
 *@haystack: The string to be searched
 *@needle: The string to search in string haystack
 *
 *Return: needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int length1 = strlen(haystack);
	unsigned int length2 = strlen(needle);
	unsigned int i, j, res;

	for (i = 0; i < length1; i++)
	{
		if (haystack[i] == needle[0])
		{
			res = 0;
			for (j = 0; j < length2; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					res = 1;
					break;
				}
			}
			if (res == 0)
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
