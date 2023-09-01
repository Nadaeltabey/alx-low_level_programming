#include "main.h"

/**
 * *_memset - function to give
 * a mem
 * @s: operand
 * @b: operand
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
	s[i] = b;

return (s);
}
