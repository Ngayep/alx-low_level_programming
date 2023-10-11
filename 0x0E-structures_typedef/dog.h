#ifndef DOG_H
#define DOG_H

/**
 * struct dog - attributes of a dog
 * my_struct - TYpedef for struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;

#endif
