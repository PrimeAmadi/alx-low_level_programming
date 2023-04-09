#include "lists.h"

/**
 * free_listint2 - frees up
 * listint_t elements in memory
 * and sets head node to NULL
 * @head: node pass by reference
 * from which to free the list
 * still the end.
 */


void free_listint2(listint_t **head)
{

	listint_t *cursor = NULL;
	listint_t *cursor_temp = NULL;

	if (!head && !(*head))
		return;

	cursor = *head;

	while (cursor)
	{
		cursor_temp = cursor;
		cursor = cursor->next;
		free(cursor_temp);

	}

	*head = NULL;
	head = NULL;
	/*printf("head : %p\n", (void *)*head);*/

}
