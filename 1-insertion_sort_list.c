#include "sort.h"

/**
* swaps_nodes - Swaps tha nodes
* @l: left node
* @r: right node
* @h: Head
*/

void swaps_nodes(listint_t *l, listint_t *r, listint_t **h)
{
	listint_t *t;

	t = l->prev;
	if (t)
		t->next = r;
	r->prev = t;
	l->prev = r;
	l->next = r->next;
	r->next = l;
	if (l->next != NULL)
		l->next->prev = l;
	if (r->prev == NULL)
		*h = r;
	print_list(*h);
}

/**
* insertion_sort_list - sorts a doubly linked list of integers
* @list: Head
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *next, *prev, *prev2;

	if (list == NULL)
		return;

	curr = next = *list;
	while (curr != NULL)
	{
		while (curr->prev != NULL)
		{
			prev = curr->prev;
			prev2 = prev;
			if (prev->n > curr->n)
				swaps_nodes(prev, curr, list);
			curr = prev2;
		}
		curr = next->next;
		next = curr;
	}

}
