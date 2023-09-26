#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory are
 * @src: memory area to be copied
 * @n: number of bytes copied from src
 * Return: dest ,a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[i];
		}
	}
	return (dest);
}
