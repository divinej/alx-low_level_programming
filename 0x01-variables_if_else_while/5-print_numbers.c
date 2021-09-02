#include <stdio.h>
/**
 * main - Entry point
 * prints all single digits in base 10 starting from 0,
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
