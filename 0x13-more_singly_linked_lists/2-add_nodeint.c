#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 *add_nodeint- add node at the beginning of the list
 *@head: pointer to pointer to the address of the first node in the list
 *@n: value to be stored un the node
 *Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
	new->next = NULL;
	}
	else
	{
		new->next = *head;
		new->n = n;
		*head = new;
	}
	return (new);
}
