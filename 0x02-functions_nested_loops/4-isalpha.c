#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * Description - checks for alphabetic character
 * @c: functions accepts an argument c;
 * Return: Always 0
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i != 0)
		return (1);
	return (0);
}
