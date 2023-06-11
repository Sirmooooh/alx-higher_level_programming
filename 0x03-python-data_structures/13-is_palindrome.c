#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int is_palindrome(listint_t **head)
{
	listint_t *node;
	int values[9999];
	int i = 0, c = 0;

	if (*head == NULL || head == NULL)
	{
		return (1);
	}
	node = *head;
	if (node->next == NULL)
	{
		return (1);
	}
	while (node != NULL)
	{
		values[i] = node->n;
		node = node->next;
		i++;
	}
	i--;
	while (i >= 0 && c <= i)
	{
		if (values[i] != values[c])
		{
			return (0);
		}
		i--;
		c++;
	}
	return (1);
}
