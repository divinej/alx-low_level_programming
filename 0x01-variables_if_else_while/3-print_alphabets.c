#include <stdio.h>
/**
 * main - Entry point
 * print the alphabets in lowercase, and then in uppercase,
 * followed by a new line
 * only putchar function is used
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
