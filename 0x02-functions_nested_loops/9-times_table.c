#include"main.h"

/**
 * times_table  - function to give the 
 * time table
 *
 *Return:  1 (Success) and 0 (failure)
*/
void times_table(void)
{
int m = 0,  n, y;
while (m >= 0 && m <= 9)
{
n = 0;
while (n >= 0 && n <= 9)
{
y = n * m;
_putchar(y);
_putchar(',');
_putchar(' ');
n++;
}
_putchar('\n');
m++;
}
}
