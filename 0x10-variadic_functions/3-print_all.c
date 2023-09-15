#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_all - writes th
 * @format: Th
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *y, *separator = "";

va_start(args, format);

if (format)
{
	while (format[i])
	{
		switch (format[i])
		{
			case'c';
				printf("%s%c", separator, va_arg(args, int));
				break;
			case'i';
				printf("%s%d", separator, va_arg(args, int));
				break;
			case'f';
				printf("%s%f", separator, va_arg(args, double));
				break;
			case's';
				y = va_arg(args, char *);
				if (!y)
					y = "(nil)";
				 printf("%s%s", separator, y);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
}
printf("\n");
va_end(args);
}
