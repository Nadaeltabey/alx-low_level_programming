#include "main.h"

/**
 * *_strncpy - function to give
 * a cat
 * @src: operand
 * @dest: operand
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strncpy(char *dest, char *src, int n)
{
int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k++] = '\0';
	}
return (dest);
}
