#include "main.h"

/**
 * *_strncat - function to give
 * a cat
 * @src: operand
 * @dest: operand
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strncat(char *dest, char *src, int n)
{
int i, k;

i = 0;
while (dest[i])
	i++;
k = 0;
for  (k = 0; k < n && src[k] != '\0'; k++)
{
dest[i + k] = src[k];
}
dest[k + i] = '\0';
return (dest);
}
