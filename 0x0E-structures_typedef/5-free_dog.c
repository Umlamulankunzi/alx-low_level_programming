#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
* free_dog - free dog structs in heap memory
* @d: struct dog *.
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
