#include <stdio.h>
/**
 * main - prints all the letters of the alphabet in lower case
 * Return: Returns 0
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
