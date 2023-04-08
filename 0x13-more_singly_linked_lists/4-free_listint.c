#include  "lists.h"

/**
 * free_listint - free all memory
 * allocated for listint list
 * @head: head node of the list
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
/*	printf("freeing node n = %d\n", head->n);*/
	free(head);
}
