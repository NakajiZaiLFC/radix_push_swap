/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:49:51 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/26 22:17:14 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_min(t_stack *a)
{
	int i;

	i = a->num;
	while (a)
	{
		if (a->num < i)
			i = a->num;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_stack *a)
{
	int i;

	i = a->num;
	while (a)
	{
		if (a->num > i)
			i = a->num;
		a = a->next;
	}
	return (i);
}

t_stack *ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_stack *lst)
{
	size_t i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}