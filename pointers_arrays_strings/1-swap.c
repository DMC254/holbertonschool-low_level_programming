#include "main.h"
/**
 * swap_int - swap the value of 2 interges
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
