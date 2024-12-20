#include "main.h"
/**
 * _strlen_recursion - Return the length of a string
 * @s: string
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set qppropiately
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
