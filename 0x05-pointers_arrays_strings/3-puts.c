#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: the string
 * Return: the string
*/

void _puts(char *str)
{
	int n;

	for (n = 0; n != '\0'; n++)
		_putchar(str[i]);

	_putchar('\n');
}
