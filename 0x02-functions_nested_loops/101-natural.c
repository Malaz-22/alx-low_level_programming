#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 to be correct
 */
int main(void)
{
	int i, j, sum;

	for (i = 3; i < 1024; i = +3)
	for (j = 5; j < 1024; j = +5)
	sum = i + j;
	printf("%d", sum / 100000);
	printf("%d", (sum / 10000) % 10);
	printf("%d", (sum / 1000) % 10);
	printf("%d", (sum / 100) % 10);
	printf("%d", (sum / 10) % 10);
	printf("%d", sum % 10);
	printf("\n");
	return (sum);
}
