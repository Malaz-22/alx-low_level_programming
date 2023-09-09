#include <stdio.h>

/**
 * main - entry point
 * Return: 0 to be correct
 */
int main(void)
{
	int n, m, l, q;

	for (n = 0; n <= 9; n++)
	for (m = 0; m <= 9; m++)
	for (l = 0; l <= 9; l++)
	for (q = 0; q <= 9; q++)
	if ((n <= m) && (m <= l) && (l <= q))
	{
		putchar(n + '0');
		putchar(m + '0');
		putchar(' ');
		putchar(l + '0');
		putchar(q + '0');
		if (!((n == 9) && (m == 8) && (l == 9) && (q == 9)))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
