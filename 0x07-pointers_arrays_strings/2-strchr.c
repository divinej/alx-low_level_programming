#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to to located
 * Return: a pointer to the firdt occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
