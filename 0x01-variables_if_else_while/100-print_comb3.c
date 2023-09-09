#include <stdio.h>

/**
 * main - entry point
 * Return: 0 to be correct
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	for (m = 0; m <= 9; m++)
	if (n < m)
	{
		putchar(n + '0');
		putchar(m + '0');
		if ((n != 8) && (m != 9))
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
