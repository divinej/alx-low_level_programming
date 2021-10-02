#include <string.h>
#include "main.h"

/**
 * _strpbrk - searches s for the first occurence of accept
 * @s: pointer to the string to be searched
 * @accept: pointer to the character to be matched
 * Return: pointer to the byte in s that matches one of the bytes in accepts
 * Or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return ('\0');
}
