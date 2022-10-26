#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: the string
 * Return: the string
*/

void _puts(char *str)
{
	int n = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		n++;
	}

	_putchar('\n');
}
