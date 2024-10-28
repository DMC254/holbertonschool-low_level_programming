#include "main.h"
/**
 * print_most_numbers - print the numbers from 0 to 9
 *
 * Return: success
 */
void print_most_numbers(void)
{
	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
			_putchar(number);
	}
	_putchar('\n');
}
