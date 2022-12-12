#include <stdio.h>

/**
 * main - body of code
 *
 * Return: 0 to be correct
 */
int main(void)
{
	int a;
	char x;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
