#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *_calloc - function to give
 * an array by malloc
 * @nmemb: operand
 * @size: operand
 *Return:  1 (Success) and 0 (failure)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, p;
char *j;
p = nmemb * size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
j = malloc(p);
if (j == NULL || nmemb == 0 || size == 0)
{
return (NULL);
}
for (i = 0; i < p; i++)
{
j[i] = 0;
}
return (j);
}
