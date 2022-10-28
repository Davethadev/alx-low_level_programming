#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: string
*/

char *cap_string(char *str)
{
	int x = 0, y;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(str + x))
	{
		if (*(str + x) >= 'a' && *(str + x) <= 'z')
		{
			if (x == 0)
				*(str + x) -= 'a' - 'A';
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (a[y] == *(str + x - 1))
						*(str + x) -= 'a' - 'A';
				}
			}
		}

		x++;
	}

	return (str);
}
