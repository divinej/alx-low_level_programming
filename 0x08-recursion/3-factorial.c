#include "main.h"

/**
 * factorial -function that returns the fsctorial of a given number
 * @n: number to compute the factorial
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
