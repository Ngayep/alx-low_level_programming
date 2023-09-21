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

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
