#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int n = 0;
	int j = 0;

	while (n != '\0')
	{
		n++;
	}

	n--;

	while (j < n)
	{
		char temp = s[j];

		s[j] = s[n];
		s[n] = temp;

		j++;
		n--;
	}
}
