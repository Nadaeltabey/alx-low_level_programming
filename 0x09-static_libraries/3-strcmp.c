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
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
