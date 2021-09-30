#include "main.h"

/**
 * _memcpy - Copies memoey area
 * @dest: pointet to the new memory area
 * @src: pointer to the memeory area to be copied
 * @n: number of bytes to be copied
 * Return: dest, pointer the new memory area after copying
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
