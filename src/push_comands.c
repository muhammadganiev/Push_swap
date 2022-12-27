/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_comands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:57:26 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/27 15:38:54 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_all *all)
{
	t_node	*tmp;

	tmp = all->stack_b->next;
	all->stack_b->prev->next = all->stack_b->next;
	all->stack_b->next->prev = all->stack_b->prev;
	if (all->stack_a)
	{
		all->stack_b->prev = all->stack_a->prev;
		all->stack_b->next = all->stack_a;
		all->stack_a->prev->next = all->stack_b;
		all->stack_a->prev = all->stack_b;
		all->stack_a = all->stack_b;
	}
	else
	{
		all->stack_a = all->stack_b;
		all->stack_a->next = all->stack_a;
		all->stack_a->prev = all->stack_a;
	}
	all->stack_b = tmp;
}

void	pb(t_all *all)
{
	t_node	*tmp;

	tmp = all->stack_a->next;
	all->stack_a->prev->next = all->stack_a->next;
	all->stack_a->next->prev = all->stack_a->prev;
	if (all->stack_b)
	{
		all->stack_a->prev = all->stack_b->prev;
		all->stack_a->next = all->stack_b;
		all->stack_b->prev->next = all->stack_a;
		all->stack_b->prev = all->stack_a;
		all->stack_b = all->stack_a;
	}
	else
	{
		all->stack_b = all->stack_a;
		all->stack_b->next = all->stack_b;
		all->stack_b->prev = all->stack_b;
	}
	all->stack_a = tmp;
}

void	push_a(t_all *all, int flag)
{
	if (all->size_b == 0)
		return ;
	pa(all);
	if (all->size_b == 1)
		all->stack_b = NULL;
	all->size_a++;
	all->size_b--;
	if (flag)
		write(1, "pa\n", 3);
}

void	push_b(t_all *all, int flag)
{
	if (all->size_a == 0)
		return ;
	pb(all);
	if (all->size_a == 1)
		all->stack_a = NULL;
	all->size_a--;
	all->size_b++;
	if (flag)
		write(1, "pb\n", 3);
}
