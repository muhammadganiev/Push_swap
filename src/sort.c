/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:50:13 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/27 15:39:37 by muganiev         ###   ########.fr       */
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
