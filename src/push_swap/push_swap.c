/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:08:01 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/19 22:35:41 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_swap(t_strhdr stack_a, t_strhdr stack_b)
{
	if (stack_a.len < 6)
		sort_small(stack_a, stack_b);
	else
		radix_sort(&stack_a, &stack_b);
}

int	main(int argc, char **argv)
{
	t_strhdr	stack_a;
	t_strhdr	stack_b;
	char		**list;

	list = argv;
	if (argc == 1 || *argv[1] == '\0')
		exit(EXIT_FAILURE);
	if (argc == 2)
	{
		list = ft_split(argv[1], ' ');
		if (!list)
			error_call();
	}
	else
		list++;
	init_stack(&stack_a, list);
	stack_b.data = (t_info *)malloc(sizeof(t_info) * stack_a.len);
	if (!stack_b.data)
		exit(EXIT_FAILURE);
	init_strhdr(&stack_b, 0, stack_a.len);
	init_info(&stack_b);
	push_swap(stack_a, stack_b);
	free_array(list, &stack_a, &stack_b);
	return (0);
}
