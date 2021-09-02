#include <stdio.h>
/**
 * main - Entry point
 * prints alphabets in lowercase excluding q and e
 * use only putchar function
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' &&  i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
