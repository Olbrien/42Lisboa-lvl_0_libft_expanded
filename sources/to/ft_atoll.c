/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:56:53 by tisantos          #+#    #+#             */
/*   Updated: 2021/06/20 01:40:47 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
			c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

long long	ft_atoll(const char *str)
{
	long long	ret;
	long long	checker;
	int			sign;

	ret = 0;
	checker = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if (*str && (*str == 43 || *str == 45))
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret = ret * 10 + (*str - 48);
		if (checker > ret && sign == 1)
			return (9223372036854775807);
		else if (checker > ret && sign == -1)
			return (-9223372036854775807);
		str++;
	}
	return (ret * sign);
}
