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
while (str)
{
m++;
}
j = (char *)malloc(m *sizeof(char));
if (str == NULL || j == NULL)
{
return (NULL);
}
for (i = 0; i < m; i++)
{
j[i] = str[i];
}
return (j);
}
