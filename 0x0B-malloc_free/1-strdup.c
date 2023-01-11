#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memor
 *	which contains a copy of the string given as a parameter.
 * @str: string to be copy
 *
 * File: 1-strdup.c
 * Auth: Zuhair Ahmed
 *
 * Return: NULL if str = NUL
 *	NULL if insufficient memory was available
 *	pointer to the duplicated string on Success
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
