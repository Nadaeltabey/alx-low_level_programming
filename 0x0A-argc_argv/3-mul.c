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
int i;

(void)argc;
if (argc == 3)
{
for (i = 0; i < argc; i++)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
