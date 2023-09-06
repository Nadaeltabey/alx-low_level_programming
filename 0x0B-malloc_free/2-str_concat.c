#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *str_concat - function to give
 * an array by malloc
 * @s1: operand
 * @s2: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *str_concat(char *s1, char *s2)
{
unsigned int m = 0, k = 0;
char *j;

if (s1 == NULL)
{
s1 = '\0';
}
if (s2 == NULL)
{
s2 = '\0';
}
while (s1[m])
{
m++;
}
while (s2[k])
{
k++;
}
j = (char *)malloc((m + k + 1)*sizeof(char));
if (j == NULL)
{
return (NULL);
}
while (s1[m] != '\0')
{
j[m] = s1[m];
m++;
}
while (s2[k] != '\0')
{
j[m] = s2[k];
m++, k++;
}
j[m] = '\0';
return (j);
}
