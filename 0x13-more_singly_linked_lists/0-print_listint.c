#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints
 * all elements of a listint_t list
 *
 * @h: pointeur to firstt element in the list(head)
 *
 * Return: elements in tthe list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
