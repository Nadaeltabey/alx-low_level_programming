#include "main.h"

/**
 * *_memcpy - function to give
 * a mem
 * @dest: operand
 * @src: operand
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
	dest[i] = src[i];
return (dest);
}
