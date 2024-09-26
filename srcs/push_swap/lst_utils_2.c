/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:05:07 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/26 22:20:59 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_find_index(t_stack *a, int num)
{
	int i;

	i = 0;
	while (a->num != num)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int	ft_find_place_b(t_stack *b, int nbr_push)
{
	int i;
	t_stack *tmp;

	i = 1;
	if (nbr_push > b->num && nbr_push < ft_lstlast(b)->num)
		i = 0;
	else if (nbr_push > ft_max(b) || nbr_push < ft_min(b))
		i = ft_find_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->num < nbr_push || tmp->num > nbr_push)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}