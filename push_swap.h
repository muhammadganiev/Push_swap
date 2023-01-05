/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:41:41 by muganiev          #+#    #+#             */
/*   Updated: 2023/01/05 16:54:12 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct node
{
	int			num;
	int			index;
	int			flag;
	struct node	*next;
	struct node	*prev;
}t_node;

typedef struct all
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		size_a;
	int		size_b;
	int		min;
	int		max;
	int		med;
	int		min_b;
	int		med_b;
	int		max_b;
}t_all;

//main
t_all	*parsing(char	**av);

//parsing
void	error(void);
void	free_arr(char **arr, int flag);
void	same_num(char	**str);
void	arg_check(char **arr);
char	**ft_args_together(char **av);

//list init
void	listadd(t_node **stack_a, t_node *new);
t_node	*new_list(int num, int index);
t_all	*lists_init(char **str);

//stack add
void	stack_add(t_all *all, char **arr);
void	bubble_sort(t_all *all, int *sort, int *non_sort, int len);
void	create_stack(t_all	*all, int *sort, int *non_sort, int len);

//comands
void	swap_a(t_all *all, int flag);
void	swap_b(t_all *all, int flag);
void	swap_all(t_all *all, int flag);

void	rotate_a(t_all *all, int flag);
void	rotate_b(t_all *all, int flag);
void	rotate_all(t_all *all, int flag);

void	rev_rotate_a(t_all *all, int flag);
void	rev_rotate_b(t_all *all, int flag);
void	rev_rotate_all(t_all *all, int flag);

void	push_a(t_all *all, int flag);
void	push_b(t_all *all, int flag);

//sorting
void	sort_three_a(t_all *all);
void	sort_four(t_all *all);
void	sort_five(t_all *all);

//chunks alg
int		find_block(t_all *all);
void	call_chunks(t_all *all);
void	chunk(t_all *all);
void	printstack(t_node *top);
void	med_min_max_b(t_all *all);

//med_min_max and indications
void	med_min_max(t_all *all);
int		sort_true(t_all *all);
void	free_stack(t_all *all);
void	push_down(t_all *all, int flag);

//push back cmd
int		find_position(t_all *all);
void	push_back(t_all *all);
#endif