/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:41:41 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/07 20:05:12 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
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
