#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: int num which will updated
 */
void reset_to_98(int *n)
{
	int i;

	n = &i;
	i = *n;
	i = 98;
	*n = 98;
}
