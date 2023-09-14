#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_iH

/**
 * struct three - writes th
 * @three: Th
 * @f: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
typedef struct three
{
char *three;
void (*f)(char *, va_list);
}thre;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
