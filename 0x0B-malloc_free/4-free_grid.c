#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows of the matrix
 *@height: columns of a string
 * Return: a pointer to a 2 dimensional array either of integers or null
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
