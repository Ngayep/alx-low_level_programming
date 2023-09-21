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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (j < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
