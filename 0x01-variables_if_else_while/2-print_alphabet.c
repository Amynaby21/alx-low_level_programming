#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int y = tolower(x);
		putchar(y);
	}

	putchar('\n');
	return (0);
}
