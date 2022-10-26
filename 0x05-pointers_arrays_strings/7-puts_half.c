#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to the string
*/

void puts_half(char *str)
{
	int n, string, length;

	length = strlen(str);

	if (length % 2 != 0)
	{
		string = (length + 1) / 2;
	}
	else
	{
		string = length / 2;
	}

	for (n = string; n < length; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
