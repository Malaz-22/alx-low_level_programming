#include "main.h"

/**
 * *create_array - creates an array of chars, and
 *	initializes it with a specific char
 * @size: size of array
 * @c: specific char
 *
 * File: 0-create_array.c
 * Auth: Ahmed Zuhair
 *
 * Return: NULL if size = 0 or function fails-NUL else  pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
