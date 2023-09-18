#include "main.h"

/**
 * puts_half - print half of a string, followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int n;
	int i;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	n = (length_of_the_string - 1) / 2;

	for (i = n + 1; i < length_of_the_string; i++)
	{
		_putchar(str[i];
	}
	_putchar('\n');

}
