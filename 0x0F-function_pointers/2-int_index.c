#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: point to int array
 * size: size of array
 * @cmp: function to pointer return int
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
		}
	}
	return (-1);

}
