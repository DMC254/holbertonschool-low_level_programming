#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet
 * Return: Always 0 void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}