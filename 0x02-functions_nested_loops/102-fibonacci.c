#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Returns 0
*/

int main(void)
{
	int n;
	unsigned long a = 0, b = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (n == 49)
			printf("\n");
		else
			printf(", ");

	}

	return (0);
}
