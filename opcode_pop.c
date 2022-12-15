#include "monty.h"

/**
 * pop - a function that removes the top element of
 * the stack.
 * @stack: A pointer to a pointer to the begining of
 * the stack implementation list.
 * @line_number: The line number
 * Return: nothing
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL || stack == NULL)
	{
		err_pop(line_number);
		exit(EXIT_FAILURE);
	}
	*stack = temp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(temp);
}
