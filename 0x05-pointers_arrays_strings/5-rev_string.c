#include "main.h"

/**
 * rev_string - reverses a string
 * *@s: string to be reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	char c = s[0];

	while (s[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
	{
		j--;
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
