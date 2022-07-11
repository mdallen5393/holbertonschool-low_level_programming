#include "lists.h"
#include "4-free_listint.c"

void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
