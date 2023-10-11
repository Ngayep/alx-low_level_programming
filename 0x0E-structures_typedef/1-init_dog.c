#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of typt struct dog
 * @d: pointer to a variable of dype dog
 * @name: name of dog
 * @age: age of dog
 * @owner: pointer to the owner of pet
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	p->age = age;
	p->owner = owner;
}
