#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: str to be reversed
*/

void rev_string(char *s)
{
	int n, length;
	char oldstr;

	length = strlen(s);

	for (n = 0; n < length / 2; n++)
	{
		oldstr = s[n];
		s[n] = s[length - 1 - n];
		s[length - 1 - n] = oldstr;
	}
}
