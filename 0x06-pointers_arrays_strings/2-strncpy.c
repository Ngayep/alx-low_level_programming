#include "main.h"

/*
 * _strncpy - copies a string
 * @dest: string receiving copy
 * @src: string to be copied
 * @n: limit of destination string
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
