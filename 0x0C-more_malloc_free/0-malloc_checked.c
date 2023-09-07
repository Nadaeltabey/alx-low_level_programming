#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *malloc_checked - function to give
 * an array by malloc
 * @b: operand
 *Return:  1 (Success) and 0 (failure)
*/
void *malloc_checked(unsigned int b)
{
int *n;
n = malloc(b);
if (n == NULL)
{
exit(98);
}
return (n);
}
