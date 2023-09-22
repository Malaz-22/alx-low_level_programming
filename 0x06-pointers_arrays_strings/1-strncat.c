#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes (length)
 * Return: char "dest"
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
	}
	for (j = 0; j != '\0' && j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
