#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @c: The string will be modified
  *
  * Return: char var
  */

char *string_toupper(char *c)
{
	int a = 0;

	while (c[a])
	{
		if (c[a] >= 97 && c[a] <= 122)
		{
			c[a] -= 32;
		}

		a++;
	}

	return (c);
}
