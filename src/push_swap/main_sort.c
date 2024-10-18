/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:05:49 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/18 09:05:53 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_max_bit(t_strhdr stack)
{
	int i;
	int max_bit;
	int max;

	i = 0;
	max = stack.data[0].index;
	while (i < stack.len)
	{
		max_bit = 0;
		if (stack.data[i].index > max)
			max = stack.data[i].index;
		i++;
	}
	while (max >> max_bit != 0)
		max_bit++;
	return (max_bit);
}

void	radix_sort(t_strhdr *stack_a, t_strhdr *stack_b)
{
	int i;
	int j;
	int max_bit;
	int size;

	i = 0;
	max_bit = get_max_bit(*stack_a);
	size = stack_a->len;
	while (i < max_bit)
	{
		j = 0;
		while (j++ < size)
		{
			if (((stack_a->data[0].index >> i) & 1) == 1)
				operate_ra(*stack_a);
			else
				operate_pb(stack_a, stack_b);
		}
		while (stack_b->len != 0)
			operate_pa(stack_a, stack_b);
		i++;
	}
}
