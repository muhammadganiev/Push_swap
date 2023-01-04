/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:17:33 by muganiev          #+#    #+#             */
/*   Updated: 2023/01/04 14:26:38 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_position(t_all *all)
{
	int		count;
	t_node	*tmp;

	count = 0;
	tmp = all->stack_b;
	while (all->stack_b != NULL)
	{
		if (all->max_b == all->stack_b->index)
			break ;
		count++;
		all->stack_b = all->stack_b->next;
	}
	all->stack_b = tmp;
	return (count);
}

void	push_back(t_all *all)
{
	int	i;
	int	position;

	position = 0;
	i = all->size_b;
	while (i)
	{
		i = all->size_b;
		med_min_max_b(all);
		position = find_position(all);
		if (all->stack_b->index == all->max_b)
			push_a(all, 1);
		else if (position < all->size_b / 2)
		{
			rotate_b(all, 1);
		}
		else
			rev_rotate_b(all, 1);
		i--;
	}
}
