#include <ctype.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description - checks for lowercase characters
 * @c: functions accepts an argument c;
 * Return: Always 0
 */
int _islower(int c)
{
	int i = islower(c);

	if (i != 0)
	{
		return (1);
	}
	return (0);

}
