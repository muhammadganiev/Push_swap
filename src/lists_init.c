/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:13:16 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/10 17:12:11 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_all	*lists_init(char **str)
{
	t_all 	*all;
	int		i;
	
	i = 0;
	while (str[i])
		i++;
	all = malloc(sizeof(t_all));
	if (!all)
		return (NULL);
	all->stack_a = NULL;
	all->stack_b = NULL;
	all->size_a = i;
	all->size_b = 0;
	all->min = 1;
	all->max = 0;
	all->med = 0;
	all->min_b = 0;
	all->med_b = 0;
	all->max_b = 0;
	return (all);
}

t_node	*new_list(int num, int index)
{
	t_node	*lst;

	lst = malloc(sizeof(t_node));
	if (!lst)
		return (NULL);
	lst->num = num;
	lst->flag = 0;
	lst->index = index;
	lst->next = NULL;
	lst->prev = NULL;
	return (lst);
}

void	listadd(t_node **stack_a, t_node *new)
{
	t_node	*tmp;
		
	if (!new)
		return ;
	tmp = *stack_a;
	if (tmp)
	{
		if (tmp->prev)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
		}
		else
		{
			new->next = tmp;
			new->prev = tmp;
			tmp->next = new;
			tmp->prev = new;
		}
	}
	else
		*stack_a = new;
}