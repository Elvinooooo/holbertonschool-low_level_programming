 #include "monty.h"
/**
 * is_opcode - Check if a token is an opcode
 * @token: Token to check
 * Return: 1 if it's an opcode, 0 otherwise
 */
int is_opcode(const char *token)
{
	const char *opcodes[] = {
		"push",
		"pall",
		NULL
	}
	int i = 0;

	while (opcodes[i])
	{
		if (strcmp(token, opcodes[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

/**
 * execute_opcode - Execute the function corresponding to the opcode
 * @opcode: Opcode to execute
 * @line_number: Line number in the Monty byte code file
 */
void execute_opcode(const char *opcode, unsigned int line_number)
{
	const char *arg_token;
	int value;

	if (strcmp(opcode, "push") == 0)
	{
		arg_token = strtok(NULL, " \t\n");
		value = atoi(arg_token);
		if (value !=0 || (value == 0 && *arg_token =='0'))
			push_function(value, line_number);
		else
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	else if (strcmp(opcode, "pall") == 0)
		pall_function(line_number);
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode;
		exit(EXIT_FAILURE);
	}
}
/**
 * push_function - Push a value onto the stack
 * @value: Value to push
 * @line_number: Line number in the Monty byte code file
 */
void push_function(int value, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}
/**
 * pall_function - Print all values on the stack
 * @line_number: Line number in the Monty byte code file
 */

void pall_function(unsigned int line_number)
{
	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
