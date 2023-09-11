#include <stdio.h>

/**
 * main - entry point
 * Return: 0 to be correct
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 99; n++)
	for (m = 0; m <= 99; m++)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
		putchar(' ');
		putchar((m + 1) / 10 + '0');
		putchar((m + 1) % 10 + '0');
		if (!((n == 98) && (m == 99)))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
