#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: parametre
 * @height: parametre
 *Return: pointer
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; ++j)
	{
		free(grid[j]);
	}
	free(grid);
}
