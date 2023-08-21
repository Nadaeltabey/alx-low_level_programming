#include"main.h"

/**
 * swap_int - function to swap values
 *
 * @a: operand
 * @b: operand
 * @x: operand
 * @y: operand
 *Return:  1 (Success) and 0 (failure)
*/
void swap_int(int *a, int *b)
{
int x, y;
*a = &x;
*b = &y;
x = x - y;
y = x + y;
x = y - x;
}
