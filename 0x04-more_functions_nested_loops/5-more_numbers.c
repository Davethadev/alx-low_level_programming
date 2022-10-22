#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Returns void
*/

void more_numbers(void)
{
	int x, y, z;

	z = 48;

	for (x = 0; x < 10; x++)
	{
		for (y = 48; y < 63; y++)
		{
			if (y > 57)
			{
				_putchar(49);

				if (z == 58)
					z = 48;
			}

			_putchar(z);

			z = z + 1;
		}

		z = 48;

		_putchar('\n');
	}
}
