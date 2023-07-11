#include "main.h"

/**
 * **alloc_grid - returns a ptr to a 2 dimensional array of ints
 *
 * @width: int
 * @height: int
 *
 * Return: return 0
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height)
		if (grid == NULL)
			return (NULL);
	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
	for (i = 0; i < height; i++)
		int j;

		for (int j = 0; j < width; j++)
			grid[i][j] = 0;
		if (grid == NULL)
			int i;

			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		return (grid);
}
