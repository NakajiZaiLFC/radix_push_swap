/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:24:38 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/23 15:37:35 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_process_args(int ac, char **av)
{
	t_stack	*stack_a;
	size_t	i;
	int		j;

	i = 1;
	stack_a = NULL;
	if (ac < 2)
		ft_error();
	if (ac == 2)
		stack_a = ft_sub_process_args(av);
	else
	{
		while (i < ac)
		{
			j = ft_atoi(av[i]);
			ft_add_back(&stack_a, ft_new_stack(j));
			i++;
		}
	}
	return (stack_a);
}
