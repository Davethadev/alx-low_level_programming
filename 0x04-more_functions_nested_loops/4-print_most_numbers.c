#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: Returns void
*/

void print_most_numbers(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		if (y == '2' || y == '4')
			continue;
		_putchar(y);
	}

	_putchar('\n');
}
