/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakajim <snakajim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:08:51 by snakajim          #+#    #+#             */
/*   Updated: 2024/10/18 09:08:54 by snakajim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define TRUE 1
# define FALSE 0

# include <stdarg.h>
# include <stdint.h>
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdint.h>
# include <math.h>
# include "../libft/libft.h"

typedef struct s_info
{
	int		elem;
	int		index;
}			t_info;

typedef struct s_strhdr
{
	t_info	*data;
	int		cap;
	int		len;
}			t_strhdr;
void	error_call(void);
void	error_check(char **argv);

int		count_elem(char **str);
void	init_strhdr(t_strhdr *stack, int len, int cap);
void	init_stack(t_strhdr *stack, char **argv);

void	make_stack(t_strhdr *stack, char **argv);
int		check_sort(t_strhdr *stack, int len);
void	init_info(t_strhdr *stack);

void	coordinate_compre(t_strhdr *stack);
void	bubble_sort(int *array, int len);
void	ft_swap(int *a, int *b);
void	coordinate(t_strhdr *stack, int *temp_array);

void	isdigit_check(char **argv);
void    duplication_check(char **argv);

void	push_swap(t_strhdr stack_a, t_strhdr stack_b);
void	sort_small(t_strhdr stack_a, t_strhdr stack_b);
void	radix_sort(t_strhdr *stack_a, t_strhdr *stack_b);
int		get_max_bit(t_strhdr stack);
void	sort_three(t_strhdr stack_a);
void	sort_four(t_strhdr stack_a, t_strhdr stack_b);
void	sort_five(t_strhdr stack_a, t_strhdr stack_b);

void	operate_sa(t_strhdr stack);
void	operate_ra(t_strhdr stack);
void	operate_rra(t_strhdr stack);
void	operate_pa(t_strhdr *stack_a, t_strhdr *stack_b);

void	operate_pb(t_strhdr *stack_a, t_strhdr *stack_b);
void	operate_rb(t_strhdr stack);
void	free_array(char **list, t_strhdr *stack_a, t_strhdr *stack_b);
#endif