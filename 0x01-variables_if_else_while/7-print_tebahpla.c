#include <stdio.h>
/**
 * main - Entry point
 * prints the lowercase alphabets in reverse
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);

}
