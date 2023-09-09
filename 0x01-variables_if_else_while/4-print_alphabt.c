#include <stdio.h>

/**
 * main - entry point
 * Return: 0 to be correct
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		if ((a == 'e') || (a == 'q'))
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
