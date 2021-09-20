#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the '\0'
 * to the buffer pointed to by dest
 * *@dest: pointer to the variable which stores the copied string
 * *@src: pointer to the string to be copied
 * Return: the pointe to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
