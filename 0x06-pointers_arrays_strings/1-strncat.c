#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: parameter
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] < n)
	{
		j++;
		i++;
	}
}
