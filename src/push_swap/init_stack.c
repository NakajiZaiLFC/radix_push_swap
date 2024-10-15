#include "../../includes/push_swap.h"

void test_print(t_strhdr *stack)
{
	printf("stack->data[0].elem: %d\n", stack->data[0].elem);
	printf("stack->data[0].index: %d\n", stack->data[0].index);
	printf("stack->data[1].elem: %d\n", stack->data[1].elem);
	printf("stack->data[1].index: %d\n", stack->data[1].index);
	printf("stack->data[2].elem: %d\n", stack->data[2].elem);
	printf("stack->data[2].index: %d\n", stack->data[2].index);
	printf("stack->data[3].elem: %d\n", stack->data[3].elem);
	printf("stack->data[3].index: %d\n", stack->data[3].index);
	printf("stack->data[4].elem: %d\n", stack->data[4].elem);
	printf("stack->data[4].index: %d\n", stack->data[4].index);

	printf("stack->len: %d\n", stack->len);
	printf("stack->cap: %d\n", stack->cap);
}

void	init_stack(t_strhdr *stack, char **argv)
{
	init_strhdr(stack, count_elem(argv), count_elem(argv));
	make_stack(stack, argv);
	coordinate_compre(stack);
	test_print(stack);
}
int count_elem(char **str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void init_strhdr(t_strhdr *stack, int len, int cap)
{
	stack->len = len;
	stack->cap = cap;
}
