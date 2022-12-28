/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:40:59 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/28 13:49:54 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_all	*parsing(char	**av)
{
	t_all	*list;
	char	**str;

	str = ft_args_together(av);
	arg_check(str);
	same_num(str);
	list = lists_init(str);
	stack_add(list, str);
	free_arr(str, 0);
	return (list);
}

void	sort(t_all *all)
{
	if (all->size_a == 2)
		swap_a(all, 1);
	else if (all->size_a == 3)
		sort_three_a(all);
}

int	main(int ac, char **av)
{
	t_all	*all;

	if (ac > 1)
	{
		all = parsing(av);
		sort(all);
	}
	return (0);
}
