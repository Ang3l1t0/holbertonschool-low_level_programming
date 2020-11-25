#include "lists.h"

/**
 * list_len - number of elemnts in the list
 * @h: node
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *current = h;

	for (n = 0; current != NULL; n++)
		current = current->next;
	return n;
}
