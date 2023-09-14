#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"
#include "ctype.h"
/**
 * print_all - writes th
 * @format: Th
 * @separator: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i, y, n;
char *x;
char z;
float k;
va_start(args, n);

for (i = 0; i < n; i++)
{	while (isdigit(y))
	{
        y = va_arg(args, int);
	printf("%d%s",y, (separator ? separator : ""));
	}
	while ()


}
