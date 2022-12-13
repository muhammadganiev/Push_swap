/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:40:59 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/13 15:11:52 by muganiev         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	t_all	*all;

	if (ac > 1)
	{
		all = parsing(av);
	}
	return (0);
}
