#include "main.h"

/**
 * *_strcat - function to give
 * a cat
 * @src: operand
 * @dest: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strcat(char *dest, char *src)
{
int i, k;

k = 0;
while (dest[k])
	k++;
for (i = 0; src[i]; i++)
	dest[k++] = src[i];
return (dest);
}
