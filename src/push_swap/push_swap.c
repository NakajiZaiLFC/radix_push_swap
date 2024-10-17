
#include "../../includes/push_swap.h"


void	push_swap(t_strhdr stack_a, t_strhdr stack_b)
{
	if (stack_a.len < 6)
		sort_small(stack_a, stack_b);
	// else
	// 	main_sort(&stack_a, &stack_b);
}

int main(int argc, char **argv)
{
	t_strhdr	stack_a;
	t_strhdr	stack_b;
	char		**list;

	list = NULL;
	if (argc == 1 || *argv[1] == '\0')
		exit(EXIT_FAILURE);
	if (argc == 2)
	{
		list = ft_split(argv[1], ' ');
		if (!list)
			error_call();
		argv = list;
	}
	else
		argv++;
	error_check(argv);
	init_stack(&stack_a, argv);
	stack_b.data = (t_info *)malloc(sizeof(t_info) * stack_a.len);
	if (!stack_b.data)
		exit(EXIT_FAILURE);
	init_strhdr(&stack_b, 0, stack_a.len);
	init_info(&stack_b);
	push_swap(stack_a, stack_b);
	// free_array(argv, 0);

	// printf("argc: %d\n", argc);
	// printf("argv[0]: %s\n", argv[0]);
	// printf("argv[1]: %s\n", argv[1]);
	// printf("argv[2]: %s\n", argv[2]);
	// printf("argv[3]: %s\n", argv[3]);
	// printf("argv[4]: %s\n", argv[4]);
	return (0);
}
