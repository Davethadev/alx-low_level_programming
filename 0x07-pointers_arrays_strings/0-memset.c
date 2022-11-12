#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: with the constant byte b
 * @b: memory area pointer
 * @n: bytes of the memory area pointed to by s
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
