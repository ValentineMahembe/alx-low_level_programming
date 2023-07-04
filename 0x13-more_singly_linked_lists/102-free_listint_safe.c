#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;
	listint_t *fast;
	listint_t *slow;

	if (!h || !*h)
		return (count);

	fast = (*h)->next;
	slow = *h;

	while (fast && fast->next)
	{
		if (fast == slow)
		{
			fast = *h;
			while (fast != slow->next)
			{
				tmp = fast->next;
				free(fast);
				fast = tmp;
				++count;
			}
			*h = NULL;
			return (count);
		}
		fast = fast->next->next;
		slow = slow->next;
	}

	fast = *h;
	while (fast)
	{
		tmp = fast->next;
		free(fast);
		fast = tmp;
		++count;
	}
	*h = NULL;

	return (count);
}
