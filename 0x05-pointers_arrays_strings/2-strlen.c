#include "main.h"

/**
 * _strlen - returns the length of a stringg
 * *@s: string which the lenght will be computed
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
