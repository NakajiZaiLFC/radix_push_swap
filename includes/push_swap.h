/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:43:36 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/25 18:30:49 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define FAILURE 1
# define ERROR -1

typedef struct s_stack
{
	long			num;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void		ft_sort(t_stack **stack_a);
void		ft_free(t_stack **lst);
void		ft_error(void);
int			ft_check_sorted(t_stack *stack_a);
int			ft_check_duplicates(t_stack *stack_a);
t_stack		*ft_process_args(int ac, char **av)

#endif