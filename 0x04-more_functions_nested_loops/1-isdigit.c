#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character that will be checked
 * Return: Returns 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	int check;

	check = isdigit(c);

	if (check == 0)
		return (0);
	else
		return (1);
}
