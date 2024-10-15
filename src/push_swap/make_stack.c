#include "../../includes/push_swap.h"

void	make_stack(t_strhdr *stack, char **argv)
{
	int tmp;
	int i;

	i = 0;
	stack->data = (t_info *)malloc(sizeof(t_info) * stack->len);
	if (!stack->data)
		exit(EXIT_FAILURE);
	init_info(stack);
	while (i < stack->len)
	{
		tmp = ft_atoi(argv[i]);
		stack->data[i].elem = tmp;
		i++;
	}
	if (check_sort(stack, stack->len))
	{
		free(stack->data);
		exit(EXIT_FAILURE);
	}
}

int	check_sort(t_strhdr *stack, int len)
{
	int i;

	i = 0;
	if (len == 0)
		return (FALSE);
	while (i < len - 1)
	{
		if (stack->data[i].elem > stack->data[i + 1].elem)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

void	init_info(t_strhdr *stack)
{
	int i;

	i = 0;
	while (i < stack->len)
	{
		stack->data[i].elem = 0;
		stack->data[i].index = 0;
		i++;
	}
}