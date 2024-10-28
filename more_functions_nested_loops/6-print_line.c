#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n - number of times to print the character _.
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
