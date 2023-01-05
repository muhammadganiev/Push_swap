/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muganiev <muganiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:39:48 by muganiev          #+#    #+#             */
/*   Updated: 2023/01/05 16:59:46 by muganiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *str, int *i)
{
	if (str[*i] == '+')
	{
		*i = *i + 1;
		return (1);
	}
	if (str[*i] == '-')
	{
		*i = *i + 1;
		return (-1);
	}
	if (str[*i] < 48 || str[*i] > 57)
		return (0);
	if (str[*i] >= 48 || str[*i] <= 57)
		return (1);
	return (0);
}

long long	ret_int(long long integer, int flag)
{
	if (integer > 9223372036854775807 && flag == 1)
		return (-1);
	if (integer > 9223372036854775807 && flag == -1)
		return (0);
	if (flag == -1)
		integer *= -1;
	return (integer);
}

long long	ft_atoi(const char *str)
{
	int			i;
	long long	integer;
	int			flag;

	integer = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	flag = ft_check(str, &i);
	if (flag == 0)
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		integer += (str[i] - '0');
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			integer *= 10;
		else
			break ;
		i++;
	}
	integer = ret_int(integer, flag);
	return (integer);
}
