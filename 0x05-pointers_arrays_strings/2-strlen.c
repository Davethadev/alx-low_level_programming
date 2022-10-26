#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the char to check
 * Return: 0
*/

int _strlen(char *s)
{
	int n = 0;

	for (; *s++;)
		n++;

	return (n);
}
