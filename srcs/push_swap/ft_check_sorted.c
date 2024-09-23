/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:49:14 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/23 15:53:07 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_check_sorted(t_stack *stack_a)
{
	int		i;

	i = stack_a->num;
	while (stack_a)
	{
		if (i > stack_a->num)
			return (FALSE);
		i = stack_a->num;
		stack_a = stack_a->next;
	}
	return (TRUE);
}
