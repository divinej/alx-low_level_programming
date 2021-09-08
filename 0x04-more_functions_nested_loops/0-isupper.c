#include <ctype.h>
#include "main.h"

/**
 * _isupper - Entry point
 * Description - function checks for uppercase character
 * @c: argument of the function
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	int i = isupper(c);

	if (i != 0)
	{
		return (1);
	}
	return (0);

}

