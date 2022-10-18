#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Return: Returns 0
*/

void print_alphabet(void)
{
	char letter;

	for (letter = '97'; letter < '123'; letter++)
		_putchar(letter);

	_putchar('\n');

	return (0);
}
