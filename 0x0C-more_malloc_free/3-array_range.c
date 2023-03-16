#include "main.h"
#include <stdlib.h>


/**
* array_range - allocates memory for an array, using malloc
* @min: int
* @max: int
* Return: int *
*/
int *array_range(int min, int max)
{
	int *arr, arr_size, i;

	arr_size = (max - min) + 1;

	if (min > max)
		return (NULL);

	arr = malloc(arr_size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
