#include "main.h"
/**
 * free_grid - free a 2d grid
 * @grid: the grid
 * @heigth: the height
 *
 * Return: void
 */
void free_grid(int **grid, int heigth)
{
	int ih;

	for (ih = 0; ih < heigth; ih++)
		free(grid[ih]);
	free(grid);
}
