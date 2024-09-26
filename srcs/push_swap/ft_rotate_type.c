/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:47:41 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/26 21:59:19 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int	i;
	t_stack *tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, tmp->num);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->num))
			i = ft_case_rarb(a, b, tmp->num);
		if (i > ft_case_rrarrb(a, b, tmp->num))
			i = ft_case_rrarrb(a, b, tmp->num);
		if (i > ft_case_rarrb(a, b, tmp->num))
			i = ft_case_rarrb(a, b, tmp->num);
		if (i > ft_case_rrarb(a, b, tmp->num))
			i = ft_case_rrarb(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}