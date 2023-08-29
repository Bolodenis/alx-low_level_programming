#include "lists.h"
/**
 * listint_len- returns the number of elements in a linked listint_t list..
 * @h: pointer to the next node address
 * Return: the number of nodes in the list
 *
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
const listint_t *newnode = h;
while (newnode != NULL)
{
count++;
newnode = newnode->next;
}
return (count);
}
