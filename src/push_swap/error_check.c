/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:07:17 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/20 19:37:09 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	error_check(char **argv, t_strhdr *stack)
{
	overflow_check(argv, stack);
	isdigit_check(argv, stack);
	duplication_check(argv, stack);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	if (s1[i] != s2[i])
		return (1);
	return (0);
}

void	overflow_check(char **argv, t_strhdr *stack)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j++])
		{
			if ((ft_strlen(argv[i]) > 11) \
			|| (ft_strlen(argv[i]) == 11 && argv[i][0] != '-'))
				free_array_invalid(argv, stack);
			if (ft_strlen(argv[i]) == 11 && argv[i][0] == '-')
			{
				if (ft_strcmp(argv[i], "-2147483648") > 0)
					free_array_invalid(argv, stack);
			}
			if (ft_strlen(argv[i]) == 10)
			{
				if (ft_strcmp(argv[i], "2147483647") > 0)
					free_array_invalid(argv, stack);
			}
		}
		i++;
	}
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
			if (ft_isdigit(argv[i][j]) == 0 && \
			argv[i][j] != '-' && argv[i][j] != '+')
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
