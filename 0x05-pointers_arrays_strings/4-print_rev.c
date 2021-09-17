#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * *@s: String to be printed
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length = 0;
		i++;
	}

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
