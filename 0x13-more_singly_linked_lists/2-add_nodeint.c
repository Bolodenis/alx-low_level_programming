#include "lists.h"
/**
 * add_nodeint - add node at the beginning of the list
 * @head: pointer to pointer to the address of the first node in the list
 * @n: value to be stored in the node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
