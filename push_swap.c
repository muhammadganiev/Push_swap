/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:40:59 by muganiev          #+#    #+#             */
/*   Updated: 2023/01/24 23:58:18 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_all	*parsing(char	**av)
{
	t_all		*list;
	char		**str;

	str = ft_args_together(av);
	if (str[0] == NULL)
		exit(0);
	arg_check(str);
	same_num(str);
	list = lists_init(str);
	stack_add(list, str);
	free_arr(str, 0);
	return (list);
}

void	sort(t_all *all)
{
	if (sort_true(all))
		free_stack(all);
	if (all->size_a < 6)
	{
		sort_five(all);
		free_stack(all);
	}
	else if (all->size_a > 5)
	{
		call_chunks(all);
		push_back(all);
	}
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
