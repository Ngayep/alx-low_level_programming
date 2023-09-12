#include "main.h"

/**
* print_alphabet - Entry point
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int letter = 'a';
		while (letter <= 'z')
			{
			putchar(letter);
			letter++;
			}
		putchar("\n");
		return (0);
}
