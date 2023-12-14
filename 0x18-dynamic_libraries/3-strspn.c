#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment
 * @accept: will accept bytes from it
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, f;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (k);
		}
	}
	return (0);
}
