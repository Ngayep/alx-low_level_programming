#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimal value in array
 * @max: maximal value in array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	unsigned int size;
	unsigned int i;
	int *p;

	size = max - min + 1;

	p = malloc(size * sizeof(int));

	if (min > max)
		return (NULL);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
