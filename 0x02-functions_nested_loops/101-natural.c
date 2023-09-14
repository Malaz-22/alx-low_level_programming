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
	if (sum < 10)
	{
		printf("%d", sum);
	}
	if ((sum >= 10) && (sum < 100))
	{
		printf("%d\n", sum / 10);
		printf("%d\n", sum % 10);
	}
	if ((sum >= 100) && (sum <= 999))
	{
		printf("%d", sum / 100);
		printf("%d", (sum / 10) % 10);
		printf("%d", sum % 10);
	}
	if (sum > 999)
	{
		printf("%d", sum / 1000);
		printf("%d", (sum / 100) % 10);
		printf("%d", (sum / 10) % 10);
		printf("%d", sum % 10);
	}
	printf(",");
	printf(" ");
	printf("\n");
	return (sum);
}
