#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the char to be reversed
*/

void print_rev(char *s)
{
	int n, length;

	length = strlen(s);

	for (n = length - 1; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
