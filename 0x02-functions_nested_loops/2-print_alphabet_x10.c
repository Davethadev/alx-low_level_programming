#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Returns 0
*/

void print_alphabet_x10(void)
{
	char letter;
	int count = 10;

	while (count != 0)
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		count--;

		_putchar('\n');

	return (0);
}
