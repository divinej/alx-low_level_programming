#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 * @n: input number
 */

void print_number(int n)
{
	int res, temp, expo;

	expo = 1;
	/* check for negatives */
	if (n >= 0)
		res = n * -1;
	else
	{
		res = n;
		_putchar('-');
	}

	/* initialization of variable for exponent */
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
	}
	/* main */
	while (expo >= 1)
	{
		_putchar(((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
}
