/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:06:26 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/18 09:07:47 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	operate_sa(t_strhdr stack)
{
	t_info tmp;

	tmp = stack.data[0];
	stack.data[0] = stack.data[1];
	stack.data[1] = tmp;
	write(1, "sa\n", 3);
}

void	operate_ra(t_strhdr stack)
{
	t_info tmp;
	int i;

	i = 0;
	tmp = stack.data[0];
	while (i < stack.len - 1)
	{
		stack.data[i] = stack.data[i + 1];
		i++;
	}
	stack.data[i] = tmp;
	write(1, "ra\n", 3);
}

void	operate_rra(t_strhdr stack)
{
	t_info tmp;
	int i;

	i = stack.len - 1;
	tmp = stack.data[i];
	while (i > 0)
	{
		stack.data[i] = stack.data[i - 1];
		i--;
	}
	stack.data[i] = tmp;
	write(1, "rra\n", 4);
}

void	operate_pa(t_strhdr *stack_a, t_strhdr *stack_b)
{
	int i;
	int len;

	i = 0;
	len = stack_a->len;
	if (stack_b->data == NULL)
		return ;
	if (len == stack_a->cap)
		return ;
	while (0 < len)
	{
		stack_a->data[len] = stack_a->data[len - 1];
		len--;
	}
	stack_a->data[0] = stack_b->data[0];
	while (i < stack_b->len - 1)
	{
		stack_b->data[i] = stack_b->data[i + 1];
		i++;
	}
	stack_a->len++;
	stack_b->len--;
	write(1, "pa\n", 3);
}
