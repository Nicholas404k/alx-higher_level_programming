#include "list.h"
/**
  *check_cycle - Checks if a singly linked list has a cycle in it
  *
  *@list: The head of the linked list
  *
  *Return: 0 if there is no cycle, 1 if there is a cycle
  */

int check_cycle(listint_t *list)
{
	listint_t *slow_ptr = list;
	listint_t *fast_ptr = list;

	while (fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
			return (1);
	}

	return (0);
}
