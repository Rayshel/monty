#include "monty.h"

/**
 * push - a function that pushes value to stack.
 * @stack: rperesents a pointer to a pointer to the begining
 * of the stack implementation list.
 * @line_number: Represents the line number.
 * Return: nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
	int element, index = 0;

	if (value == NULL)
	{
		err_int(line_number);
		exit(EXIT_FAILURE);
	}
	if (value[0] == '-')
		index++;
	for (; value[index]; index++)
	{
		if (value[index] >= '0' && value[index] <= '9')
			continue;
		err_int(line_number);
		exit(EXIT_FAILURE);
	}
	element = atoi(value);
	if (mode == 1)
		add_dnodeint_end(stack, element);
	else
		add_dnodeint(stack, element);
}

/**
 * pall - a function that prints all elements from the stack.
 * @stack: represents a pointer to a pointer to the begining
 * of the stack implementation list.
 * @line_number: represents the line number
 *
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *traverse;

	(void)line_number;

	if (*stack == NULL || stack == NULL)
		return;
	traverse = *stack;
	while (traverse)
	{
		printf("%d\n", traverse->n);
		traverse = traverse->next;
	}
}
