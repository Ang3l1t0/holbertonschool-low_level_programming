#include "lists.h"

/**
 * print_list - print all elements of a list
 * @h: node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t n;

	for (n = 0; current != NULL; n++)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}
	return (n);
}
