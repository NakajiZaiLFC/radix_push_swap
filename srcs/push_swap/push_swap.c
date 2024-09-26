/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:25:55 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/26 21:02:27 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;

	stack_a = ft_process(ac, av);
	if (!stack_a || ft_check_duplicates(stack_a))
	{
		ft_free(&stack_a);
		ft_error();
	}
	if (!ft_check_sorted(stack_a))
		ft_sort(&stack_a);
	ft_free(&stack_a);
	return (0);
}
