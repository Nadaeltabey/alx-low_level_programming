#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * free_grid - function to give
 * an array by malloc
 * @grid: operand
 * @height: operand
 *Return:  1 (Success) and 0 (failure)
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; ++i)
{
free(grid[i]);
}
free(grid);
}
