#include "main.h"
#include <stdlib.h>

/**
* free_grid - free memory allocate to array_grid function
* @grid: grid to free
* @height: height of the grid to free
*
* Return: Always 0
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
