#include "lists.h"

/**
 * list_len - number of elements in a linked
 * @h: the header pointer
 *
 * Return:number of element
 */

size_t list_len(const list_t *h)
{
	int counter;

	counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
