#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: points to where the string will be copies
 * @src: points to the string to be copied
 * @n: number of bytes
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; n > 0 && j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (j = 0; j <= n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
