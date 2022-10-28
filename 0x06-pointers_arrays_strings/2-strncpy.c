#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the str to be copied into
 * @src: the str to be copied
 * @n: the number of bytes
 * Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *value = strncpy(dest, src, n);

	return (value);
}
