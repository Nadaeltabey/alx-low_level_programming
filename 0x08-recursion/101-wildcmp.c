#include "main.h"

/**
 * wildcmp - function to give
 * a cat
 * @s1: operand
 * @s2: operand
 *Return:  1 (Success) and 0 (failure)
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == *s2 || *s2 == '*')
	return (wildcmp(s1 + 1, s2 + 1));
			if (*s1 == '\0' && *s2 == '\0')
			{
			return (1);
			}
			else
			{
			return (0);
			}
}
