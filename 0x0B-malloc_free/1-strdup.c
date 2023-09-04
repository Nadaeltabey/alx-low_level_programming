#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * *_strdup - function to give
 * an array by malloc
 * @str: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *_strdup(char *str)
{
unsigned int i;
unsigned int m = 0;
char *j;

if (str == NULL)
{
return (NULL);
}
while (str[m] != '\0')
{
m++;
}
j = (char *)malloc(m *sizeof(*str) + 1);
if (j == NULL)
{
return (NULL);
}
for (i = 0; i < m; i++)
{
j[i] = str[i];
}
return (j);
}
