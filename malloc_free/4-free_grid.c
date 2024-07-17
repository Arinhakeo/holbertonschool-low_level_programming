#include <stdlib.h>
/**
* free_grid - Frees a 2D grid created by alloc_grid
* @grid: Pointer to the 2D array to be freed
* @height: Height of the 2D array
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);
}
