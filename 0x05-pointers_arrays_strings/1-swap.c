#include"main.h"

/**
 * swap_int - function to swap values
 *
 * @a: operand
 * @b: operand
 *
 *Return:  1 (Success) and 0 (failure)
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
