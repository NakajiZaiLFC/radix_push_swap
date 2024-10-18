/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:06:20 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/18 09:07:53 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	operate_pb(t_strhdr *stack_a, t_strhdr *stack_b)
{
	int i;
	int len;

	i = 0;
	len = stack_b->len;
	if (stack_a->data == NULL)
		return ;
	if (len == stack_b->cap)
		return ;
	while (0 < len)
	{
		stack_b->data[len] = stack_b->data[len - 1];
		len--;
	}
	stack_b->data[0] = stack_a->data[0];
	while (i < stack_a->len - 1)
	{
		stack_a->data[i] = stack_a->data[i + 1];
		i++;
	}
	stack_a->len--;
	stack_b->len++;
	write(1, "pb\n", 3);
}

void	operate_rb(t_strhdr stack)
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
	write(1, "rb\n", 3);
}
