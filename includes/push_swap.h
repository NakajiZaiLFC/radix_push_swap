/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:43:36 by snakajim          #+#    #+#             */
/*   Updated: 2024/09/26 22:20:45 by snakajim         ###   ########.fr       */
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
t_stack		*ft_process(int ac, char **av);
t_stack		*ft_sub_process_args(char **av);
t_stack		*ft_stack_new(int content);
void		ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_lstsize(t_stack *lst);
void		ft_sa(t_stack **a, int j);
void		ft_pb(t_stack **stack_a, t_stack **stack_b, int j);
int			ft_check_sorted(t_stack *stack_a);
void		ft_sort_b_till_3(t_stack **stack_a, t_stack **b);
int			ft_rotate_type_ab(t_stack *a, t_stack *b);
int			ft_case_rarb(t_stack *a, t_stack *b, int c);
int			ft_find_place_b(t_stack *b, int nbr_push);
int		 	ft_min(t_stack *a);
int			ft_max(t_stack *a);
int			ft_find_index(t_stack *a, int num);


#endif