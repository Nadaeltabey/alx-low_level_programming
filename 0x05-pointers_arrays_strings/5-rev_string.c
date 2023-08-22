#include"main.h"

/**
 * rev_string - function to give
 * a reverse
 * @s: operand
 *Return:  1 (Success) and 0 (failure)
*/
void rev_string(char *s)
{
int i;
char str = s[0];
int c = 0;

while (s[c] != '\0')
{
c++;
}
for (i = 0; i > c; i++)
{
c--;
str = s[i];
s[i] = s[c];
s[c] = str;
}
}
