#include "dog.h"
#define NULL (void *)0


/**
 * init_dog - initialise @d struct.
 * @d: struct to initialise.
 * @name: string dog name.
 * @age: float dog age.
 * @owner: string dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
