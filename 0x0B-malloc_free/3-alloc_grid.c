#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2
 *	dimensional array of integers
 * @width: width of array
 * @height: height of array
 * File: 3-alloc_grid.c
 * Auth: Zuhair Ahmed
 *
 * Return: returns a pointer to a 2 dimensional array
 *	NULL on failure
 *	If width or height is 0 or negative NULL
 */
int **alloc_grid(int width, int height)
{
	int he_i, wi_i;
	int **twoD;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (he_i = 0; he_i < height; he_i++)
	{
		twoD[he_i] = malloc(sizeof(int) * width);

		if (twoD[he_i] == NULL)
		{
			for (; he_i >= 0; he_i--)
				free(twoD[he_i]);

			free(twoD);
			return (NULL);
		}

	}

	for (he_i = 0; he_i < height; he_i++)
	{
		for (wi_i = 0; wi_i < width; wi_i++)
			twoD[he_i][wi_i] = 0;
	}

	return (twoD);
}
