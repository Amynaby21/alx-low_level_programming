#include "main.h"
#include <string.h>

int is_palindrome_recursive(char *s);
/**
 *is_palindrome_recursive - Checks if a string is a palindrome
 *
 *@s: The string to check
 *
 *Return: 1 if palindrome, 0 if not
 */

int is_palindrome_recursive(char *s)
{
	static int i;
	int c = 0;
	int len = strlen(s);

	if (i < len / 2)
	{
		if (s[i] == s[len - i - 1])
		c++;
		i++;
		is_palindrome_recursive(s);
	}
	else
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
	return (0);
}

/**
 *is_palindrome - Checks if a string is a palindrome
 *
 *@s: The string to check
 *
 *Return: 1 if palindrome or 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_palindrome_recursive(s - 1));
}
