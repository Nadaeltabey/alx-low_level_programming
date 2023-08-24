#include "main.h"

/**
 * _strcmp - function to give
 * a cat
 * @s1: operand
 * @s2: operand
 *Return:  1 (Success) and 0 (failure)
*/
int _strcmp(char *s1, char *s2)
{
int y, i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] != '\0' && s2[i] != '\0')
		{
			return (0);
		}
		i++;
	}
y = s1[i] - s2[i];
return (y);
}
