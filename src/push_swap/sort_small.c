/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:06:09 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/21 06:40:51 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_small(t_strhdr stack_a, t_strhdr stack_b)
{
	(void)stack_b;
	if (stack_a.len == 2)
	{
		if (stack_a.data[0].elem > stack_a.data[1].elem)
			operate_sa(stack_a);
	}
	if (stack_a.len == 3)
		sort_three(stack_a);
	else if (stack_a.len == 4)
		sort_four(stack_a, stack_b);
	else if (stack_a.len == 5)
		sort_five(stack_a, stack_b);
}

void	sort_three(t_strhdr stack_a)
{
	if ((stack_a.data[0].elem < stack_a.data[2].elem)
		&& (stack_a.data[2].elem < stack_a.data[1].elem))
	{
		operate_sa(stack_a);
		operate_ra(stack_a);
	}
	else if ((stack_a.data[1].elem < stack_a.data[0].elem)
		&& (stack_a.data[0].elem < stack_a.data[2].elem))
		operate_sa(stack_a);
	else if ((stack_a.data[2].elem < stack_a.data[0].elem)
		&& (stack_a.data[0].elem < stack_a.data[1].elem))
		operate_rra(stack_a);
	else if ((stack_a.data[1].elem < stack_a.data[2].elem)
		&& (stack_a.data[2].elem < stack_a.data[0].elem))
		operate_ra(stack_a);
	else if ((stack_a.data[2].elem < stack_a.data[1].elem)
		&& (stack_a.data[1].elem < stack_a.data[0].elem))
	{
		operate_sa(stack_a);
		operate_rra(stack_a);
	}
}

void	sort_four(t_strhdr stack_a, t_strhdr stack_b)
{
	while (stack_a.data[0].index != 0)
		operate_ra(stack_a);
	operate_pb(&stack_a, &stack_b);
	sort_three(stack_a);
	operate_pa(&stack_a, &stack_b);
}

void	sort_five(t_strhdr stack_a, t_strhdr stack_b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (stack_a.data[1].index == i)
			operate_ra(stack_a);
		else if (stack_a.data[2].index == i)
		{
			operate_ra(stack_a);
			operate_ra(stack_a);
		}
		else
		{
			while (stack_a.data[0].index != i)
				operate_rra(stack_a);
		}
		operate_pb(&stack_a, &stack_b);
		i++;
	}
	sort_three(stack_a);
	i = 0;
	while (i++ < 2)
		operate_pa(&stack_a, &stack_b);
}
