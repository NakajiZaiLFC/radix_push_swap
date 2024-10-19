/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:07:17 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/19 17:30:25 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	error_check(char **argv)
{
	isdigit_check(argv);
	duplication_check(argv);
}

void	isdigit_check(char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argv[i] == NULL)
		error_call();
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 && \
			argv[i][j] != '-' && argv[i][j] != '+')
				error_call();
			j++;
		}
		ft_atoi(argv[i]);
		i++;
	}
}

void	duplication_check(char **argv)
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
				error_call();
			j++;
		}
		i++;
	}
}

void	error_call(void)
{
	write (2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
