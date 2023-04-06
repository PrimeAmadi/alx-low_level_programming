#include "lists.h"

/**
 * last_next_adrs - returns address to the
 * last element.next member in the singly
 * linked list.
 * @node: pointer an element in the list
 * Return: see :@last_next_adrs.
 */

listint_t **last_next_adrs(listint_t **node)
{
	listint_t **cursor = node;
	/* using node directly will still
	 * work since node here is a local
	 * variable, the address of the passed
	 * argument is what is copied to node. but cursor
	 * helps me think clearly about the (de)referencing
	 * dynamics.
	 */ 

	while (*cursor)
	{
		cursor = &((*cursor)->next);
	}
	return (cursor);
}

/**
 * add_nodeint_end - adds a new node at
 * the beginning of a file.
 * @head: points to head pointer
 * @n: data to add to new struct element
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t **lastnextadrs = last_next_adrs(head);

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next =  NULL;

	
	*lastnextadrs = new_node;

	return (new_node);
}
