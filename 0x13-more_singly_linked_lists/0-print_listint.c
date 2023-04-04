#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print listint_t
 * singly linked list from node @h to @h = null
 * @h: points to node to print from
 *
 * Return: number of number of elememts printed
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_printed_elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_printed_elem++;
	}

	return (num_of_printed_elem);
}
