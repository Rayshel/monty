#include "monty.h"

/**
 * pint - a function that prints the first element in the stack.
 * @stack: A pointer to a pointer to the begining of the stack
 * implementation list.
 * @line_number: represnents the line number
 * Return: nothing
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		err_pint(line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
