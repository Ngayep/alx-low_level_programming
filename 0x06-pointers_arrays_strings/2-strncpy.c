#include "main.h"

/*
 * _strncpy - copies a string
 * @dest: string receiving copy
 * @src: string to be copied
 * @n: limit of destination string
 * return: returns the coopied string
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
