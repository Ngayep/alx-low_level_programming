#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from to 98
 * Return: void returns nothing.
 */

void print_to_98(int n)
{
	printf("%d", n);
	if (n <= 98)
	{
		while (n < 98)
			printf(", %d", ++n);
	}
	else
	{
		while (n > 98)
			printf(", %d", --n);
	}
	printf("\n");
}
