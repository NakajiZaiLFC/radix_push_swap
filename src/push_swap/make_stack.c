/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:06:32 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/20 16:50:19 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	make_stack(t_strhdr *stack, char **argv)
{
	int	tmp;
	int	i;

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
		free_array_sorted(argv, stack);
		exit(EXIT_FAILURE);
	}
}

int	check_sort(t_strhdr *stack, int len)
{
	int	i;

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
	int	i;

	i = 0;
	while (i < stack->len)
	{
		stack->data[i].elem = 0;
		stack->data[i].index = 0;
		i++;
	}
}
