#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 * Return: Returns 1 if uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}