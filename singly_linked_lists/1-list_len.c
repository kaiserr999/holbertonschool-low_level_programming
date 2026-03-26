#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to the first node of the list_t list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
