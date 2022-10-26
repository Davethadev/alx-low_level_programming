#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: the char to be reversed
*/

void print_rev(char *s)
{
	int x, y;

	y = 0;

	while (s[y] != '\0')
		y++;

	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
