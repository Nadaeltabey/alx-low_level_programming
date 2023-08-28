#include "main.h"

/**
 * *_strpbrk - function to give
 * a mem
 * @s: operand
 * @accept: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;
char *p;

for (i = 0; s[i] != '\0'; i++)
	for (i = 0; accept[j] != '\0'; j++)
		if (s[i] == accept[j])
		{
			p = &s[i];
			return (p);
		}
return (0);
}
