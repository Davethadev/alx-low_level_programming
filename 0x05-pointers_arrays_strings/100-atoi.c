#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: str to be converted
 * Return: return integer
*/

int _atoi(char *s)
{
	int n, length, sign;
	unsigned int value;

	length = strlen(s);
	sign = 1;
	value = 0;

	for (n = 0; n < length; n++)
	{
		if (value > 0)
		{
			if (isdigit(s[n]) == 0)
			{
				break;
			}
		}
		if (s[n] == '-')
		{
			sign *= -1;
		}
		if (s[n] >= '0' && s[n] <= '9')
		{
			value = value * 10 + s[n] - '0';
		}
	}

	return (value * sign);
}
