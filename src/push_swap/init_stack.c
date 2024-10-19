/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:06:44 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/19 17:34:18 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_stack(t_strhdr *stack, char **argv)
{
	error_check(argv);
	init_strhdr(stack, count_elem(argv), count_elem(argv));
	make_stack(stack, argv);
	coordinate_compre(stack);
}

int	count_elem(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	init_strhdr(t_strhdr *stack, int len, int cap)
{
	stack->len = len;
	stack->cap = cap;
}
