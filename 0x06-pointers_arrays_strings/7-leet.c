#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: address of s
*/

char *leet(char *str)
{
	int x, y;
	char m[] = "aAeEoOtTlL";
	char n[] = ""4433007711;

	for (x = 0; *(str + x); x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (m[y] == str[x])
				str[x] = n[y];
		}

	}

	return (str);
}
