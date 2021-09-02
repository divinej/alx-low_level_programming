#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints the alphabet in lowercase
 * using putchar
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	return (0);
}
