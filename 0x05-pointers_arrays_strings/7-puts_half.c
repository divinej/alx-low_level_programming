#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * *@str: pointer to the string
 */
void puts_half(char *str)
{
	int i, j, len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		j = len / 2;
		for (i = j; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		j = (len - 1) / 2;
		for (i = j + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
