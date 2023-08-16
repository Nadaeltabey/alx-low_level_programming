#include"main.h"

/**
 * times_table  - function to give the 
 * time table
 *
 *Return:  1 (Success) and 0 (failure)
*/
void times_table(void)
{
int n, m;
while (m >= 0 && m <=9)
{
while (n >= 0 && n <=9)
{
_putchar(n*m);
_putchar(',');
n++;
}
_putchar('\n');
m++;
}
}
