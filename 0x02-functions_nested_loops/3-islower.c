#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: Returns 1 if character is upper case and returns 0 otherwise
 * @c: The character to be checked
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
