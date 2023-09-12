#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: not found
 */
void print_alphabet_x10(void)
{
	char a;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
