#include "main.h"

/**
 * _memset - fills the first n bytes of the memory arrea
 * pointed to by s with a the constant byte b
 * *@s: pointer to memory area
 * @b: constant byte to be filled
 * @n: size of byte to be filled
 * Return: s pointer the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
