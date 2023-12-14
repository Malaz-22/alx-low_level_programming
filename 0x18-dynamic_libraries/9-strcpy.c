#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @src: point to char
 * @dest: point to char
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

