#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"
/**
 * print_strings - writes th
 * @n: Th
 * @separator: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *y;

if (!n)
{
	printf("\n");
	return;
}
va_start(args, n);
for (i = 0; i < n; i++)
{
	y = va_arg(args, char *);
	if (y)
	{
		printf("%s", y);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	else
	{
	printf("nil");
	}
}
va_end(args);
}
