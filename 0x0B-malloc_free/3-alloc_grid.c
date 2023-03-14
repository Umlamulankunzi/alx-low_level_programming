#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int **arr; /* pointer to pointer */
	int *buffer;

	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));

	buffer = malloc((height * width) * sizeof(int));

	for (i = 0; i < height; i++)
	{
		arr[i] = buffer + (width * i);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
