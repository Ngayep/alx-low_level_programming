#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area s
 * @b: constant byte
 * @n: bytes of memory area the function has to fill
 * Return: *s , a pointer to memory location s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
