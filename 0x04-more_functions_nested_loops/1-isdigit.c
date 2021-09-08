#include <ctype.h>
#include "main.h"

/**
 * _isdigit - cheks for a digit 0 through 9
 * @c: argument of the function
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	int i = isdigit(c);

	if (i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
