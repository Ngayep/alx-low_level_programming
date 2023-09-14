#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * @void: it doesn't take any parameter
 * return: it returns 0 if successful
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
		putchar('\n');
}
