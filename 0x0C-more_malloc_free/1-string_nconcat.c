#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * *string_nconcat - function to give
 * @s1: operand
 * @s2: operand
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int k, r, m;
char *j;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
m = 0, r = 0;
while (s1[m] != '\0')
	m++;
while (s2[r] != '\0')
	r++;
j = malloc((m + r + 1) * sizeof(char));
if (j == NULL)
	return (NULL);
m = 0, k = 0;
while (s1[m] != '\0')
	{j[m] = s1[m];
	m++; }
if (n >= r)
	while (s2[k] != '\0')
		{j[m] = s2[k];
		m++, k++; }
else
	while (k < n)
		{j[m] = s2[k];
		m++, k++; }
j[m] = '\0';
return (j); }
