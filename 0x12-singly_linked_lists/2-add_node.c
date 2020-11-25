#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - add node to the first position
 * @head: first node
 * @str: string name
 * Return: number of nodes
 **/
list_t *add_node(list_t **head, const char *str)
{
	int n = 0;
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for ( ; str[n] != '\0'; )
		n++;
	new_node->len = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
