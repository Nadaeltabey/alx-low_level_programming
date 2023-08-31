/**
 * _strlen_recursion - function to give
 * a lenght
 * @s: operand
 *Return:  1 (Success) and 0 (failure)
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
