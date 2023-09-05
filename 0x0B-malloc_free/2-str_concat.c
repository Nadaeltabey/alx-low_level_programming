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
unsigned int i;
unsigned int m = 0;
unsigned int k = 0;
char *j;

if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
while (s1[m] != '\0')
{
m++;
}
while (s2[k] != '\0')
{
k++;
}
j = (char *)malloc(m *sizeof(*s1) + (*s2) + 1);
if (j == NULL)
{
return (NULL);
}
for (i = 0; i < m + k; i++)
{
if (i < m)
{
j[i] = s1[i];
}
else
{
j[i] = s2[i - m];
}
}
j[i] = '\0';
return (j);
}
