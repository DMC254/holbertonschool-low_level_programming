#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char h;
	int i;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
	}

		_putchar('\n');
}
