#include "main.h"

/**
 * print_last_digit - Entry point
 * Description - print the last digit of a number
 * @n: function accepts argument n
 * Return: The absolute value of the input
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = -1 * i;
	_putchar(i + '0');
	return (i);
}
