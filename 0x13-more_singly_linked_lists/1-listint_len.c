#include "lists.h"

/**
 * listint_len - evaluates length of
 * type listint_t singly linked list
 * starting from node h
 * @h: head of singly linked list
 * Return: evaluated length
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
