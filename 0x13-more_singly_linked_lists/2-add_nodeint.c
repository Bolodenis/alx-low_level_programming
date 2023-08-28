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
listint_t *addnode = *head;
addnode = (listint_t *)malloc(sizeof(listint_t));
if (addnode == NULL)
{
return (NULL);
}
addnode->n = n;
addnode->next = NULL;
if (head != NULL)
{
addnode->next = *head;
*head = addnode;
}
return (addnode);
}
