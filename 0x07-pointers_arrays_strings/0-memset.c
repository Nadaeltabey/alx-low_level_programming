#include "main.h"

/**
 * *_strcat - function to give
 * a cat
 * @src: operand
 * @dest: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
	s[i] = b;

return (s);
}
