#include "main.h"

/**
 * reverse_array - function to give
 * a reverse of integers
 * @a: operand
 * @n: operand
 *Return:  1 (Success) and 0 (failure)
*/
void reverse_array(int *a, int n)
{
int i, j, str;
	/**
	 * the probblem is what we need which
	 * is a[j] or a[n-1] is changing so we store it in
	 * str by exchanging each element in i a[i] with a[j]
	 */
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		str = a[i];
		a[i] = a[j];
		a[j] = str;
	}
}
