/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:40:59 by muganiev          #+#    #+#             */
/*   Updated: 2022/12/08 15:21:04 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	main(int ac, char **av)
{
	t_all	*all;

	if (ac > 1)
	{
		all = parse(av);
		sorting(all);
	}
	return (0);
}