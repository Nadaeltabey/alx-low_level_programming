#include "main.h"

/**
 * _strspn - function to give
 * a mem
 * @s: operand
 * @accept: operand
 *Return:  1 (Success) and 0 (failure)
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;

for (i = 0; s[i] != '\0'; i++)
	for (j = 0; accept[j] != s[i]; j++)
		if (accept[j] == '\0')
		{
		return (i);
		}
return (i);
}
