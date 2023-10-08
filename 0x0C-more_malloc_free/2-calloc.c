#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: nber of elements of the array
 * @size: number of bytes of nmemb elements
 * Return: NULL if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p = malloc(nmemb * size);
	unsigned int t;

	t = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < t; i++)
	{
		((char *)p)[i] = 0;
	}
	return (p);
}
