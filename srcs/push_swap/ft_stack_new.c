/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:42:06 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/26 20:44:30 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack *ft_stack_new(int content)
{
	t_stack *new;
	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->num = content;
	new->next = NULL;
	return (new);
}