#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"
/**
 * sum_them_all - writes th
 * @n: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sum_them_all(const unsigned int n, ...)
{
va list args;
int i, sum;

va_start (args, n);
for (i = 0; i < n; i++)
	sum += va_arg (args, int);
va_end (args);
return (sum);
}
