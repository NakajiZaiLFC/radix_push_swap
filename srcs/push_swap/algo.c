/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:24:38 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/26 21:01:16 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack *ft_sub_process_args(char **av)
{
	t_stack	*stack_a;
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	stack_a = NULL;
	tmp = ft_split(av[1], ' ');
	while (tmp[i])
	{
		j = ft_atoi(tmp[i]);
		ft_add_back(&stack_a, ft_new_stack(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (stack_a);
}

t_stack	*ft_process(int ac, char **av)
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
