/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compre.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:07:21 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/18 09:07:26 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	coordinate_compre(t_strhdr *stack)
{
	int *tmp_array;
	int i;

	i = 0;
	tmp_array = (int *)malloc(sizeof(int) * stack->len);
	if (!tmp_array)
		exit(EXIT_FAILURE);
	while (i < stack->len)
	{
		tmp_array[i] = stack->data[i].elem;
		i++;
	}
	bubble_sort(tmp_array, i);
	coordinate(stack, tmp_array);
	free(tmp_array);
}

void	bubble_sort(int *array ,int len)
{
	int i;
	int j;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if (array[j] > array[j + 1])
				ft_swap(&array[j], &array[j + 1]);
			j++;
		}
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	coordinate(t_strhdr *stack, int *temp_array)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->len)
	{
		j = 0;
		while (j < stack->len)
		{
			if (temp_array[i] == stack->data[j].elem)
				stack->data[j].index = i;
			j++;
		}
		i++;
	}
}
