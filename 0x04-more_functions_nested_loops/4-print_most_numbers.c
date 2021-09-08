#include "main.h"

/**
 * print_most_numbers - prints the number, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (!(i == '2' || i == '4'))
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
