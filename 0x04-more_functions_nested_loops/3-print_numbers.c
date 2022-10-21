#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: Returns 0
*/

void print_numbers(void)
{
	char x;

	for (x = '0'; x < '10'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');

	return (0);
}
