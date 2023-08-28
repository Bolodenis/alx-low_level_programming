#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
const listint_t *newnode = h;
int count = 0;
newnode = (listint_t *)malloc(sizeof(listint_t));
if (newnode == NULL)
{
printf("the list is empty");
}
while (newnode != NULL)
{
printf("%d\n", newnode->n);
newnode = newnode->next;
count++;
}
return (count);
}
