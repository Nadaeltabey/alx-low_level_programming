#include "stdlib.h"
#include "stdio.h"

/**
 * main - writes th
 * @argc: Th
 * @argv: operand
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
int sum = 0;
char *p;

while (--argc)
{
for (p = argv[argc]; *p; p++)
{
if (*p < '0' && *p > '9')
{
printf("Error\n");
return (1);
}
sum = sum + atoi(argv[argc]);
}
}
printf("%d\n", sum);
return (0);
}
