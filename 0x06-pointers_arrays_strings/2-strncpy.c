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

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
		dest[i] = '\0';
		}
	}

	return (dest);
}
