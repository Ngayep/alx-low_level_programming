#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * @void: it doesn't take any parameter
 * return: it returns 0 if successful
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
		putchar('\n');
}
