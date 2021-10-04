#include "main.h"

/**
 * _strstr - functtion that locates a substring
 * @haystack: pointer to the string
 * @needle: pointer to the substring to be located in haystack
 * Return: a pointer to the beginning of the located substring
 * Or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
