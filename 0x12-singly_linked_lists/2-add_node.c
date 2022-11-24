#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at start
 * @head: double pointer
 * @str: string
 *
 * Return: New node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
