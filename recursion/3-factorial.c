#include "main.h"
/**
 * factorial - Return the factorial of a given number
 * @n: integer
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
