/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:41:41 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/09 18:50:02 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
#include "libft/libft.h"

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
    t_node  *stack_a;
    t_node  *stack_b;
    int min_a;
    int med;
    int len_a;
    int len_b;
}t_all;

//main
t_all	*parsing(char	**av);

//parsing
void error(void);
void	free_arr(char **arr, int flag);
void	same_num(char	**str);
void	arg_check(char **arr);
char	**ft_args_together(char **av);
//sorting

#endif