#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
*/

void print_number(int n)
{
	unsigned int u;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	u = n;

	if (u / 10)
		print_number(u / 10);

	_putchar(u % 10 + '0');
}
