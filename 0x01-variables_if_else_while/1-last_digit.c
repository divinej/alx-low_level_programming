#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Description - Get the last digit of a number
 * prints the number and the type of number
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m;

	m = n % 10;
	if (m > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}