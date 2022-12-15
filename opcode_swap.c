#include "monty.h"

/**
 * swap - a function that swaps the top two elements
 * of the stack.
 * @stack: A pointer to a pointer to the begining of
 * the stack implementation list.
 * @line_number: represents the line number
 * Return: nothing
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack, *next = NULL;
	int leng = dlistint_len(*stack);

	if (leng < 2)
	{
		err_swap(line_number);
		exit(EXIT_FAILURE);
	}
	next = (*stack)->next;
	head->prev = next;
	head->next = next->next;
	next->next = head;
	next->prev = NULL;
	*stack = next;
}
