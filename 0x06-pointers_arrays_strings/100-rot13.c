#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: str
*/

char *rot13(char *s)
{
	int x, y;

	char m[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (m[y] == *(s + x))
			{
				*(s + x) = n[y];
				break;
			}
		}
	}

	return (s);
}
