#include <stdio.h>
/**
 * main - Entry point
 * prints all possible different combinations of two digits
 * The two digits must be different
 * Numbers should be printed in ascending order, with two digits
 *  only use the putchar function
 *  use putchar five times maximum in your code
 *  use any variable of type char
 *  Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (j < 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
