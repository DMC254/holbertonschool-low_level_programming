#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * @n: variadic intput
 * Return: Always 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}
	va_end(valist);

	return (sum);
}
