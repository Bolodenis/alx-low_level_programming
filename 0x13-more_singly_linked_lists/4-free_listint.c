#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  function that frees a listint_t list.
 * @hed: pointer to the address of the next in thr list
 * Return: void(0)
 */

void free_listint(listint_t *head)
{
        listint_t *temp = NULL;

        if (head != NULL)
        {
                temp = head;
                head = head->next;

                free(temp);
        }

}
