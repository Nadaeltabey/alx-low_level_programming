#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *create_array - function to give
 * an array by malloc
 * @size: operand
 * @c: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;

char *n = (char *)malloc(size * sizeof(char));
if (size == 0 || n == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
n[i] = c;
}
return (n);
}
