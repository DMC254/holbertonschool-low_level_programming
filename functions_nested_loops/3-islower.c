#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
