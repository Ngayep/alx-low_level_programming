#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then Uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char Uletter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (Uletter <= 'Z')
	{
		putchar(Uletter);
		Uletter++;
	}
	putchar('\n');
	return (0);
}
