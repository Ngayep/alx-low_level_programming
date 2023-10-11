#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *d;

	nlen = olen = 0;
	nlen = strlen(name) + 1;
	olen = strlen(owner) + 1;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(nlen);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	
	strcpy(d->name, name);
	d->age = age;

	d->owner = malloc(olen);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);

	return d;
}
