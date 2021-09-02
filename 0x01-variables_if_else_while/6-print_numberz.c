#include <stdio.h>
/**
 * main - Entry point
 * print all the single digit numbers of base 10
 * starting from 0
 * only putchar is allowed
 * Return: 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
