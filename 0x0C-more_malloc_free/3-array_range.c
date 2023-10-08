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

	if (min > max)
		return (NULL);

	size = max - min + 1;

	int *p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
