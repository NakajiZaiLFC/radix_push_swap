#include "../../includes/push_swap.h"

void	error_checker(char **argv)
{
	int i;
	int j;

	i = 0;
	if (argv[i] == NULL)
		error_call();
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 && argv[i][j] != '-' && argv[i][j] != '+')
				error_call();
			j++;
		}
		ft_atoi(argv[i]);
		i++;
	}
}

void	duplication_check(char **argv)
{
	int i;
	int j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				error_call();
			j++;
		}
		i++;
	}
}

// void	init_stack2(t_stack *stack_a, char **argv)
// {
// 	int i;
// 	t_stack *new;
// 	t_stack *tmp;


// 	i = 0;
// 	stack_a->num = ft_atoi(argv[i]);
// 	stack_a->index = 0;
// 	stack_a->len = 1;
// 	stack_a->capa = 1;
// 	stack_a->next = NULL;
// 	stack_a->prev = NULL;
// 	i++;
// 	while (argv[i])
// 	{
// 		new = (t_stack *)malloc(sizeof(t_stack));
// 		if (!new)
// 			error_call();
// 		new->num = ft_atoi(argv[i]);
// 		new->index = i;
// 		new->len = i + 1;
// 		new->capa = i + 1;
// 		new->next = NULL;
// 		tmp = stack_a;
// 		while (tmp->next)
// 			tmp = tmp->next;
// 		tmp->next = new;
// 		new->prev = tmp;
// 		i++;
// 	}
// }

void	init_stack(char **argv)
{
	error_checker(argv);
	duplication_check(argv);
	// init_stack2(stack_a, argv);
}