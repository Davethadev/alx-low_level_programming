#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: string
*/

char *string_toupper(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		if (*(str + n) >= 'a' && *(str + n) <= 'z')
			*(str + n) -= 'a' - 'A';

		n++;
	}

	return (str);
}
