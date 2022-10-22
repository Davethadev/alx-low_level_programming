#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Returns 0
*/

int main(void)
{
	unsigned long int x, y = 612852475143;

	for (x = 0; x < 782849; x += 2)
	{
		while ((y % x == 0) && (y != x))
			y = y / x;
	}

	printf("%lu\n", y);

	return (0);
}
