#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * **alloc_grid - function to give
 * an array by malloc
 * @width: operand
 * @height: operand
 *Return:  1 (Success) and 0 (failure)
*/
int **alloc_grid(int width, int height)
{
int **j;
int i, k;
if (height == 0)
{
return (NULL);
}
if (width == 0)
{
return (NULL);
}
j = malloc(height * sizeof(*j));
if (j == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
j[i] = malloc(width * sizeof(**j));
if (j[i] == NULL)
{
while (i--)
{
free(j[i]);
free(j);
return (NULL);
}
}
for (k = 0; k < width; k++)
{
j[i][k] = 0;
}
}
}
return (j);
}
