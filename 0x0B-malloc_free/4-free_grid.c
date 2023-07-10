#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimensional grid
  * @grid: the 2 dimensional to be freed
  * @height: the height of the 2 dimensional array
  *
  * Return: the freed 2 dimensional array
  */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}

	free(grid);
}
