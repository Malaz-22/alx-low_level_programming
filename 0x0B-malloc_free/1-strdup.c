#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*str) * i);
	for (len = 0; len < i; len++)
	{
		ptr[len] = str[i];
	}
	return (ptr);
}
