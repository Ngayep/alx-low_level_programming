#include <stdio.h>
#include "main.h"

/**
 * print_dog - prints a struct dog
 * @d: a pointer to a struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);
	if (name == NULL)
		printf(" name: (nil)");
	if (age == NULL)
		printf(" age: (nil)");
	if (owner == NULL)
		printf(" owner: (nil)");
}
