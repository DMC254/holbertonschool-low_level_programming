#include "main.h"
/**
 * print_array - pints elements of an array of intergers
 * @a: string
 * @n: element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			prntf(", %d", a[i]);
	}
	printf("\n");
}