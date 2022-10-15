#include <stdio.h>
/**
 * main - prints all letters of the alphabet in reverse
 * Return: Returns 0
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
