#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign random number
 *
 * Return: 0 (success)
 */
int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)

	{

		printf("%dis positive\n");

	}

	else if (n < 0)

	{

		printf("%dis negative\n");

	}

	else

	{

		printf("%dis zero\n");

	}

	return (0);
}
