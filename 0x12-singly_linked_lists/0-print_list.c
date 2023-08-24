#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_ list - function that prints all the elements
 * of a list_t list.
 * @h: singly link list
 * @return: the number of nodes
 */
size_t print_list(const list_t *h)
{

	size_t denis;

	denis = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		denis++;
	}
	return (denis);
}














}
