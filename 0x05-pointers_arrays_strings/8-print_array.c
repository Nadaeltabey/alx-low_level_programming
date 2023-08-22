#include"main.h"
#include <stdio.h>
/**
 * print_array - function to give
 * a string
 * @a: operand
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n-1; i++)
{
	printf("%d, *a[i]");
	putchar(',');
	putchar(' ');
}
putchar('\n');
}
