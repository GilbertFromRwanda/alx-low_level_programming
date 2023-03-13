#include "main.h"

/**
 * alloc_grid - check the code
 *@width: int 
 *@height: int
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
