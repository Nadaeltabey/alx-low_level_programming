#include"main.h"

/**
 * times_table  - function to give the 
 * time table
 *
 *Return:  1 (Success) and 0 (failure)
*/
void times_table(void)
{
char m = 0, n, y;
while (m <= 9)
{
n = 0;
while (n <= 9)
{
y =  n * m;
_putchar(y + '0');
if (n < 9)
{
else if (y <= 9)
{
_putchar(y + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
else if (y >= 10)
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
n++;
}
_putchar('\n');
m++;
}
}
