#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
