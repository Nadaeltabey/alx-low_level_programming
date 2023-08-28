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
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
	for (j = 0; accept[j] != '\0'; j++)
		if (s[i] == accept[j])
		{
			return (s + i);
		}
return ('\0');
}
