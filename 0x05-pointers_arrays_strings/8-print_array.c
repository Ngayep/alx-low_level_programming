#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: string to be printed
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0 || n > 256)
	{
	_putchar ('\n');
	return;
	}

	for (i = 0; i < n - 1; i++)
	{
		if (a[i] < 0)
		{
			_putchar ('-');
			_putchar ('0' - a[i] % 10);
		}
		else
		{
		_putchar (a[i] + '0');
		}
		_putchar (',');
		_putchar (' ');
	}
	if (a[n - 1] < 0)
	{
		_putchar('-');
		_putchar('0' - a[n - 1] % 10);
	}
	else
	{
	_putchar (a[n - 1] + '0');
	}
	_putchar ('\n');
}
