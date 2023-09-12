#include <stdio.h>

/**
 * main - entry point
 * Return: 0 to be correct
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 99; n++)
	{
		m = n + 1;
		while (m <= 99)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((m) / 10 + '0');
			putchar((m) % 10 + '0');
			if (!((n == 98) && (m == 99)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
