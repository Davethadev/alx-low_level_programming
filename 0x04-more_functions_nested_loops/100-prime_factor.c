#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Returns 0
*/

int main(void)
{
	long int x, y = 612852475143;

	for (x = 2; x <= y; x++)
	{
		if (y % x == 0)
		{
			y /= x;

			x--;
		}

	}

	printf("%ld\n", x);

	return (0);
}
