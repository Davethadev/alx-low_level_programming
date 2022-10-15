#include <stdio.h>
/**
 * main - prints all the letters of the alphabet except q and e
 * Return: Returns 0
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);

}
