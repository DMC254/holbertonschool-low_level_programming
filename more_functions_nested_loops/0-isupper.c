#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: tested character
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
