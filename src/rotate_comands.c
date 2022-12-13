/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_comands.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:57:23 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/12 20:15:39 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_all *all, int flag)
{
	if (all->size_a < 2)
		return ;
		all->stack_a = all->stack_a->next;
	if (flag == 1)
		write(1, "ra", 2);
}

void	rotate_b(t_all *all, int flag)
{
	if (all->size_b < 2)
		return ;
		all->stack_b = all->stack_b->next;
	if (flag == 1)
		write(1, "rb", 2);
}

void	rotate_all(t_all *all, int flag)
{
	rotate_a(all, 0);
	rotate_b(all, 0);
	if (flag == 1)
		write(1, "rr", 2);
}
