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
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (k < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return (0);
}
