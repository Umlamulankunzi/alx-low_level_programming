#include <stddef.h>
#include "function_pointers.h"



/**
* array_iterator - apply @action to elements of @array
* @array: int array
* @size: size of @array
* @action: f\nction pointer to callback
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
