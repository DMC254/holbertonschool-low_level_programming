#include <stdio.h>
/**
 * main - print all single numbers from base 10 startin from 0
 * Return: Always 0 (successe)
 */
int main(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);
	putchar('\n');
	return (0);
}
