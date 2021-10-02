#include "main.h"

/**
 * _strspn - Get the lenght of a prefix substring
 * @s: pointer to the main string segment
 * @accept: pointer the substring to compared with the string in s
 * Return: The lenght if accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != ' ')
		{
			if (accept[i] == s[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}

	return (k);
}
