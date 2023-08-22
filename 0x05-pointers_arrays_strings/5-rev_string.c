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
int c = 0;

while (*s != '\0')
{
c++;
s++;
}
s--;
for (i = c; i > 0; i--)
{
s--;
}
}
