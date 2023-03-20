#include <stdio.h>
#include "dog.h"


/**
* print_dog -  print elements of struct @d
* @d: struct d
*/
void print_dog(struct dog *d)
{
	char *name, *owner;

	if (!(d == NULL))
	{
		name = (&d->name == NULL) ? "nil" : d->name;
		owner = (&d->owner == NULL) ? "nil" : d->owner;

		printf("Name: %s\n", name);

		if (&d->age == NULL)
			printf("Age: nil\n");
		else
			printf("Age: %f\n", d->age);

		printf("Owner: %s\n", owner);
	}
}

