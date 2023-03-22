#include "function_pointers.h"


/**
* int_index - searches for an integer in array.
* @array: int array
* @size: size of array
* @cmp: function pointer
* Return: int index of int else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
