/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:06:58 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/20 16:52:02 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_array(char **list, t_strhdr *stack_a, t_strhdr *stack_b)
{
	int	i;

	i = 0;
	if (stack_a->argc == 2)
	{
		while (list[i])
		{
			free(list[i]);
			i++;
		}
		free(list);
	}
	free(stack_a->data);
	free(stack_b->data);
}

void	free_array_sorted(char **list, t_strhdr *stack)
{
	int	i;

	i = 0;
	if (stack->argc == 2)
	{
		while (list[i])
		{
			free(list[i]);
			i++;
		}
		free(list);
	}
	free(stack->data);
}
