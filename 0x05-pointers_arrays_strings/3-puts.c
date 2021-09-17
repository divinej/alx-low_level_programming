#include "main.h"

/**
 * _puts - Prints a string to standard output followed by new line
 * *@str: String to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
