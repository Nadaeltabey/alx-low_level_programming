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
unsigned int i;
char *j;
j = malloc(nmemb * size);
if (j == NULL || nmemb == 0 || size == 0)
{
return (NULL);
}
for (i = 0; i < size * nmemb; i++)
{
j[i] = 0;
}
return (j);
}
