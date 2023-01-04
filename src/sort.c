/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:50:13 by muganiev          #+#    #+#             */
/*   Updated: 2023/01/04 14:16:32 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three_a(t_all *all)
{
	int	a;
	int	b;
	int	c;

	a = all->stack_a->index;
	b = all->stack_a->next->index;
	c = all->stack_a->next->next->index;
	if (b > c && b > a)
		rev_rotate_a(all, 1);
	else if (a > b && a > c)
		rotate_a(all, 1);
	a = all->stack_a->index;
	b = all->stack_a->next->index;
	if (a > b)
		swap_a(all, 1);
}

void	sort_five(t_all *all)
{
	if (all->size_a == 5)
	{
		while (all->size_a > 3)
		{
			med_min_max(all);
			if (all->stack_a->index == all->min)
			{
				push_b(all, 1);
			}
			else
				rev_rotate_a(all, 1);
		}
		sort_three_a(all);
		push_a(all, 1);
		push_a(all, 1);
	}
	if (all->size_a == 4)
		sort_four(all);
	else if (all->size_a < 4)
		sort_three_a(all);
}

void	sort_four(t_all *all)
{
	if (all->size_a == 4)
	{
		while (all->size_a > 3)
		{
			med_min_max(all);
			if (all->stack_a->index == all->min)
			{
				push_b(all, 1);
			}
			else
				rev_rotate_a(all, 1);
		}
		sort_three_a(all);
		push_a(all, 1);
	}
}
