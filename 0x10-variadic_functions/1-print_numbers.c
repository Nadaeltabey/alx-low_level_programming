#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"
/**
 * print_numbers - writes th
 * @n: Th
 * @separator: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i, y;

va_start(args, n);
for (i = 0; i < n; i++)
{
	y = va_arg(args, int);
	printf("%d", y);
	if (separator && i < n - 1)
	{
	printf("%s", separator);
	}
}
va_end(args);
printf("\n");
}
