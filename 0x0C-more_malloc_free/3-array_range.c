#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *array_range - function to give
 * an array by malloc
 * @min: operand
 * @max: operand
 *Return:  1 (Success) and 0 (failure)
*/
int *array_range(int min, int max)
{
int *j;
int l, i;
l = max - min;
if (min > max)
{
return (NULL);
}
j = malloc((l + 1) * sizeof(int));
if (j == NULL)
{
return (NULL);
}
for (i = 0; min + i <= max; i++)
{
j[i] = min + i;
}
return (j);
}
