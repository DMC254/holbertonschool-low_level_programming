#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n)
 * @head: the head of the dlistint_t list
 *
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
