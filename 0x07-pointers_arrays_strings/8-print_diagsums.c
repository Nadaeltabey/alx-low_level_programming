#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - function to give
 * a sum
 * @a: operand
 * @size: operand
 *Return:  1 (Success) and 0 (failure)
*/
void print_diagsums(int *a, int size)
{
int i;
int sum = 0;
int sum1 = 0;

for (i = 0; i < size; i++)
{
	sum = sum + a[i];
	sum1 = sum1 + a[size - i - 1];
	a = a + size;
}
	printf ("%d, ", sum);
	printf ("%d\n", sum1);
}
