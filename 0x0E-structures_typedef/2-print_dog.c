#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
* print_dog - prints struct dog @d
* @d: struct dog
*/
void print_dog(struct dog *d)
{
	struct dog;

	if (!(d == NULL))
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
