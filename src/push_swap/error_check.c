/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:07:17 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/21 07:29:06 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	error_check(char **argv, t_strhdr *stack)
{
	overflow_check(argv, stack);
	isdigit_check(argv, stack);
	duplication_check(argv, stack);
}

void	isdigit_check(char **argv, t_strhdr *stack)
{
	int	i;
	int	j;

	i = 0;
	if (argv[i] == NULL)
		free_array_invalid(argv, stack);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 && argv[i][j] != '-'
				&& argv[i][j] != '+')
				free_array_invalid(argv, stack);
			j++;
		}
		i++;
	}
}

void	duplication_check(char **argv, t_strhdr *stack)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				free_array_invalid(argv, stack);
			j++;
		}
		i++;
	}
}

void	overflow_check(char **argv, t_strhdr *stack)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 1)
			{
				if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
					free_array_invalid(argv, stack);
			}
			j++;
		}
		i++;
	}
}
