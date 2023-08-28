#include "main.h"

/**
 * *_strchr - function to give
 * a character
 * @s: operand
 * @c: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strchr(char *s, char c)
{
int i = 0;

for (i = 0; s[i] >= '\0'; i++)
{
	if (s[i] == c)
	{
		return (s + i);
	}
}
return ('\0');
}
