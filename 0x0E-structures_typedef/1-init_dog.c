#include "dog.h"


/**
* init_dog - initialises struct dog
* @d: struct dog
* @name: string name
* @age: float age
* @owner: string owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

