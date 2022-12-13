/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_comands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:57:20 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/12 20:15:47 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_all *all, int flag)
{
	int	tmp;

	if (all->size_a < 2)
		return ;
	tmp = all->stack_a->index;
	all->stack_a->index = all->stack_a->next->index;
	all->stack_a->next->index = tmp;
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	swap_b(t_all *all, int flag)
{
	int	tmp;

	if (all->size_b < 2)
		return ;
	tmp = all->stack_b->index;
	all->stack_b->index = all->stack_b->next->index;
	all->stack_b->next->index = tmp;
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	swap_all(t_all *all, int flag)
{
	swap_a(all, 0);
	swap_b(all, 0);
	if (flag == 1)
		write(1, "ss\n", 3);
}
