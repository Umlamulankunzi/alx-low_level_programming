#include <stdlib.h>
#include "main.h"

/*
 * free_grid -  frees memory allocated to a 2 dimensional grid.
 * @grid: 2D array
 * @height: int
 */
void free_grid(int **grid, int height)
{
	free(grid[0]);
	free(grid);
	height++;
}
