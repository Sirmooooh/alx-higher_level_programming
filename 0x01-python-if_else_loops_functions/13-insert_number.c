#include "lists.h"
#include <stdlib.h>
#include <unistd.h>

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *curr = *head;
	listint_t *new = NULL;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;

	if (!*head || (*head)->n > number)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	else
	{
		while (curr && curr->n < number)
	{
			tmp = curr;
			curr = curr->next;
		}
		tmp->next = new;
		new->next = curr;
	}

	return (new);
}
