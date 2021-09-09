#include <stdio.h>
#include "main.h"

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */

void reverse_array(int *a, int n)
{
	int *p, i, aux, l;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (l = 0; l < i / 2; l++)
	{
		aux = a[l];
		a[l] = *p;
		*p = aux;
		p--;
	}
}
