#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n: The number of time to print the character '_'
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
