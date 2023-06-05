#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: linked list
 * Return: an integer.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow;
	listint_t *fast;

	if (list == NULL)
		return (0);

	slow = list;
	fast = list->next;


	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
