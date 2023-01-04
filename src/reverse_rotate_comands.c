/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_comands.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:57:18 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/28 14:55:50 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate_a(t_all *all, int flag)
{
	if (all->size_a < 2)
		return ;
	all->stack_a = all->stack_a->prev;
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	rev_rotate_b(t_all *all, int flag)
{
	if (all->size_b < 2)
		return ;
	all->stack_b = all->stack_b->prev;
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	rev_rotate_all(t_all *all, int flag)
{
	rev_rotate_a(all, 0);
	rev_rotate_b(all, 0);
	if (flag == 1)
		write(1, "rrr\n", 4);
}
