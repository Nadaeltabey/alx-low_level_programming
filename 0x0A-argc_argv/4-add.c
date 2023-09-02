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
int i, sum = 0;
if (argc == 0 || argc == 1)
{
printf("0\n");
return (0);
}
else
{
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("Error\n");
return (1);
}
sum = sum + atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
