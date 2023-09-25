#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area (dest)
 * @src: memory area (source)
 * @n: bytes will copied from memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}

	return (dest);
}
