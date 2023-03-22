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
	unsigned long int i;

	i = 0;

	if (size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
