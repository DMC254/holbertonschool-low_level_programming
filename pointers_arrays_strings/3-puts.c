#include "main.h"
/**
 * _puts - print a string follow by a new line
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
