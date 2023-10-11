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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
