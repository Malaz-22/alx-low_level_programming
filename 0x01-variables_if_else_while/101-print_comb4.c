#include <stdio.h>

/**
 * main - entry point
 * Return: 0 to be correct
 */
int main(void)
{
	int n, m, l;

	for (n = 0; n <= 9; n++)
	for (m = 0; m <= 9; m++)
	for (l = 0; l <= 9; l++)
	if ((n < m) && (m < l))
	{
		putchar(n + '0');
		putchar(m + '0');
		putchar(l + '0');
	}
	if (!((n == 7) || (m == 8) || (l == 9)))
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
